from pycparser import c_parser     
import argparse
parser = argparse.ArgumentParser(description="Choose a dataset:[c|java]")
parser.add_argument("filename")
args = parser.parse_args()  
with open(args.filename ,'r') as f:
    line=f.read()
    #print(line)
    parser = c_parser.CParser()
    parser.parse(line)
