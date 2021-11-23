
# TextLSTM data preparation

# step1: build vocab
python utils.py

# step2: gen clone pairs, dividing the training dataset,testing dataset and validation dataset 
python genClonePairs.py

# step3:code to token
python genCodeToken.py dataset/oj_clone_ids_test.pkl
python genCodeToken.py dataset/oj_clone_ids_val.pkl
python genCodeToken.py dataset/oj_clone_ids_train.pkl

# step4: train model 
python run_clone.py --mode train