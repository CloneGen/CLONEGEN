% Txl v10.8 (7.5.20) (c) 1988-2020 Queen's University at Kingston
% statements 
% 
% version 20200924
% 这个文件主要是为了实现修改while 循环

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
        "../CountResult/3While.random"
    by 
        P  [changeCompoundWhile] 
end function


% 这里修改文件里面的每个函数
function changeFunction
    replace [program]
        P [program]
    deconstruct P
        RFDOD [repeat function_definition_or_declaration]
    construct ORFD [repeat function_definition]
        _ [extractFuncDefintion each RFDOD]  %提取所有函数定义进行操作
    construct NewRFD [repeat function_definition]
        _ [changeFunctionDefinition each RFDOD] 
    by 
        P [replaceFunc each ORFD NewRFD]
end function

function replaceFunc FDOD [function_definition] NewRFD [function_definition]
    replace [function_definition]
        FDOD
    by  
        NewRFD
end function

% 这里获取所有定义的函数
function extractFuncDefintion FDOD [function_definition_or_declaration]
    replace [repeat function_definition]
        RFuncDefine [repeat function_definition]   
    deconstruct FDOD 
        FD [function_definition]
    by 
        RFuncDefine [. FD]
end function

% 这里对函数进行修改操作
function changeFunctionDefinition FDOD [function_definition_or_declaration]
    replace [repeat function_definition]
        RFuncDefine [repeat function_definition]   
    deconstruct FDOD 
        FD [function_definition]
    construct NewFD [function_definition]
        FD [translateCFunction]
    by 
        RFuncDefine [. NewFD]
end function

% 这里对c 函数进行转换操作
function translateCFunction
    replace $[function_definition]
       FuncHead [function_header] FuncBody [compound_statement]
    by
       FuncHead 
       FuncBody [changeCompound]
end function

% 会循环调用这个函数 这里一个函数里面可能嵌套多个函数
function changeCompound
    replace [compound_statement]
    '{ 
       CSB [compound_statement_body] 
    '} OS [opt ';]  
    construct Output [compound_statement_body]
        CSB 
    by 
    '{ 
       CSB [changeCompoundStatementBody]
    '} OS
end function

% 这里是所有satement 可能情况的组合
function changeCompoundStatementBody
    replace  [compound_statement_body]
        CSB [compound_statement_body]
    by
        CSB 
end function 

% 主函数到这里结束
% ---------------------------------------------------------------



% ---------------------------------------------------------------
% 这里实现对while 循环的修改操作
% 第三种情况，修改while 语句
function changeCompoundWhile
    replace [program]
        CSB [program]
    construct S[repeat while_statement]
        _ [^ CSB]
    import RandomPath [stringlit]
    construct RandomChangeWhile [repeat number]
      _ [readRandomFile RandomPath] 
    construct NewS [repeat statement]
        _ [changeWhileStatement each S RandomChangeWhile]
    construct NS [repeat statement]
        _ [fromWhileToStatement each S]
    by 
        CSB [replaceStatement each NS NewS]
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

% statement 的替换
function replaceStatement S [statement] NS [statement]
    replace *[statement]
        S
    by
        NS
end function

function changeWhileStatement  While [while_statement] Change [number]
    replace [repeat statement]
       RS [repeat statement]
    construct S [statement]
        While
    construct NS [statement]
        S [newWhilwStatement]
    construct Changed [statement]
        S [isNeedChanged NS Change]
    by 
        RS [. Changed]
end function

%这里判断是否需要改变
function isNeedChanged NS[statement] Change [number]
    replace [statement]
        St [statement]
    where
        Change [= 1]
    by
        NS
end function  

function newWhilwStatement
    replace [statement]
        While [while_statement]
    deconstruct While
        'while '( E [condition] ') S [sub_statement]

    construct OutputE [condition]
        E %[putp "E is : %"]
    construct OutputS [sub_statement]
        S %[putp "S is : %"]
    construct SEmbed [sub_statement]
        S %[dealBlockEmbedStatement] [dealBlockEmbedCompoundStatement] 
    deconstruct E
        EC [expression_list] 
    construct ForStatement [for_statement]
        'for '( '; EC ';  ') SEmbed
    by 
        ForStatement
end function

function fromWhileToStatement S [while_statement]
    replace [repeat statement]
        RS [repeat statement]
    construct NS [statement]
        S
    by 
        RS [. NS]
end function
% while 循环转换结束
% ----------------------------------------------------------------