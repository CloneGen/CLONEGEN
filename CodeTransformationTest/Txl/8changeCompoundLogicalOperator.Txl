% Txl v10.8 (7.5.20) (c) 1988-2020 Queen's University at Kingston
% statements 
% 
% version 20200924
% 这里完成对逻辑表达式的修改

include "c.grm"
%include "extract_id.Txl" % 这主要是实现变量名和函数名重命名的功能

% ----------------------------------------------------------------
% 这里为了转换的需要重新定义了部分结构， 这里是一些redefine结构。
% 这里在某些重定义中加入 '; 的作用是因为重定义变量中可能会产生的冲突，加入'; 可以起到消除冲突的作用
% 这之前都是重新定义的结构
% ----------------------------------------------------------------


%----------------------------------------------------------------
% 这里是主函数的开始

function main
    replace [program]
        P [program]
    export RandomPath [stringlit]
        "../CountResult/8Logic.random"
    by 
        P  [changeProgram] 
end function



% 主函数到这里结束
% ---------------------------------------------------------------


% ---------------------------------------------------------------
% 这里处理第 8 种情况，对逻辑表达式的处理
function changeProgram
    replace [program]
        CSB [program]
    export CountLogicalOperator [number]
        0
    import RandomPath [stringlit]
    export RandomChange [repeat number]
      _ [readRandomFile RandomPath]
    construct RIOE [repeat inclusive_OR_expression]
        _ [^ CSB]
    construct NewRIOE [repeat inclusive_OR_expression]
        _ [changeInclusiveORExpression1 each RIOE]
    by 
        CSB [replaceProgram each RIOE NewRIOE]  
end function 

function replaceProgram O [inclusive_OR_expression] N [inclusive_OR_expression]
    replace *[inclusive_OR_expression]
        O
    by 
        N
end function

% 这里读取文件内容
rule readRandomFile FileName [stringlit]
    replace [repeat number]
      RN [repeat number]
    construct OptNewxtNumber [opt number]
      _ [fget FileName]
    deconstruct OptNewxtNumber
      NextNumber [number]
    by 
      RN [. NextNumber]
end rule


% ----------------------------------------------------------------
% 这里修改逻辑表达式   a < b --> b > a
%                    a > b --> b < a 
%                    a <= b --> b >= a
%                    a >= b --> b <= a
%                    a ==b  --> b == a
%                    a != b  --> !(b ==a)
function changeLogicalOperator1
    replace [statement]
        St [statement]
    construct RIOE [repeat inclusive_OR_expression]
        _ [^ St]
    construct NewRIOE [repeat inclusive_OR_expression]
        _ [changeInclusiveORExpression1 each RIOE]
    by 
        St [replaceInclusiveORExpression each RIOE NewRIOE]
end function

function changeInclusiveORExpression1 IOE [inclusive_OR_expression]
    replace [repeat inclusive_OR_expression]
        RIOE [repeat inclusive_OR_expression]
    construct OutIOE [inclusive_OR_expression]
        IOE %[message "the original IOE is:"][print] [message ""]
    % 这里用来解决同时修改 < 和 > 出现矛盾的问题
    export IsBlow [number]
        0
    % 这里用来解决同时修改 <= 和 >= 出现矛盾的问题
    export IsBlowEqueal [number]
        0
    % 这里用来解决 == 和 != 出现矛盾的问题
    export IsEqual [number]
        0
    construct NewIOE [inclusive_OR_expression]
        IOE [createNewIOEBlow1] [createNewIOEGreat1] 
            [createNewIOEBlowEqual1] [createNewIOEGreatEqual1] 
            [createNewIoEqual]  %[createNewIoNotEqual] 
    by 
       RIOE [. NewIOE]
end function

function createNewIOEBlow1
    replace [inclusive_OR_expression]
        IOE [inclusive_OR_expression]
    deconstruct IOE
        SE1 [shift_expression] '< SE2 [shift_expression]
    construct NewIOE [inclusive_OR_expression]
        SE2 '> SE1
    export IsBlow[number]
        1
    import CountLogicalOperator [number]
    export CountLogicalOperator
        CountLogicalOperator [+ 1]
    import CountLogicalOperator 
    import RandomChange [repeat number]
    construct ChangeNum [repeat number]
        RandomChange [select CountLogicalOperator CountLogicalOperator]
    deconstruct ChangeNum 
        Changed [number]
    construct ChangedLogicOP [inclusive_OR_expression]
        IOE [isNddeChanged NewIOE Changed]   
    by 
        ChangedLogicOP 
end function

% 判断是否需要修改
function isNddeChanged NewIOE[inclusive_OR_expression] Changed[number]
    replace [inclusive_OR_expression]
        IOE [inclusive_OR_expression]
    where 
        Changed [= 1]
    by
        NewIOE
end function

function createNewIOEGreat1
    import IsBlow[number]
    where
        IsBlow [= 0] % 不会同时修改的情况
    replace [inclusive_OR_expression]
        IOE [inclusive_OR_expression]
    deconstruct IOE
        SE1 [shift_expression] '> SE2 [shift_expression]
    construct NewIOE [inclusive_OR_expression]
        SE2 '< SE1
    import CountLogicalOperator [number]
    export CountLogicalOperator
        CountLogicalOperator [+ 1]
    import CountLogicalOperator 
    export CountLogicalOperator
        CountLogicalOperator [+ 1]
    import CountLogicalOperator 
    import RandomChange [repeat number]
    construct ChangeNum [repeat number]
        RandomChange [select CountLogicalOperator CountLogicalOperator]
    deconstruct ChangeNum 
        Changed [number]
    construct ChangedLogicOP [inclusive_OR_expression]
        IOE [isNddeChanged NewIOE Changed]   
    by 
        ChangedLogicOP 
