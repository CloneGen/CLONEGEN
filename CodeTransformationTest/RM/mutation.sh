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
    txl -l  -q $TRANSFORMCODE $TXLCODEPATH"CountModification.ctxl" > /dev/null 2> /dev/null &&
    
 

    # cd $PROJECTPATH && 
    python GenRandomChange.py $COUNTRESULTPATH  $ACTION &&
    txl -l  -q -s 128  $TRANSFORMCODE $TXLCODEPATH"RemoveCompoundStateSemicolon.ctxl" > temp0.c  &&
    txl -l  -q -s 128 temp0.c $TXLCODEPATH"RemoveNullStatements.ctxl" > temp00.c &&
    case ${ACTION} in 
        1)
            echo "txl -l  -q -s 128  temp00.c $TXLCODEPATH"1ChangeRename.ctxl" > temp1.c"
            txl -l  -q -s 128  temp00.c $TXLCODEPATH"1ChangeRename.ctxl" > temp1.c  
            ;;
        2)
            txl -l  -q -s 128  temp00.c $TXLCODEPATH"2A3ChangeCompoundForAndWhile.ctxl" > temp1.c
            ;;
        3)
            txl -l  -q -s 128  temp00.c $TXLCODEPATH"2A3ChangeCompoundForAndWhile.ctxl" > temp1.c
            ;;
        4)
            txl -l  -q -s 128  temp00.c $TXLCODEPATH"4changeCompoundDoWhile.ctxl" > temp1.c
            ;;
        5)
            txl -l  -q -s 128  temp00.c $TXLCODEPATH"5A6changeCompoundIf.ctxl" > temp1.c
            ;;
        6)
            txl -l  -q -s 128  temp00.c $TXLCODEPATH"5A6changeCompoundIf.ctxl" > temp1.c 
            ;;
        7)
            txl -l  -q -s 128  temp00.c $TXLCODEPATH"7changeCompoundSwitch.ctxl" > temp1.c
            ;;
        # 8)
        #     txl -l  -q -s 128  temp00.c $TXLCODEPATH"8changeCompoundLogicalOperator.ctxl" > temp1.c 
        #     ;;
        # 9)  
        #     txl -l  -q -s 128  temp00.c $TXLCODEPATH"9changeSelfOperator.ctxl" > temp1.c 
        #     ;;
        # 10)
        #     txl -l  -q -s 128  temp00.c $TXLCODEPATH"10changeCompoundIncrement.ctxl" > temp1.c 
        #     ;;
        # 11)
        #     txl -l  -q -s 128  temp00.c $TXLCODEPATH"11changeConstant.ctxl" > temp1.c 
        #     ;;
        # 12)
        #     txl -l  -q -s 128  temp00.c $TXLCODEPATH"12changeVariableDefinitions.ctxl" > temp1.c 
        #     ;;
        # 13)
        #     txl -l  -q -s 128  temp00.c $TXLCODEPATH"13changeAddJunkCode.ctxl" > temp1.c 
        #     ;;
        # 14)
        #     txl -l  -q -s 128  temp00.c $TXLCODEPATH"14changeExchangeCodeOrder.ctxl" > temp1.c 
        #     ;;
        # 15)
        #     txl -l  -q -s 128  temp00.c $TXLCODEPATH"15changeDeleteCode.ctxl" > temp1.c 
        #     ;;
        *)
        exit 1 
        ;;  
    esac  
    txl -l  -q -s 128 temp1.c $TXLCODEPATH"RemoveNullStatements.ctxl" > temp3.c &&
    txl -l  -q -s 128 temp3.c $TXLCODEPATH"PrettyPrint.ctxl" > temp4.c &&
    txl -l  -q -s 128 temp4.c $TXLCODEPATH"RemoveNullStatements.ctxl" > temp.c &&  
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
 



 
 