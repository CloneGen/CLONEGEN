#!/bin/bash

abspath=`pwd`

function main(){
    cd $abspath
    rm -rf Mutated.c
    file=$1 
    action=$2
    cd $3/CloneRM/RM &&
    ./mutation.sh $file $action &&
    mv Mutated.c ../Mutated.c || cp $file ../Mutated.c   
    cd ..
}
main $1 $2 $3



