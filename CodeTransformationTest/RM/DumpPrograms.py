
import pandas as pd
import argparse
import os
path=os.path.abspath(".")
def substitute_test_code(id):
    programs=pd.read_pickle('./programs.pkl')
    programs.columns=['id','code','label']
    with open('change.txt','r') as fp:
        temp_code=fp.read()
    
    # change_code=pd.Series(temp_code,index=[id],name='code')

    sub_code=programs[programs.id==id]
    print('the code change to:')
    print(temp_code)
    programs.iloc[sub_code.index.item(),1]=temp_code

    programs.to_pickle('programs.pkl')
    # programs.to_csv('programs_changed.txt')


def from_programs_dump_code(id):
    programs=pd.read_pickle('./programs.pkl')
    programs.columns=['id','code','label']
    with open(path+"/ProgramsDump/"+str(id)+'.c','w') as fp:
        sub_code=programs[programs.id==id]
        fp.write(sub_code.code.item())

if __name__ == '__main__':
    parser = argparse.ArgumentParser(description="code id :")
    parser.add_argument(
        'id',
        help="this is the function id",
        type=int)
    parser.add_argument(
        '--dump',
        action='store_true',
        help="if true(used --dump), the funciton code is exported"
    )
    args = parser.parse_args()
    # print(path)
    if not args.id:
        print("No specified id")
        exit(1)
    # print(args.dump)
    if(args.dump==True):
        # print("dump the original code")
        from_programs_dump_code(args.id)
    else:
        print('change the original cdoe')
        substitute_test_code(args.id)
