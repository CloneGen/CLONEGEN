import numpy as np 
import pandas as pd 
import random 
import torch 
import os
import time
import pickle as pkl
from tqdm import tqdm
import torch.utils.data as Data
from collections import Counter
from datetime import timedelta

 
UNK, PAD = '<UNK>', '<PAD>'   
CLS, SEP = '<CLS>', '<SEP>'
MASK = '<MASK>'

MAX_VOCAB_SIZE=100000 


def get_vocab(file_path, programs_path,tokenizer, max_size, min_freq=0):
 
    vocab_dic={}
    programs=pd.read_pickle(programs_path)
    train_file=pd.read_pickle(file_path)
    id1=list(train_file.id1)
    id2=list(train_file.id2)
    id1.extend(id2)
    ids=set(id1)
    max_len=0
    sums=0
    for id_num in tqdm(ids):
        code=(programs.loc[programs['index']==id_num]).iloc[0,1]
        code=code.replace('\n','')
        code=code.split()
        sums+=len(code)
        if(len(code)>max_len):
            max_len=len(code)
        if(not code):
            continue
        for word in tokenizer(code):
            vocab_dic[word] = vocab_dic.get(word, 0) + 1
    vocab_list = sorted([_ for _ in vocab_dic.items() if _[1] >= min_freq], key=lambda x: x[1], reverse=True)[:max_size]
    vocab_dic = {word_count[0]: idx+5 for idx, word_count in enumerate(vocab_list)}
    vocab_dic.update({PAD:0,UNK:1,CLS:2,SEP:3,MASK:4})
    # vocab_dic.update({UNK: len(vocab_dic), PAD: len(vocab_dic) + 1})
    # print('avg code len:',sums//len(ids))
    # print("max code len:",max_len)
    return vocab_dic

def programs_to_number(programs_path,vocab,pad_size=500):
 
    programs_id=[]
    programs_content=[]
    programs_label=[]
    programs=pd.read_pickle(programs_path)
    programs.columns=['index','code','classnum']
    for i in tqdm(range(len(programs.code))):
        code=programs.code[i]
        code.strip()
        code=code.replace('\n','')
        code=code.split()
        code_line=[]
        # if(pad_size):
        #     if(len(code)<pad_size):
        #         code.extend([PAD]*(pad_size-len(code)))
        #     else:
        #         code=code[:pad_size]
        for word in code:
            code_line.append(vocab.get(word,vocab.get(UNK)))
        programs_id.append(programs.index[i])
        programs_content.append(code_line)
        programs_label.append(programs.classnum[i])
        programs.code[i]=code_line

    # programs.to_pickle('./dataset/programs_number.pkl')
    return programs


def build_dataset(config): 
    tokenizer = lambda x: [y for y in x]  
    if os.path.exists(config.vocab_path):
        vocab = pkl.load(open(config.vocab_path, 'rb'))
    else:
        vocab=get_vocab(config.train_path,config.programs_path,tokenizer=tokenizer,max_size=MAX_VOCAB_SIZE, min_freq=0)
        pkl.dump(vocab, open(config.vocab_path, 'wb'))

    if os.path.exists(config.programs_number_path):
        programs2id=pd.read_pickle(config.programs_number_path)
    else:
        programs2id = programs_to_number(config.programs_path,vocab,config.pad_size)
        programs2id.to_pickle(config.programs_number_path)

    PAD_NUM=vocab.get(PAD)
        
    def load_dataset(path,programs):
        contents=[]
        pairs=pd.read_pickle(path)
        for i in tqdm(range(len(pairs.id1))):
            id1=pairs.iloc[i][0]
            id2=pairs.iloc[i][1] 
            label=pairs.iloc[i][2]
            num1=(programs[programs['index']==id1]).iloc[0,1]
            num2=(programs[programs['index']==id2]).iloc[0,1]
            if(len(num1)<config.pad_size):
                num1=num1+[PAD_NUM]*(config.pad_size-len(num1))
            else:
                num1=num1[:config.pad_size]
            
            if(len(num2)<config.pad_size):
                num2=num2+[PAD_NUM]*(config.pad_size-len(num2))
            else:
                num2=num2[:config.pad_size]
            contents.append((num1,num2,label))
        return contents
    
    train=load_dataset(config.train_path,programs2id)
    dev=load_dataset(config.dev_path,programs2id)
    test=load_dataset(config.test_path,programs2id)
    return train,dev,test

class DatasetIterater(object): 
    def __init__(self,batches,batch_size,device):
        self.batch_size=batch_size
        self.batches=batches
        self.n_batches=len(batches)// batch_size
        self.residue = False  # 记录batch数量是否为整数
        if len(batches) % self.n_batches != 0:
            self.residue = True
        self.index = 0
        self.device = device

    def _to_tensor(self, datas):
        x = torch.LongTensor([_[0] for _ in datas]).to(self.device)
        y = torch.LongTensor([_[1] for _ in datas]).to(self.device)
        label=torch.LongTensor([_[2] for _ in datas]).to(self.device)
        return x,y,label
    
    def __next__(self):
        if self.residue and self.index == self.n_batches:
            batches = self.batches[self.index * self.batch_size: len(self.batches)]
            self.index += 1
            batches = self._to_tensor(batches)
            return batches

        elif self.index >= self.n_batches:
            self.index = 0
            raise StopIteration
        else:
            batches = self.batches[self.index * self.batch_size: (self.index + 1) * self.batch_size]
            self.index += 1
            batches = self._to_tensor(batches)
            return batches
    
    def __iter__(self):
        return self
    
    def __len__(self):
        if self.residue:
            return self.n_batches+1
        else:
            return self.n_batches


def build_iterator(dataset,config):
    iter=DatasetIterater(dataset,config.batch_size,config.device)
    return iter




