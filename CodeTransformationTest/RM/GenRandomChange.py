
import os 
import math 
import time
import random
import argparse


parser = argparse.ArgumentParser() 
parser.add_argument('filepath',type=str, help='please input the count file path')
parser.add_argument('action',type=int,help='actions')
args=parser.parse_args()
 
def get_conut_result(file_dir):
    F=[]
    for root,dirs,files in os.walk(file_dir):
        for filename in files:
            if(os.path.splitext(filename)[1]=='.count'):
                F.append(filename)
    return F
 

def get_file_number(filename):
    count=0
    for i in filename:
        if(str.isnumeric(i)):
            count+=1
    number=filename[:count]
    return int(number)

def gen_random_data(files):
    random.seed(time.time())
    for filename in files:
        absFile=os.path.join(filepath,filename)
        print(filename)
        with open(absFile,'r') as fileHandle:
            filenumber=get_file_number(filename)
            changedCount=0
            count=int(fileHandle.readline().strip())
            if(action == filenumber):
                if(count>0):
                    changedCount=random.randint(1,count)
                    if(action==13):
                        changedCount=1
            noChangeCount=count-changedCount
            changeVariable=['1']*changedCount
            noChangeVariable=['0']*noChangeCount
            variable=changeVariable+noChangeVariable
            r=random.random
            x=random.randint(1,100000)
            random.seed(x)
            random.shuffle(variable,random=r)    
            saveVariable=os.path.join(filepath,os.path.splitext(filename)[0]+'.random')
            with open(saveVariable,'w') as saveFile:
                result='\n'.join(variable)
                saveFile.write(result)

if __name__ == '__main__':
    filepath = args.filepath    
    action = args.action
    files=get_conut_result(filepath)
    gen_random_data(files,)


