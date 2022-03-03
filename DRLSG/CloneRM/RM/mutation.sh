#! /bin/bash

# 这个脚本主要实现按照一定比例产生对clone工具测试的样例
#输入为：
#   1. 代码变换比例
#   2. 需要变换的代码
#   3. 变换代码保存路径
#   运行示例： ./GenCloneTestAstnnAll.sh
# MUTEPATH="/home/zww/paper_data/AntiClone/Mute/1/"  # 变异代码保存路径
 
 # 这里是AntiClone 项目路径
 # 注意测试的时候一定要记得修改项目路径

CURPATH=$( pwd )
# echo $CURPATH

PROJECTPATH=$CURPATH/ 
# 这里是Txl 代码所在位置    
TXLCODEPATH="../Txl/"  
#  这里输出统计结果保存位置,这里是对代码随机扫描一遍得到的结果
COUNTRESULTPATH="../CountResult/"  
# PROPORTION=$1     # 这里是代码变换的比例

# 这里是变异代码保存路径，这只是一个临时文件，用来保存临时变换的代码

# 如果要保存的文件夹不存在则创建文件夹
# 入口函数
# 这里对全部的programs.txt进行测试


 function muteCode(){ 
    TRANSFORMCODE=$1 
    ACTION=$2 
    cd $PROJECTPATH  
    txl   -q $TRANSFORMCODE $TXLCODEPATH"CountModification.Txl" > /dev/null 2> /dev/null &&
    
 

    cd $PROJECTPATH && 
    python GenRandomChange.py $COUNTRESULTPATH  $ACTION &&
    txl   -q -s 128  $TRANSFORMCODE $TXLCODEPATH"RemoveCompoundStateSemicolon.Txl" > temp0.c  &&
    txl   -q -s 128 temp0.c $TXLCODEPATH"RemoveNullStatements.Txl" > temp00.c &&
    case ${ACTION} in 
        1)
            echo "txl   -q -s 128  temp00.c $TXLCODEPATH"1ChangeRename.Txl" > temp1.c"
            txl   -q -s 128  temp00.c $TXLCODEPATH"1ChangeRename.Txl" > temp1.c  
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
 



 
 