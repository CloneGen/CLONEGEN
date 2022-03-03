% Txl v10.8 (7.5.20) (c) 1988-2020 Queen's University at Kingston
% statements 
% 
% version 20200924
% 这个文件的主要功能是实现代码statement , expression 等自身发生的变化

include "c.grm"
% 这里修改+= 这种增量操作

% ----------------------------------------------------------------
% 这里为了转换的需要重新定义了部分结构， 这里是一些redefine结构。
% 这里在某些重定义中加入 '; 的作用是因为重定义变量中可能会产生的冲突，加入'; 可以起到消除冲突的作用

% 这里重新定义了 expression_statement 主要是为了实现 += 这种自增操作的时候会用到
redefine expression_statement
    ... | [assignment_expression] '= [assignment_expression] [unary_operator] [assignment_expression]
        | [assignment_expression] '= [assignment_expression] [unary_operator] '( [assignment_expression] ')
        | [assignment_expression] '= [assignment_expression] [multiplicative_operator] [assignment_expression]
        | [assignment_expression] '= [assignment_expression] [multiplicative_operator] '( [assignment_expression] ')
        | [assignment_expression] '= [assignment_expression] [shift_operator] [assignment_expression]
        | [assignment_expression] '= [assignment_expression] [shift_operator] '( [assignment_expression] ')
        | [assignment_expression] '= [assignment_expression] [bit_XOR_operator] [assignment_expression]
        | [assignment_expression] '= [assignment_expression] [bit_XOR_operator] '( [assignment_expression] ')
        | [assignment_expression] '= [assignment_expression] [bit_OR_operator] [assignment_expression]
        | [assignment_expression] '= [assignment_expression] [bit_OR_operator] '( [assignment_expression] ')
end redefine

% 这之前都是重新定义的结构
% ----------------------------------------------------------------


%----------------------------------------------------------------
% 这里是主函数的开始

function main
    replace [program]
        P [program]
    export RandomPath [stringlit]
        "../CountResult/10IncrementAssign.random"
    by 
        P  [changeProgram] 
end function

% 主函数到这里结束
% ---------------------------------------------------------------


% --------------------------------------------------------------
% 第 10 种情况，修改增量操作
function changeProgram
    replace [program]
        St [program]
    construct RES [repeat expression_statement]
        _ [^ St]
    import RandomPath [stringlit]
    export RandomChange [repeat number]
      _ [readRandomFile RandomPath] 
    export CountIncrementAssign [number]
        0
    construct NewRES [repeat expression_statement]
        _ [createNewIncrementAssignment each RES]
    by 
        St [replaceExpressionStatement each RES NewRES]
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
% 主要修改 +=,-+,*=,/=,%=,<<=,>>=,&=,^=,|=这种自加增量操作
function createNewIncrementAssignment  ES [expression_statement]
    replace [repeat expression_statement]
        RES [repeat expression_statement]
    construct NewES [expression_statement]
        ES [incrementAssignmentAdd] 
        [incrementAssignmentSub] 
        [incrementAssignmentMul] 
        [incrementAssignmentDiv] 
        [incrementAssignmentMod] 
        [incrementAssignmentLeftShift] 
        [incrementAssignmentRightShift] 
        [incrementAssignmentAnd] 
        [incrementAssignmentXor] 
        [incrementAssignmentOr] 
        %[message "the Expression is:"] [print]
    by 
        RES [. NewES]
end function

% 这里执行替换操作
function replaceExpressionStatement E [expression_statement] NE [expression_statement]
    replace *[expression_statement]
        E
    by 
        NE
end function

% += 转换操作
function incrementAssignmentAdd
    replace [expression_statement]
        E [expression_statement]
    deconstruct E
        AEL [assignment_expression] RAAE [repeat assign_assignment_expression]
    deconstruct RAAE
        ASE [assign_assignment_expression]
    deconstruct ASE
        '+= AER [assignment_expression]
    construct NewES [expression_statement]
        AEL '=  AEL '+ AER
    import CountIncrementAssign [number]
    export CountIncrementAssign
        CountIncrementAssign [+ 1]
    import CountIncrementAssign
    import RandomChange [repeat number]
    construct ChangeNum [repeat number]
        RandomChange [select CountIncrementAssign CountIncrementAssign]
    deconstruct ChangeNum 
        Changed [number]
    construct ChangedIncreOp [expression_statement]
        E [isNeedChanged NewES Changed]
    by 
        ChangedIncreOp
end function

% 这里判断是否需要修改
function isNeedChanged NewES[expression_statement] Changed [number]
    replace [expression_statement]
        ES [expression_statement]
    where
        Changed [= 1]
    by
        NewES
end function

function incrementAssignmentSub
    replace [expression_statement]
        E [expression_statement]
    deconstruct E
        AEL [assignment_expression] RAAE [repeat assign_assignment_expression]
    deconstruct RAAE
        ASE [assign_assignment_expression]
    deconstruct ASE
        '-= AER [assignment_expression]
    construct NewES [expression_statement]
        AEL '=  AEL '- AER
     import CountIncrementAssign [number]
    export CountIncrementAssign
        CountIncrementAssign [+ 1]
    import CountIncrementAssign
    import RandomChange [repeat number]
    construct ChangeNum [repeat number]
        RandomChange [select CountIncrementAssign CountIncrementAssign]
    deconstruct ChangeNum 
        Changed [number]
    construct ChangedIncreOp [expression_statement]
        E [isNeedChanged NewES Changed]
    by 
        ChangedIncreOp
end function

function incrementAssignmentMul
    replace [expression_statement]
        E [expression_statement]
    deconstruct E
        AEL [assignment_expression] RAAE [repeat assign_assignment_expression]
    deconstruct RAAE
        ASE [assign_assignment_expression]
    deconstruct ASE
        '*= AER [assignment_expression]
    construct NewES [expression_statement]
        AEL '=  AEL '* '( AER ')
     import CountIncrementAssign [number]
    export CountIncrementAssign
        CountIncrementAssign [+ 1]
    import CountIncrementAssign
    import RandomChange [repeat number]
    construct ChangeNum [repeat number]
        RandomChange [select CountIncrementAssign CountIncrementAssign]
    deconstruct ChangeNum 
        Changed [number]
    construct ChangedIncreOp [expression_statement]
        E [isNeedChanged NewES Changed]
    by 
        ChangedIncreOp
end function

function incrementAssignmentDiv
    replace [expression_statement]
        E [expression_statement]
    deconstruct E
        AEL [assignment_expression] RAAE [repeat assign_assignment_expression]
    deconstruct RAAE
        ASE [assign_assignment_expression]
    deconstruct ASE
        '/= AER [assignment_expression]
    construct NewES [expression_statement]
        AEL '=  AEL '/  '( AER ')
     import CountIncrementAssign [number]
    export CountIncrementAssign
        CountIncrementAssign [+ 1]
    import CountIncrementAssign
    import RandomChange [repeat number]
    construct ChangeNum [repeat number]
        RandomChange [select CountIncrementAssign CountIncrementAssign]
    deconstruct ChangeNum 
        Changed [number]
    construct ChangedIncreOp [expression_statement]
        E [isNeedChanged NewES Changed]
    by 
        ChangedIncreOp
end function

function incrementAssignmentMod
    replace [expression_statement]
        E [expression_statement]
    deconstruct E
        AEL [assignment_expression] RAAE [repeat assign_assignment_expression]
    deconstruct RAAE
        ASE [assign_assignment_expression]
    deconstruct ASE
        '%= AER [assignment_expression]
    construct NewES [expression_statement]
        AEL '=  AEL '% '( AER ')
         import CountIncrementAssign [number]
    export CountIncrementAssign
        CountIncrementAssign [+ 1]
    import CountIncrementAssign
    import RandomChange [repeat number]
    construct ChangeNum [repeat number]
        RandomChange [select CountIncrementAssign CountIncrementAssign]
    deconstruct ChangeNum 
        Changed [number]
    construct ChangedIncreOp [expression_statement]
        E [isNeedChanged NewES Changed]
    by 
        ChangedIncreOp
end function

function incrementAssignmentLeftShift
    replace [expression_statement]
        E [expression_statement]
    deconstruct E
        AEL [assignment_expression] RAAE [repeat assign_assignment_expression]
    deconstruct RAAE
        ASE [assign_assignment_expression]
    deconstruct ASE
        '<<= AER [assignment_expression]
    construct NewES [expression_statement]
        AEL '=  AEL '<< '( AER ')
     import CountIncrementAssign [number]
    export CountIncrementAssign
        CountIncrementAssign [+ 1]
    import CountIncrementAssign
    import RandomChange [repeat number]
    construct ChangeNum [repeat number]
        RandomChange [select CountIncrementAssign CountIncrementAssign]
    deconstruct ChangeNum 
        Changed [number]
    construct ChangedIncreOp [expression_statement]
        E [isNeedChanged NewES Changed]
    by 
        ChangedIncreOp
end function

function incrementAssignmentRightShift
    replace [expression_statement]
        E [expression_statement]
    deconstruct E
        AEL [assignment_expression] RAAE [repeat assign_assignment_expression]
    deconstruct RAAE
        ASE [assign_assignment_expression]
    deconstruct ASE
        '>>= AER [assignment_expression]
    construct NewES [expression_statement]
        AEL '=  AEL '>> '( AER ')
     import CountIncrementAssign [number]
    export CountIncrementAssign
        CountIncrementAssign [+ 1]
    import CountIncrementAssign
    import RandomChange [repeat number]
    construct ChangeNum [repeat number]
        RandomChange [select CountIncrementAssign CountIncrementAssign]
    deconstruct ChangeNum 
        Changed [number]
    construct ChangedIncreOp [expression_statement]
        E [isNeedChanged NewES Changed]
    by 
        ChangedIncreOp
