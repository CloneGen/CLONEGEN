import json
import torch
import pandas as pd
from torch.utils.data import Dataset,DataLoader
from utils import get_code_token,padding_code

class DatasetIterater(object):
    '''生成可迭代的数据集'''
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
