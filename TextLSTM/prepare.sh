#!/bin/bash

function main()
{   
    # TextLSTM data preparation

    echo "[+] step1: build vocab..."
    python utils.py &&

    # step2: gen clone pairs, dividing the training dataset,testing dataset and validation dataset 
    echo "[+] step2: gen clone pairs..."
    python genClonePairs.py &&

    # step3:code to token
    echo "[+] step3: code to token..."
    python genCodeToken.py dataset/oj_clone_ids_test.pkl &&
    python genCodeToken.py dataset/oj_clone_ids_val.pkl &&
    python genCodeToken.py dataset/oj_clone_ids_train.pkl &&

    # step4: train model
    python run_clone.py --mode train
}

main