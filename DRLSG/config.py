import os 
import argparse

def get_parameter(): 
    parser = argparse.ArgumentParser(description='Token-based Source Code Clone Detection')
 
    parser.add_argument('--mode', 
                        type=str,
                        choices=['train','eval','test'],
                        help='choose a mode, train or eval')
    # data path
    parser.add_argument('--vocab_path',
                        type=str,
                        default='./data/vocab.json',
                        help='test data path')   
  
 
    parser.add_argument('--rlmodel_path',
                        type=str,
                        default='./saved_dict/ppo_chekpoint.pth',
                        help='model save path')
    parser.add_argument('--project_path',
                        type=str,
                        default='/home/zww/rlcone_release/DRLSG/',
                        help='model save path') 
    parser.add_argument('--code_path',
                        type=str,
                        default='./379.c',
                        help='train dir number')
    
    return parser.parse_args()

