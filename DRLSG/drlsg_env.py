import os
import gym
import tqdm
import time
import json
import torch 
import random
import logging
import warnings
import subprocess
import editdistance
import numpy as np
import pandas as pd 


from gym import spaces,core 
from stable_baselines3 import PPO
from importlib import import_module

from config import get_parameter
from utils import get_code_token,padding_code

os.environ["TF_CPP_MIN_LOG_LEVEL"] = "1"
warnings.filterwarnings('ignore')

torch.cuda.set_device(3)

class ClonegenEnvTest(gym.Env):
    def __init__(self,args):
        self._action_set=np.arange(0,15)
        self.action_space = spaces.Discrete(len(self._action_set))
        self.high=np.ones(256)
        self.observation_space = spaces.Box(low=-self.high, high=self.high)
        self.N_STATE=20
        self.args=args
        self.a=0.8
        self.original_code=self.args.code_path
        self.mutated_code=self.args.code_path
        self.final_code=None
        self.encodding_model=self._get_model()
        self.project_path=args.project_path
        self.count=0 
        self.count_obf=0
        self.count_constant=0
        self.count_rename=0
        self.vocab=json.load(open(args.vocab_path))
        self.model_name='TokenRNN'
        self.mutated_ast=None
        self.y=None
        self.state=self.reset()
        random.seed(time.time())
    
    def _get_clone_result(self): 
        token2=get_code_token(self.final_code)
        self.mutated_ast=" ".join(token2) 
        token2=padding_code(token2,self.vocab,512)
        token2=torch.tensor(token2).unsqueeze(0)
        y=token2.cuda() 
        predict=self.model(self.x,y)
        predict=predict.squeeze().tolist()
        if(predict[0]>predict[1]):
            return '0'
        else:
            return '1' 
    
    def _get_edited_distance(self): 
        self.original_ast=self.original_ast.replace(' ','') 
        self.mutated_ast=self.mutated_ast.replace(' ','')
        num_dist = editdistance.eval(self.original_ast, self.mutated_ast)
        num_sim = 1 - num_dist / max(len(self.original_ast), len(self.mutated_ast))
        return num_sim

    def _get_mutated_code(self,action): 
        if(self.final_code==None or self.final_code==self.original_code):
            div_cmd = self.project_path+'/CloneRM/runner.sh  {} {} {}'.format(self.args.code_path,action,self.project_path)
            self.final_code=self.project_path+'/CloneRM/Final.c'
        else:
            div_cmd = self.project_path+'/CloneRM/runner.sh  {} {} {}'.format(self.final_code,action,self.project_path)
        _, stderr_val = self._external_cmd(div_cmd)
        self.mutated_code=self.project_path+'/CloneRM/Mutated.c'
        cp_cmd="cp {} {}".format(self.mutated_code,self.final_code)
        _,_=self._external_cmd(cp_cmd)

    def _external_cmd(self, cmd, msg_in=''):
        try:
            proc = subprocess.Popen(cmd,
                                    shell=True,
                                    stdin=subprocess.PIPE,
                                    stdout=subprocess.PIPE,
                                    stderr=subprocess.PIPE,
                                    )
            stdout_value, stderr_value = proc.communicate(msg_in)
            return stdout_value, stderr_value
        except ValueError as err:
            return None, None
        except IOError as err:
            return None, None

    def _get_model(self):
        self.vocab=json.load(open(self.args.vocab_path)) 
        x=import_module('model.'+'RNN')
        config=x.Config()
        config.n_vocab=len(self.vocab)
        model=x.Model(config)
        model.load_state_dict(torch.load(config.save_path,map_location='cuda'))
        model.eval()
        model=model.cuda()
        return model

    def _encodding_code(self,path):
        token1=get_code_token(path)
        token1=padding_code(token1,self.vocab,512)
        token1=torch.tensor(token1).unsqueeze(0)
        x=token1.cuda()
        embedding_x=self.encodding_model(x).cpu()
        embedding_x=embedding_x.detach().numpy()
        return embedding_x

    def step(self, action):
        action=action+1 
        done=False
        self._get_mutated_code(action)
        
        self.count+=1 
        result=self._get_clone_result() 
        distance=self._get_edited_distance()
        if(result=='0'):
            done=True
            reward=10
        else:
            if(int(distance)==1):
                reward=-0.5
            else:
                reward=-self.a*distance 
        next_state = self._encodding_code(self.final_code)
        info={}
        if(action==13):
            self.count_obf+=1 
            reward-=self.count_obf*0.5
        return next_state,reward,done,info
    
    def reset(self):
        state = self._encodding_code(self.original_code)
        self.final_code=None
        x=import_module('model.'+self.model_name)
        config=x.Config()
        config.save_path=self.args.project_path+'/saved_dict/'+self.model_name+'.ckpt'
        config.n_vocab=len(self.vocab)
        model=x.Model(config)
        model.load_state_dict(torch.load(config.save_path,map_location='cuda'))
        model.eval() 
        self.model=model.cuda()
        token1=get_code_token(self.args.code_path)
        self.original_ast=" ".join(token1)
        token1=padding_code(token1,self.vocab,512)
        token1=torch.tensor(token1).unsqueeze(0)
        self.x=token1.cuda()
        return state
    
    def render(self, mode='human'):
        pass

    def seed(self, seed=None):
        pass



    
    
    
