import os 
import argparse

def get_parameter(): 
    parser = argparse.ArgumentParser(description='Token-based Source Code Clone Detection')
    parser.add_argument('--model', 
                        type=str,
                        default='TokenRNN',
                        help='choose a model')
    parser.add_argument('--model_path', 
                        type=str,
                        default='./saved_dict/TokenRNN.ckpt',
                        help='choose a model')
    parser.add_argument('--mode', 
                        type=str,
                        choices=['train','eval','test'],
                        help='choose a mode, train or eval')
    # data path 
    parser.add_argument('--train_dataset',
                        type=str,
                        default='./dataset/oj_clone_ids_train_token.pkl',
                        help='train data path')
    parser.add_argument('--val_dataset',
                        type=str,
                        default='./dataset/oj_clone_ids_val_token.pkl',
                        help='val data path')
    parser.add_argument('--test_dataset',
                        type=str,
                        default='./dataset/oj_clone_ids_test_token.pkl',
                        help='test data path')
    parser.add_argument('--vocab_path',
                        type=str,
                        default='./dataset/vocab.json',
                        help='test data path')        
    parser.add_argument('--original_code_path',
                        type=str, 
                        default='/ssd/wwz/paper_data/Anti/DataOJ/AM_ALL/Data/201/10010.c')
    # parser.add_argument('--original_code_path',
    #                     type=str, 
    #                     default='/ssd/wwz/paper_data/Anti/DataOJ/AM_ALL/Data/265/650701.c')
    parser.add_argument('--mutate_code_path',
                        type=str,
                        default='/ssd/wwz/paper_data/Anti/DataOJ/AM_ALL/Data/201/10011.c')

    
    return parser.parse_args()