end function

function incrementAssignmentAnd
    replace [expression_statement]
        E [expression_statement]
    deconstruct E
        AEL [assignment_expression] RAAE [repeat assign_assignment_expression]
    deconstruct RAAE
        ASE [assign_assignment_expression]
    deconstruct ASE
        '&= AER [assignment_expression]
    construct NewES [expression_statement]
        AEL '=  AEL '& '( AER ')
     import CountIncrementAssign [number]
    export CountIncrementAssign
        CountIncrementAssign [+ 1]
    import CountIncrementAssign
    import RandomChange [repeat number]
    construct ChangeNum [repeat number]
        RandomChange [select CountIncrementAssign CountIncrementAssign]
    deconstruct ChangeNum 
        Changed [number]
    construct ChangedIncreOp [expression_statement]
        E [isNeedChanged NewES Changed]
    by 
        ChangedIncreOp
end function

function incrementAssignmentXor
    replace [expression_statement]
        E [expression_statement]
    deconstruct E
        AEL [assignment_expression] RAAE [repeat assign_assignment_expression]
    deconstruct RAAE
        ASE [assign_assignment_expression]
    deconstruct ASE
        '^= AER [assignment_expression]
    construct NewES [expression_statement]
        AEL '=  AEL '^ '( AER ')
     import CountIncrementAssign [number]
    export CountIncrementAssign
        CountIncrementAssign [+ 1]
    import CountIncrementAssign
    import RandomChange [repeat number]
    construct ChangeNum [repeat number]
        RandomChange [select CountIncrementAssign CountIncrementAssign]
    deconstruct ChangeNum 
        Changed [number]
    construct ChangedIncreOp [expression_statement]
        E [isNeedChanged NewES Changed]
    by 
        ChangedIncreOp
end function

function incrementAssignmentOr
    replace [expression_statement]
        E [expression_statement]
    deconstruct E
        AEL [assignment_expression] RAAE [repeat assign_assignment_expression]
    deconstruct RAAE
        ASE [assign_assignment_expression]
    deconstruct ASE
        '|= AER [assignment_expression]
    construct NewES [expression_statement]
        AEL '=  AEL '| '( AER ')
     import CountIncrementAssign [number]
    export CountIncrementAssign
        CountIncrementAssign [+ 1]
    import CountIncrementAssign
    import RandomChange [repeat number]
    construct ChangeNum [repeat number]
        RandomChange [select CountIncrementAssign CountIncrementAssign]
    deconstruct ChangeNum 
        Changed [number]
    construct ChangedIncreOp [expression_statement]
        E [isNeedChanged NewES Changed]
    by 
        ChangedIncreOp
end function
% 完成增量操作的转换
% ----------------------------------------------------------------
