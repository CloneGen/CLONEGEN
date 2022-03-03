import os
import re
import sys 
import tqdm
import json
import random
import argparse
import numpy as np
import pandas as pd
import pickle as pkl
from multiprocessing import Pool
from utils import get_code_token,SPECIAL_WORD
sys.path.append('.')

'''
这个文件主要完成
1. poj 文件的过滤
2. 从poj 文件生成整体的programs.pkl 文件
3. 生成clone 和 非 clone 相对应
'''

def get_file_path(root_path,file_list,dir_list):
    '''获取所有的文件'''
    dir_or_files = os.listdir(root_path)
    for dir_file in dir_or_files:
        dir_file_path = os.path.join(root_path,dir_file)
        if os.path.isdir(dir_file_path):
            dir_list.append(dir_file_path)
            get_file_path(dir_file_path,file_list,dir_list)
        else:
            file_list.append(dir_file_path)

#------------------------------start 
# 文件过滤
def find_unchinese(file):     
    pattern = re.compile(r'[\u4e00-\u9fa5]')     
    unchinese = re.sub(pattern,"",file) 
    return unchinese

def filter_file(file_list):
    '''
    运行的时候先运行这个函数过滤掉有问题的代码
    过滤掉有问题的代码，有问题的代码有281个'''
    count=0
    for file_path in file_list:
        try:
            with open(file_path,'rb') as fp:
                data=fp.read()
                data=data.decode('utf-8')
                data=find_unchinese(data)
        except Exception as e:
            count=count+1
            print(file_path) 
            os.remove(file_path)
            continue
        with open(file_path,'w') as fp:
            fp.write(data)
    # print(count)
#------------------------------end

#------------------------------start 
# 生成programs对应的pkl文件
def gen_programs_pkl(file_list):
    '''
    将所有的数据生成一个pkl 文件
    '''
    ids=[]
    files=[]
    labels=[]
    for file_path in file_list:
        paths=file_path.split('/')
        dirname=int(paths[-2])
        filename=int(paths[-1][:-2])
        id=dirname*10000+filename
        with open(file_path) as fp:
            file_code=fp.read()
        ids.append(id)
        files.append(file_code)
        labels.append(dirname)
    data={"index":ids,'code':files,'numclass':labels}
    df=pd.DataFrame(data)
    df.to_pickle('programs.pkl')
#-----------------------------end

#-----------------------------start
#生成数据对
def gen_file_pairs_subprocess(data):
    # root_path='./Programs/'
    dirs,codes,dir_codes=data
    id1,id2,label=[],[],[]
    neg_dirs=list(dir_codes.keys())
    for i,code1 in enumerate(codes[:len(codes)]):
        for code2 in codes[i:]:
            id1.append(root_path+str(dirs)+'/'+str(code1)+'.c')
            id2.append(root_path+str(dirs)+'/'+str(code2)+'.c')
            label.append(1)
            neg_dir=random.choice(neg_dirs)
            while(neg_dir==dirs):
                neg_dir=random.choice(neg_dirs)
            neg_codes=dir_codes[neg_dir]
            neg_code=random.choice(neg_codes)
            code=random.choice([code1,code2])
            id1.append(root_path+str(dirs)+'/'+str(code)+'.c')
            id2.append(root_path+str(neg_dir)+'/'+str(neg_code)+'.c')
            label.append(0)
    return id1,id2,label

def gen_file_pairs(file_list):
    '''
    生成对应的克隆对和非克隆对
    '''
    dir_codes={}
    for file_path in file_list: 
        paths=file_path.split('/')
        dirname=int(paths[-2])
        filename=int(paths[-1][:-2])
        codes=dir_codes.get(dirname,list())
        codes.append(filename)
        dir_codes[dirname]=codes

    clone_count=0
    id1=[]
    id2=[]
    label=[]
    neg_dirs=list(dir_codes.keys())
    process=[]
    for dirs,codes in dir_codes.items():
        process.append([dirs,codes,dir_codes])
    with Pool(40) as p:
        for i in p.imap(gen_file_pairs_subprocess,tqdm.tqdm(process)):
            id1.extend(i[0])
            id2.extend(i[1])
            label.extend(i[2])
    data={
        "id1":id1,
        "id2":id2,
        "label":label
    }
    df=pd.DataFrame(data)
    sampler=np.random.permutation(len(label))
    df=df.take(sampler)
    df.reset_index(inplace=True,drop=True)
    df_test=df.sample(frac=0.001,replace=False)
    # df_test.to_pickle("moj_clone_ids_001.pkl")
    df_test=df.sample(frac=0.1,replace=False)
    # df_test.to_pickle("moj_clone_ids_1.pkl")
    df_test=df.sample(frac=0.01,replace=False)
    df_test.to_pickle("oj_clone_ids_01.pkl")
    # df.to_pickle("moj_clone_ids.pkl")

