import os
import sys
import gym
import tqdm
import time
import torch 
import random
import logging
import warnings
import numpy as np 
 
from stable_baselines3 import PPO

from config import get_parameter
from drlsg_env import ClonegenEnvTest

os.environ["TF_CPP_MIN_LOG_LEVEL"] = "3"
warnings.filterwarnings('ignore')

_dtype=np.int16 
os.environ["CUDA_VISIBLE_DEVICES"] = "1"


def trainer():
    print('[+] start traing...')
    model = PPO(policy="MlpPolicy", env=env) 
    model.set_env(env) 
    model.learn(total_timesteps=1000)
    model.save(args.rlmodel_path)
    return model

if __name__ == "__main__":
    args=get_parameter()

    start1=time.time() 

    args.code_path
    env = ClonegenEnvTest(args)
    print('[+]learning time:',time.time()-start1)
    if(args.mode=='train'):
        model=trainer() 
    elif(args.mode=='test'):
        args.rlmodel_path='./saved_dict/ppo_chekpoint.zip'
        model=PPO.load(args.rlmodel_path)
    print('[+]training time:',time.time()-start1)
    obs = env.reset()
    print('[+]starting test...')
    count=0
    for _ in range(300):
        obs_b=obs
        start=time.time()
        action,_ = model.predict(observation=obs)
        action=action.item()
        print(action+1,end=',')
        sys.stdout.flush()
        obs, reward, done, info = env.step(action)
        if(done==True and count >15):
            print('done')
            break
        env.render()
        count+=1
    print('[+]total time:',time.time()-start1)
    