end function

function createNewIOEBlowEqual1
    replace [inclusive_OR_expression]
        IOE [inclusive_OR_expression]
    deconstruct IOE
        SE1 [shift_expression] '<= SE2 [shift_expression]
    construct NewIOE [inclusive_OR_expression]
        SE2 '>= SE1
    export IsBlowEqueal[number]
        1
    import CountLogicalOperator [number]
    export CountLogicalOperator
        CountLogicalOperator [+ 1]
    import CountLogicalOperator 
    export CountLogicalOperator
        CountLogicalOperator [+ 1]
    import CountLogicalOperator 
    import RandomChange [repeat number]
    construct ChangeNum [repeat number]
        RandomChange [select CountLogicalOperator CountLogicalOperator]
    deconstruct ChangeNum 
        Changed [number]
    construct ChangedLogicOP [inclusive_OR_expression]
        IOE [isNddeChanged NewIOE Changed]   
    by 
        ChangedLogicOP 
end function

function createNewIOEGreatEqual1
    import IsBlowEqueal[number]
    where
        IsBlowEqueal [= 0] % 不会同时修改的情况
    replace [inclusive_OR_expression]
        IOE [inclusive_OR_expression]
    deconstruct IOE
        SE1 [shift_expression] '>= SE2 [shift_expression]
    construct NewIOE [inclusive_OR_expression]
        SE2 '<= SE1
    import CountLogicalOperator [number]
    export CountLogicalOperator
        CountLogicalOperator [+ 1]
    import CountLogicalOperator 
    export CountLogicalOperator
        CountLogicalOperator [+ 1]
    import CountLogicalOperator 
    import RandomChange [repeat number]
    construct ChangeNum [repeat number]
        RandomChange [select CountLogicalOperator CountLogicalOperator]
    deconstruct ChangeNum 
        Changed [number]
    construct ChangedLogicOP [inclusive_OR_expression]
        IOE [isNddeChanged NewIOE Changed]   
    by 
        ChangedLogicOP
end function

function createNewIoNotEqual
    import IsEqual [number]
    where 
        IsEqual [= 0]
    replace [inclusive_OR_expression]
        IOE [inclusive_OR_expression]
    deconstruct IOE
        SE1 [shift_expression] '!= SE2 [shift_expression]
    construct Expression [inclusive_OR_expression]
        SE2 '== SE1
    construct OutSE1 [shift_expression]
        SE1 %[putp "the SE1 is :%"]
    %construct Expression [expression]
    %    IOE [$ '!= '==]
    construct ListExpression [list expression]
        Expression
    construct PE [parenthesized_expression]
        '( ListExpression ')
    construct NewIOE [inclusive_OR_expression]
        '! PE
    import CountLogicalOperator [number]
    export CountLogicalOperator
        CountLogicalOperator [+ 1]
    import CountLogicalOperator 
    export CountLogicalOperator
        CountLogicalOperator [+ 1]
    import CountLogicalOperator 
    import RandomChange [repeat number]
    construct ChangeNum [repeat number]
        RandomChange [select CountLogicalOperator CountLogicalOperator]
    deconstruct ChangeNum 
        Changed [number]
    construct ChangedLogicOP [inclusive_OR_expression]
        IOE [isNddeChanged NewIOE Changed]   
    by 
        ChangedLogicOP 
end function


% 这里修改 == 这种逻辑
function createNewIoEqual
    replace [inclusive_OR_expression]
        IOE [inclusive_OR_expression]
    deconstruct IOE
        SE1 [shift_expression] '== SE2 [shift_expression]
    construct OutSE1 [shift_expression]
        SE1 %[putp "the SE1 is :%"]
    construct Expression [expression]
        SE2 '!= SE1
    construct ListExpression [list expression]
        Expression
    construct PE [parenthesized_expression]
        '( ListExpression ')
    construct NewIOE [inclusive_OR_expression]
        '! PE
    export IsEqual [number]
        1
    import CountLogicalOperator [number]
    export CountLogicalOperator
        CountLogicalOperator [+ 1]
    import CountLogicalOperator 
    export CountLogicalOperator
        CountLogicalOperator [+ 1]
    import CountLogicalOperator 
    import RandomChange [repeat number]
    construct ChangeNum [repeat number]
        RandomChange [select CountLogicalOperator CountLogicalOperator]
    deconstruct ChangeNum 
        Changed [number]
    construct ChangedLogicOP [inclusive_OR_expression]
        IOE [isNddeChanged NewIOE Changed]   
    by 
        ChangedLogicOP 
end function

% 这里替换conditon 里面的 inclusive_OR_expression 
function replaceInclusiveORExpression OldIOE [inclusive_OR_expression] NewIOE [inclusive_OR_expression]
    replace *[inclusive_OR_expression]
        OldIOE
    by 
        NewIOE
end function
% 这里逻辑表达式的修改完成，这里完成逻辑表达式的修改操作
% ----------------------------------------------------------------