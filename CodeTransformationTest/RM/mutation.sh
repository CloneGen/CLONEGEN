#! /bin/bash

CURPATH=$( pwd )
# echo $CURPATH

PROJECTPATH=$CURPATH/ 
TXLCODEPATH="../Txl/"  
COUNTRESULTPATH="../CountResult/"  


 function muteCode(){ 
    TRANSFORMCODE=$1 
    ACTION=$2 
    # cd $PROJECTPATH  
    txl   -q $TRANSFORMCODE $TXLCODEPATH"CountModification.Txl" > /dev/null 2> /dev/null &&
    
 

    # cd $PROJECTPATH && 
    python GenRandomChange.py $COUNTRESULTPATH  $ACTION &&
    txl   -q -s 128  $TRANSFORMCODE $TXLCODEPATH"RemoveCompoundStateSemicolon.Txl" > temp0.c  &&
    txl   -q -s 128 temp0.c $TXLCODEPATH"RemoveNullStatements.Txl" > temp00.c &&
    case ${ACTION} in 
        1)
            # echo "txl   -q -s 128  temp00.c $TXLCODEPATH"1ChangeRename.Txl" > temp1.c"
            txl  -q -s 128  temp00.c $TXLCODEPATH"1ChangeRename.Txl" > temp1.c  
            ;;
        2)
            txl   -q -s 128  temp00.c $TXLCODEPATH"2A3ChangeCompoundForAndWhile.Txl" > temp1.c
            ;;
        3)
            txl   -q -s 128  temp00.c $TXLCODEPATH"2A3ChangeCompoundForAndWhile.Txl" > temp1.c
            ;;
        4)
            txl   -q -s 128  temp00.c $TXLCODEPATH"4changeCompoundDoWhile.Txl" > temp1.c
            ;;
        5)
            txl   -q -s 128  temp00.c $TXLCODEPATH"5A6changeCompoundIf.Txl" > temp1.c
            ;;
        6)
            txl   -q -s 128  temp00.c $TXLCODEPATH"5A6changeCompoundIf.Txl" > temp1.c 
            ;;
        7)
            txl   -q -s 128  temp00.c $TXLCODEPATH"7changeCompoundSwitch.Txl" > temp1.c
            ;;
        8)
            txl   -q -s 128  temp00.c $TXLCODEPATH"8changeCompoundLogicalOperator.Txl" > temp1.c 
            ;;
        9)  
            txl   -q -s 128  temp00.c $TXLCODEPATH"9changeSelfOperator.Txl" > temp1.c 
            ;;
        10)
            txl   -q -s 128  temp00.c $TXLCODEPATH"10changeCompoundIncrement.Txl" > temp1.c 
            ;;
        11)
            txl   -q -s 128  temp00.c $TXLCODEPATH"11changeConstant.Txl" > temp1.c 
            ;;
        12)
            txl   -q -s 128  temp00.c $TXLCODEPATH"12changeVariableDefinitions.Txl" > temp1.c 
            ;;
        13)
            txl   -q -s 128  temp00.c $TXLCODEPATH"13changeAddJunkCode.Txl" > temp1.c 
            ;;
        14)
            txl   -q -s 128  temp00.c $TXLCODEPATH"14changeExchangeCodeOrder.Txl" > temp1.c 
            ;;
        15)
            txl   -q -s 128  temp00.c $TXLCODEPATH"15changeDeleteCode.Txl" > temp1.c 
            ;;
        *)
        exit 1 
        ;;  
    esac  
    txl   -q -s 128 temp1.c $TXLCODEPATH"RemoveNullStatements.Txl" > temp3.c &&
    txl   -q -s 128 temp3.c $TXLCODEPATH"PrettyPrint.Txl" > temp4.c &&
    txl   -q -s 128 temp4.c $TXLCODEPATH"RemoveNullStatements.Txl" > temp.c &&  
    python ParseCode.py temp.c &&
    cp  temp.c Mutated.c   
    # cat Mutated.c
    echo "result reserved in Mutated.c"
    rm  -rf temp* 
}

function main(){
    filepath=$1 
    action=$2     
    muteCode $filepath $action
}

main $1 $2
 



 
 