
# TextLSTM data preparation

# step1: build vocab
```shell
python utils.py
```
# step2: gen clone pairs, dividing the training dataset,testing dataset and validation dataset 
```shell
python genClonePairs.py
```
# step3:code to token
``` shell
python genCodeToken.py dataset/oj_clone_ids_test.pkl
python genCodeToken.py dataset/oj_clone_ids_val.pkl
python genCodeToken.py dataset/oj_clone_ids_train.pkl
```
# step4: train model 
```shell
python run_clone.py --mode train
```