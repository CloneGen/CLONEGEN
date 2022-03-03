# coding: UTF-8
import torch
import torch.nn as nn
import torch.nn.functional as F
import numpy as np


class Config(object): 
    def __init__(self):
        self.model_name = 'TokenRNN' 
       
        self.save_path ='./saved_dict/' + self.model_name + '.ckpt'        

        self.device = torch.device('cuda' if torch.cuda.is_available() else 'cpu')   


        self.dropout = 0.5                                             
        self.require_improvement = 2000                          
        self.num_classes = 2                                         
        self.n_vocab = 0                                               
        self.num_epochs = 20                                           
        self.batch_size = 128                                            
        self.pad_size = 512                                             
        self.learning_rate = 1e-3                                      
        self.embed = 300                                             
        self.hidden_size = 256                                           
        self.num_layers = 2                                           


'''Recurrent Neural Network for token clone detection with Multi-Task Learning'''


class Model(nn.Module):
    def __init__(self, config):
        super(Model, self).__init__()
        self.embedding = nn.Embedding(config.n_vocab, config.embed, padding_idx=config.n_vocab - 1)
        self.lstm = nn.LSTM(config.embed, config.hidden_size, config.num_layers,
                            bidirectional=True, batch_first=True, dropout=config.dropout)
        self.linear1=nn.Sequential(
            nn.Linear(config.hidden_size*4,config.hidden_size),
            nn.ReLU()
        )
        self.linear2=nn.Sequential(
            nn.Linear(config.hidden_size*2,128),
            nn.ReLU(),
            # nn.Dropout(config.dropout),
            nn.Linear(128,64),
            nn.ReLU(),
            # nn.Dropout(config.dropout),
            nn.Linear(64,config.num_classes)
        )
 

    def forward(self, x):
        code1=x
        # [batch_size,seq_len]
        out1= self.embedding(code1)
        # [batch_size,seq_len,embedding_size]
        out1, _ = self.lstm(out1)
        # [batch_size,selq_len,hidden_size*2]
        out1=torch.cat([out1[:,-1,:],out1[:,0,:]],1)
        out1=self.linear1(out1)
        
        return out1
