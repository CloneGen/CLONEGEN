#!/bin/bash


function main(){ 
    rm -rf Mutated.c
    file=$1 
    action=$2
    cp $file RM/ &&
    cd ./RM/ &&
    ./mutation.sh $file $action &&
    mv Mutated.c ../Mutated.c || cp $file ../Mutated.c   
    rm -rf $file 
    cd ..
    echo "[+] result..."
    cat Mutated.c
}


# $1 file 
# $2 action
main $1 $2



