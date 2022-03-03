import os 
import time
import random
import string
def genRandomName():
    new_name=[]
    with open("../Txl/id.txt") as f:
        name=f.read()
        name=name.replace("\n","")
        name=name.split()
        random.seed(time.time())
        i=0
        while(i<len(name)):
            lens=random.randint(6,12)
            first="".join(random.sample(string.ascii_letters,1))
            others="".join(random.sample(string.ascii_letters+string.digits,lens-1))
            names=first+others
            if(names in new_name):
                continue
            i=i+1
            new_name.append(names)
    # print(name)
    # print(" ".join(new_name))
    with open("../Txl/id.txt",'w') as f:
        f.write(" ".join(new_name))


if __name__=="__main__":
    genRandomName()