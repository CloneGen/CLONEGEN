## Note
If there is no vocab.json file in the current directory, you need to put the vocab.json from TextLSTM into the current directory and put TextLSTM/saved_dict/TokenLSTM.cpkt under saved_dict in the current directory.

# step1 training
# Note that project_path must be used as an absolute path.
```shell
python drlsg_main.py --mode train --rlmodel_path ./saved_dict/ppo_chekpoint.zip --project_path /home/zww/rlcone_release/DRLSG/ --code_path ./test.c --vocab_path ./vocab.json
```

# step2 testing
```shell
python drlsg_main.py --mode test --rlmodel_path ./saved_dict/ppo_chekpoint.zip --project_path /home/zww/rlcone_release/DRLSG/ --code_path ./test.c --vocab_path ./vocab.json
```
The results are stored in CloneRM/Mutated.c.