def split_pairs(filename):
    pairs=pd.read_pickle(filename)
    train_num=int(len(pairs)*0.8)
    val_num=int(len(pairs)*0.1)
    df_train=pairs.iloc[:train_num]
    df_val=pairs.iloc[train_num:train_num+val_num]
    df_test=pairs.iloc[train_num+val_num:]
    df_train.reset_index(inplace=True,drop=True)
    df_val.reset_index(inplace=True,drop=True)
    df_test.reset_index(inplace=True,drop=True)
    df_train.to_pickle("oj_clone_ids_train.pkl")
    df_val.to_pickle("oj_clone_ids_val.pkl")
    df_test.to_pickle("oj_clone_ids_test.pkl")
    
#-----------------------------end 


#-----------------------------start
# 数据转换为token 加快训练速度
def padding_code(sequences, maxlen=512, pos='r-pre'):
    sequences = [vocab.get(s, SPECIAL_WORD['<UNK>']) for s in sequences]
    if len(sequences) > maxlen:
        sequences = sequences[:maxlen]
    if pos == 'pre':
        sequences = [SPECIAL_WORD['<PAD>']] * (maxlen - len(sequences)) + sequences
    else:
        sequences = sequences + [SPECIAL_WORD['<PAD>']] * (maxlen - len(sequences))
    return sequences

def preprocess_code_data_subprocess(data):
    id1,id2,label=data
    token1=get_code_token(id1)
    token2=get_code_token(id2)
    token1=padding_code(token1,512)
    token2=padding_code(token2,512)
    return token1,token2,label

def preprocess_code_data(data_path):
    data=pd.read_pickle(data_path)
    code_tokens=[]
    preprocess=[]
    for _,items in data.iterrows():
        id1=items.id1
        id2=items.id2
        if(not os.path.exists(id1) or not os.path.exists(id2)):
            # print(id2)
            # print(id1) 
            # print()
            continue
        label=items.label
        preprocess.append([id1,id2,label])
    
    with Pool(40) as p:
        for i in p.imap(preprocess_code_data_subprocess,tqdm.tqdm(preprocess)):
            code_tokens.append([i[0],i[1],i[2]])
    
    data_path=data_path.replace('.pkl','_token.pkl')
    print(data_path)
    pkl.dump(code_tokens,open(data_path,'wb'))
 
#-----------------------------end


def get_different_test(replace_path,add_number,saved_path):
    data=pd.read_pickle('oj_clone_ids_train.pkl')

    ids1=[]
    ids2=[]
    labels=[]
    bar=tqdm.tqdm(total=len(data))
    for i,item in data.iterrows():
        id1=item.id1
        id2=item.id2
        id1=id1.replace('Program',replace_path)
        id2=id2.replace('Program',replace_path)
        id1=id1.split('/')
        id2=id2.split('/')
        id1[-2]=str(int(id1[-2])+add_number)
        id2[-2]=str(int(id2[-2])+add_number)
        id1='/'.join(id1)
        id2='/'.join(id2)
        ids1.append(id1)
        ids2.append(id2)
        labels.append(item.label) 
        bar.update()
    bar.close()
    data={"id1":ids1,"id2":ids2,"label":labels}
    df=pd.DataFrame(data)
    df.to_pickle(saved_path)

if __name__=='__main__':
    root_path="Program/" 
    # step1
    # root_path=args.dirname
    # get_different_test(root_path,2000,"oj_clone_ids_train_mixall.pkl")
    # 获取所有文件名 
    # file_list=[]
    # dir_list=[]
    get_file_path(root_path,file_list,dir_list)
    file_list.sort() 
    filter_file(file_list)
    
    # # 从单个文件构造成整体的pickle
    gen_programs_pkl(file_list)
    
    # # 生成整体的克隆文件对
    gen_file_pairs(file_list)
    
    # # 划分出训练集验证集训练集
    split_pairs("oj_clone_ids_01.pkl")

    # 将数据转换为token
    # parser = argparse.ArgumentParser(description='Token-based Source Code Clone Detection')
    # parser.add_argument('data_path',
    #                     type=str,
    #                     default='oj_clone_ids_test.pkl',
    #                     help='programs data path')
    # args=parser.parse_args() 
    # vocab=json.load(open('vocab.json','r'))
    # preprocess_code_data(args.data_path)
    
 
 