% Txl v10.8 (7.5.20) (c) 1988-2020 Queen's University at Kingston
% statements 
% 
% version 20200924
% 这里主要是完成自操作的修改

include "c.grm"

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
        "../CountResult/9SelfOperator.random"
    by 
        P  [changeProgram] 
end function

% 主函数到这里结束
% ---------------------------------------------------------------



% ---------------------------------------------------------------
% 这里处理第 9 种情况
function changeProgram
    replace [program]
        St [program]
    construct IOE [repeat expression]
        _ [^ St] %[message "expression is:"] [print]
    import RandomPath [stringlit]
    export RandomChange [repeat number]
      _ [readRandomFile RandomPath] 
    export CountSelfIncrement [number]
        0
    % 这里处理 i++, 这种expression 
    construct NewIOE [repeat expression] 
        _ [changeExpressionSelfOperator each IOE]   % 这里一定要处理表达式的对应关系，这里进行替换的变量对之间一定要严格对应
    construct NewSt [program]
        St [replaceSelfOperatorExpression each IOE NewIOE]
    % 这里处理 i++; 这种statement
    construct IOES [repeat expression_statement]
        _ [^ St]
    construct NewIOES [repeat expression_statement]
        _ [changeExpressionStatementSelfOperator each IOES]
    by 
        NewSt [replaceExpressionStatement each IOES NewIOES]
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
% 这里修改 i++ , i-- 在expression里面的这种自增，自减运算
% 这里修改 ++i， expression 里面的这种自增，自减操作

% 进行expression 的替换操作
function replaceSelfOperatorExpression E [expression] NE [expression]
    replace *[expression]
        E
    by 
        NE
end function

% 主要修改 i++,i--这种自加自减操作
function changeExpressionSelfOperator SOper [expression]
    replace [repeat expression]
        RPE [repeat expression]
    construct NewSOper [expression]
        SOper [changeSOperPlus] [changeSOperSub] [changeSOperPlusBefore] [changeSOperSubBefore] %[message "the Expression is:"] [print]
    by 
        RPE [. NewSOper]
end function

% expression自增操作修改 ++i
function changeSOperPlusBefore
    replace [expression]
        E [expression]
    deconstruct E
        RPIDO [repeat pre_increment_decrement_operator+]  PE [primary_expression] 
    deconstruct RPIDO
        PostExtension [pre_increment_decrement_operator]
    deconstruct PostExtension
        '++
    construct NewE [expression]
        PE '= PE '+ 1
    import CountSelfIncrement [number]
    export CountSelfIncrement
        CountSelfIncrement [+ 1]
    import CountSelfIncrement
    import RandomChange [repeat number]
    construct ChangeNum [repeat number]
        RandomChange [select CountSelfIncrement CountSelfIncrement]
    deconstruct ChangeNum 
        Changed [number]
    construct ChangedSelfOperator [expression]
        E [isNeedChanged NewE Changed]
    by 
        ChangedSelfOperator
end function 

% 这里判断是否需要改变
function isNeedChanged NE [expression] Changed [number]
    replace [expression]
        E [expression]
    where 
        Changed [= 1]
    by
        NE
end function

% expression自减操作的修改 --i
function changeSOperSubBefore
    replace [expression]
        E [expression]
    deconstruct E
        RPIDO [repeat pre_increment_decrement_operator+]  PE [primary_expression] 
    deconstruct RPIDO
        PostExtension [pre_increment_decrement_operator]
    deconstruct PostExtension
        '--
    construct NewE [expression]
        PE '= PE '- 1
    import CountSelfIncrement [number]
    export CountSelfIncrement
        CountSelfIncrement [+ 1]
    import CountSelfIncrement
    import RandomChange [repeat number]
    construct ChangeNum [repeat number]
        RandomChange [select CountSelfIncrement CountSelfIncrement]
    deconstruct ChangeNum 
        Changed [number]
    construct ChangedSelfOperator [expression]
        E [isNeedChanged NewE Changed]
    by 
        ChangedSelfOperator
end function 

% expression自增操作修改 i++
function changeSOperPlus
    replace [expression]
        E [expression]
    deconstruct E
        PE [primary_expression] RPE [repeat postfix_extension+]
    deconstruct RPE
        PostExtension [postfix_extension]
    deconstruct PostExtension
        '++
    construct OutPe [primary_expression]
        PE %[message "the PE is:"] [print] [message ""]
    construct NewE [expression]
        PE '= PE '+ 1
    construct OutE [expression]
        E %[message "the Expression is:"] [print]
    construct OutNewE [expression]
        NewE %[message "the Expression is:"] [print]
    import CountSelfIncrement [number]
    export CountSelfIncrement
        CountSelfIncrement [+ 1]
    import CountSelfIncrement
    import RandomChange [repeat number]
    construct ChangeNum [repeat number]
        RandomChange [select CountSelfIncrement CountSelfIncrement]
    deconstruct ChangeNum 
        Changed [number]
    construct ChangedSelfOperator [expression]
        E [isNeedChanged NewE Changed]
    by 
        ChangedSelfOperator
end function 

