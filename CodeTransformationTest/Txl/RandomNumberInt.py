import os 
import time
import random
def genRandomName():
    new_name=[]
    with open("../Txl/number.txt") as f:
        name=f.read()
        name=name.replace("\n","")
        # print("name:",name)
        random.seed(time.time())
        num=random.randint(10,1000)
        name=int(name)+num
        # print(name)
        new_name.append(str(name))
        new_name.append(str(num))
        
    with open("../Txl/number.txt",'w') as f:
        f.write(" ".join(new_name))



if __name__=="__main__":
    genRandomName()