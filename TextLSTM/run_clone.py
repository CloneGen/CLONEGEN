import os 
import time
import json
import tqdm
import torch
import warnings
import numpy as np
import pandas as pd
import pickle as pkl 

from sklearn import metrics   
from datetime import timedelta
from multiprocessing import Pool
from torch.nn import DataParallel
from importlib import import_module
from torch.nn import functional as F
from torch.utils.data import DataLoader


from config import get_parameter
from train_eval import train,test
from dataset import DatasetIterater
from utils import get_code_token,padding_code


os.environ["TF_CPP_MIN_LOG_LEVEL"] = "2"
warnings.filterwarnings('ignore')
os.environ['CUDA_VISIBLE_DEVICES']="1,2,3,0"

def get_time_dif(start_time):
    """获取已使用时间"""
    end_time = time.time()
    time_dif = end_time - start_time
    return timedelta(seconds=int(round(time_dif)))

def trainer(args):
    start_time=time.time()
    model_name=args.model
    print('[+]loading trainer data...')
    vocab=json.load(open(args.vocab_path))

    device=torch.device('cuda' if torch.cuda.is_available() else 'cpu')
    x=import_module('model.'+model_name)
    config=x.Config()
 
    print("[+]Loading data Time usage:", get_time_dif(start_time))
    train_dataset=pkl.load(open(args.train_dataset,'rb'))
    dev_dataset=pkl.load(open(args.val_dataset,'rb'))
    test_dataset=pkl.load(open(args.test_dataset,'rb'))
    train_iter=DatasetIterater(train_dataset,128,device)
    dev_iter=DatasetIterater(dev_dataset,128,device)
    test_iter=DatasetIterater(test_dataset,128,device)
    config.n_vocab=len(vocab)
    model=x.Model(config)
    model=model.to(device)
    model = DataParallel(model) 
    train(config, model, train_iter, dev_iter, test_iter) 

def evaler(args):
    start_time = time.time()
    model_name=args.model
    print('[+]loading trainer data...')
    vocab=json.load(open(args.vocab_path))

    device=torch.device('cuda' if torch.cuda.is_available() else 'cpu')
    x=import_module('model.'+model_name)
    config=x.Config()
     
    test_dataset=pkl.load(open(args.test_data,'rb'))
    test_iter=DatasetIterater(test_dataset,128,device)
    config.n_vocab=len(vocab)
    model=x.Model(config)
    model=model.to(device) 

    print("[+]Loading data Time usage:", get_time_dif(start_time))
    test(config,model,test_iter)

def tester1(args):
    model_name=args.model
    vocab=json.load(open(args.vocab_path))
    device=torch.device('cuda' if torch.cuda.is_available() else 'cpu')
    x=import_module('model.'+model_name)
    config=x.Config()
    config.n_vocab=len(vocab)
    model=x.Model(config)
    model=model.to(device)
    model.load_state_dict(torch.load(config.save_path))
    model.eval()

    data=pd.read_pickle('clonegen/test_am_clone.pkl')
    pred=[]
    true=[]
    bar=tqdm.tqdm(total=len(data))
    for i,item in data.iterrows():
        token1,token2,label=item.id1,item.id2,item.label
        token1=get_code_token(token1)
        token2=get_code_token(token2)
        # print(token1)
        token1=padding_code(token1,vocab,512)
        token2=padding_code(token2,vocab,512)
        token1=torch.tensor(token1).unsqueeze(0)
        token2=torch.tensor(token2).unsqueeze(0)
        
        x=token1.cuda()
        y=token2.cuda()
        predict=model(x,y)
        predict=predict.squeeze().tolist()
        true.append(label)
        if(predict[0]>predict[1]):
            pred.append(0)
            print(label,0)
        else:
            pred.append(1)
            print(label,1)
        
        bar.update()
    bar.close()
    
    predict_all=np.array(pred) 
    labels_all=np.array(true)
    acc = metrics.accuracy_score(labels_all, predict_all)
    report = metrics.classification_report(labels_all, predict_all, target_names=['0','1'],digits=3)
    confusion = metrics.confusion_matrix(labels_all, predict_all)
    print('Acc:{:.3f},'.format(acc))
    print(report)
    print(confusion)
    
def tester(args):
    model_name='TokenDPCNN'
    vocab=json.load(open(args.vocab_path))
    device=torch.device('cpu')
    x=import_module('model.'+model_name)
    config=x.Config()
    config.n_vocab=len(vocab)
    model=x.Model(config)
    config.save_path=args.project_path+'/saved_dict/TokenDPCNN1.ckpt'
    model.load_state_dict(torch.load(config.save_path,map_location='cpu'))
    model.eval()
    model=model.cpu()
    token1=get_code_token(args.original_code_path)
    token2=get_code_token(args.mutate_code_path)
    token1=padding_code(token1,vocab,512)
    token2=padding_code(token2,vocab,512)
    token1=torch.tensor(token1).unsqueeze(0)
    token2=torch.tensor(token2).unsqueeze(0)
    x=token1.cpu() 
    y=token2.cpu()
    predict=model(x,y)
    predict=predict.squeeze().tolist()
    if(predict[0]>predict[1]):
        print(0)
    else:
        print(1)
 
if __name__=='__main__':
    start=time.time()
    args=get_parameter()
    if(args.mode=='train'):
        trainer(args) 
    elif(args.mode=='eval'):
        evaler(args)
    elif(args.mode=='test'):
        tester(args)
    # print(args.mode," times:",time.time()-start)