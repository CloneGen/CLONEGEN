import os
import tqdm
import json
import operator
import subprocess
import numpy as np
import pandas as pd
import argparse
from collections import Counter
from multiprocessing import Pool

VOCAB_LEN=10000
SPECIAL_WORD={'<PAD>': 0, '<UNK>': 1, '<CLS>': 2, '<SEP>': 3, '<MASK>': 4}



def padding_code(sequences, vocab, maxlen=1024, pos='r-pre'):
    sequences = [vocab.get(s, SPECIAL_WORD['<UNK>']) for s in sequences]
    if len(sequences) > maxlen:
        sequences = sequences[:maxlen]
    if pos == 'pre':
        sequences = [SPECIAL_WORD['<PAD>']] * (maxlen - len(sequences)) + sequences
    else:
        sequences = sequences + [SPECIAL_WORD['<PAD>']] * (maxlen - len(sequences))
    return sequences


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

def get_c_token(data):
    """
    获取代码中对应的token
    """
    ids=[]
    data=data.split('\n')
    for line in data:
        if(line.startswith("<") and (line.find("/>")!=-1)):
            id=line[line.index("text=")+6:line.index("\"/>")]
            ids.append(id)  
    return ids

def external_cmd(cmd, msg_in=''):
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

def get_code_token(code_path):
    _, stderr_val = external_cmd('txl -q -Dscan '+code_path)
    code=bytes.decode(stderr_val)
    code_token=get_c_token(code)
    return code_token

def get_vocab():
    keywards=['\t', '\n', ' ', '!', '!=', '"', '#', '#define', '#elif', '#else', '#endif', '#if', '#ifdef', '#ifndef', '#include', '%', '%=', '&', '&&', '&=', "'", '(', ')', '*', '*=', '+', '++', '+=', ',', '-', '--', '-=', '->', '.', '...', '/', '/=', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', '::', ';', '<', '<<', '<<=', '<=', '=', '==', '>', '>=', '>>', '>>=', '?', 'A', 'B', 'C', 'D', 'E', 'ERROR', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'L"', "L'", 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '[', '\\', ']', '^', '^=', '_', '__attribute__', 'a', 'b', 'break', 'c', 'call_expression', 'case', 'class', 'comment', 'const', 'continue', 'd', 'default', 'defined', 'delete', 'do', 'e', 'else', 'enum', 'extern', 'f', 'false', 'for', 'g', 'goto', 'h', 'i', 'if', 'inline', 'j', 'k', 'l', 'long', 'm', 'n', 'new', 'null', 'o', 'p', 'q', 'r', 'register', 'restrict', 'return', 's', 'short', 'signed', 'sizeof', 'static', 'struct', 'switch', 't', 'this', 'true', 'try', 'typedef', 'u', 'union', 'unsigned', 'v', 'volatile', 'w', 'while', 'x', 'y', 'z', '{', '|', '|=', '||', '}', '~']
    file_list=[]
    dir_list=[]
    get_file_path('./Program',file_list,dir_list)
    tokens=[]
    # file_list=file_list[:100]
    with Pool(40) as p:
        bar=tqdm.tqdm(total=len(file_list))
        for i in p.imap(get_code_token,file_list):
            # print(i)
            tokens.extend(i)
            bar.update()
        bar.close()
    tokens.extend(keywards)
    tokens=dict(Counter(tokens))
    tokens=dict(sorted(tokens.items(),key=operator.itemgetter(1),reverse=True))

    vocab=dict()
    vocab.update(SPECIAL_WORD)
    for i,key in enumerate(tokens.keys()):
        vocab[key]=i+5
    with open('dataset/vocab.json','w') as fp:
        json.dump(vocab, fp)




if __name__=='__main__':
    get_vocab() 
    pass
    
