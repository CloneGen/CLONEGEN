
**Challenging Machine Learning-based  Clone  Detectors via  Semantic-preserving Code Transformations**


This repository includes the code and experimental data in our paper entitled "Challenging Machine Learning-based  Clone  Detectors via  Semantic-preserving Code Transformations" . 
It can be used to perform equivalent transformations on code.


# requirements

``` python
torch=1.9.1

torchvision=0.7.0+cu101

GPU with CUDA support is also needed

```

# How to install
Please refer to: [Txl](https://www.txl.ca/), [Torch](https://pytorch.org/)

# Dataset
CloneGen.tar.gz is the data corresponding to the four strategies in the paper.

# Test Demo, For a simple test,
```shell
cd CodeTransformationTest

# run: ./runner.sh  testfile.c  action
./runner.sh motivation.c 1

``` 

<br />

**Note: Only a simple test version is provided here, other codes will be made public once the paper has been accepted.**

<br />
<br />

**Here are the parts that are not yet open source.**
<br />

# Usage.

# 1. Code Transformation(heuristics method)

```shell
cd HeuristicsMethod
./runner.sh test.c RS
./runner.sh test.c GA
./runner.sh test.c MCMC
```

# 2. Code Clone Detection

```shell
cd TextLSTM
./prepare.sh
```

# 3. DRLSG Transformation
```shell
cd DRLSG

# Training
python drlsg_main.py --mode train --rlmodel_path ./saved_dict/ppo_chekpoint.zip --project_path /home/zww/rlcone_release/DRLSG --code_path ./test.c --vocab_path ./vocab.json

# Testing
python drlsg_main.py --mode test --rlmodel_path ./saved_dict/ppo_chekpoint.zip --project_path /home/zww/rlcone_release/DRLSG/ --code_path ./test.c --vocab_path ./vocab.json
```

The results are stored in CloneRM/Mutated.c.