% expression自减操作修改 i--
function changeSOperSub
    replace [expression]
        E [expression]
    deconstruct E
        PE [primary_expression] RPE [repeat postfix_extension+]
    deconstruct RPE
        PostExtension [postfix_extension]
    deconstruct PostExtension
        '--
    construct OutPe [primary_expression]
        PE %[message "the PE is:"] [print] [message ""]
    construct NewE [expression]
        PE '= PE '- 1
    construct OutE [expression]
        E %[message "the Expression is:"] [print]
    construct OutNewE [expression]
        NewE %[message "the Expression is:"] [print]
    import CountSelfIncrement [number]
    export CountSelfIncrement
        CountSelfIncrement [+ 1]
    import CountSelfIncrement
    import RandomChange [repeat number]
    construct ChangeNum [repeat number]
        RandomChange [select CountSelfIncrement CountSelfIncrement]
    deconstruct ChangeNum 
        Changed [number]
    construct ChangedSelfOperator [expression]
        E [isNeedChanged NewE Changed]
    by 
        ChangedSelfOperator
end function 


% --------------------------------------------------------------
% 这里是修改 i++; 这种在statement 里面的自增，自减运算。
function replaceExpressionStatement E [expression_statement] NE [expression_statement]
    replace *[expression_statement]
        E
    by 
        NE
end function

%  expression_statement 中i++;i--; ++i,++j这种自加自减操作
function changeExpressionStatementSelfOperator SOper [expression_statement]
    replace [repeat expression_statement]
        RPE [repeat expression_statement]
    construct NewSOper [expression_statement]
        SOper [changeESOperPlus] [changeESOperSub] 
        [changeESOperSubBefore] [changeESOperPlusBefore]%[message "the Expression is:"] [print]
    by 
        RPE [. NewSOper]
end function

% expression_statement自增操作
function changeESOperPlusBefore
    replace [expression_statement]
        E [expression_statement]
    deconstruct E
        RPIDO [repeat pre_increment_decrement_operator+] PE [primary_expression]
    deconstruct RPIDO
        PostExtension [pre_increment_decrement_operator]
    deconstruct PostExtension
        '++
    construct NewE [expression_statement]
        PE '= PE '+ 1
    import CountSelfIncrement [number]
    export CountSelfIncrement
        CountSelfIncrement [+ 1]
    import CountSelfIncrement
    import RandomChange [repeat number]
    construct ChangeNum [repeat number]
        RandomChange [select CountSelfIncrement CountSelfIncrement]
    deconstruct ChangeNum 
        Changed [number]
    construct ChangedSelfOperator [expression_statement]
        E [isStNeedChanged NewE Changed]
    by 
        ChangedSelfOperator
end function 

% 这里判断是否需要改变
function isStNeedChanged NE [expression_statement] Changed [number]
    replace [expression_statement]
        E [expression_statement]
    where 
        Changed [= 1]
    by
        NE
end function

% expression_statement自减操作
function changeESOperSubBefore
    replace [expression_statement]
        E [expression_statement]
    deconstruct E
        RPIDO [repeat pre_increment_decrement_operator+] PE [primary_expression]
    deconstruct RPIDO
        PostExtension [pre_increment_decrement_operator]
    deconstruct PostExtension
        '--
    construct NewE [expression_statement]
        PE '= PE '- 1
    import CountSelfIncrement [number]
    export CountSelfIncrement
        CountSelfIncrement [+ 1]
    import CountSelfIncrement
    import RandomChange [repeat number]
    construct ChangeNum [repeat number]
        RandomChange [select CountSelfIncrement CountSelfIncrement]
    deconstruct ChangeNum 
        Changed [number]
    construct ChangedSelfOperator [expression_statement]
        E [isStNeedChanged NewE Changed]
    by 
        ChangedSelfOperator
end function 

% expresion_statement自增操作修改 i++
function changeESOperPlus
    replace [expression_statement]
        E [expression_statement]
    deconstruct E
        PE [primary_expression] RPE [repeat postfix_extension+]
    deconstruct RPE
        PostExtension [postfix_extension]
    deconstruct PostExtension
        '++
    construct OutPe [primary_expression]
        PE %[message "the PE is:"] [print] [message ""]
    construct NewE [expression_statement]
        PE '= PE '+ 1
    construct OutE [expression_statement]
        E %[message "the Expression is:"] [print]
    construct OutNewE [expression_statement]
        NewE %[message "the Expression is:"] [print]
    import CountSelfIncrement [number]
    export CountSelfIncrement
        CountSelfIncrement [+ 1]
    import CountSelfIncrement
    import RandomChange [repeat number]
    construct ChangeNum [repeat number]
        RandomChange [select CountSelfIncrement CountSelfIncrement]
    deconstruct ChangeNum 
        Changed [number]
    construct ChangedSelfOperator [expression_statement]
        E [isStNeedChanged NewE Changed]
    by 
        ChangedSelfOperator
end function 

% expression_statement 自减操作修改 i--
function changeESOperSub
    replace [expression_statement]
        E [expression_statement]
    deconstruct E
        PE [primary_expression] RPE [repeat postfix_extension+]
    deconstruct RPE
        PostExtension [postfix_extension]
    deconstruct PostExtension
        '--
    construct OutPe [primary_expression]
        PE %[message "the PE is:"] [print] [message ""]
    construct NewE [expression_statement]
        PE '= PE '- 1
    construct OutE [expression_statement]
        E %[message "the Expression is:"] [print]
    construct OutNewE [expression_statement]
        NewE %[message "the Expression is:"] [print]
    import CountSelfIncrement [number]
    export CountSelfIncrement
        CountSelfIncrement [+ 1]
    import CountSelfIncrement
    import RandomChange [repeat number]
    construct ChangeNum [repeat number]
        RandomChange [select CountSelfIncrement CountSelfIncrement]
    deconstruct ChangeNum 
        Changed [number]
    construct ChangedSelfOperator [expression_statement]
        E [isStNeedChanged NewE Changed]
    by 
        ChangedSelfOperator
end function 
% 这里完成自操作运算的修改
% ----------------------------------------------------------------