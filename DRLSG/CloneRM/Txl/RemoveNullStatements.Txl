% Parser for C programs
% zhangweiwei , 202009
% 这个文件的主要作用是用来删除文件里面的空语句 ;
% Using Gnu C grammar
include "c.grm"


% Main function
function main
    replace [program]
        P [program]
    by 
        P  [changeFunction] 
end function

% 这里修改文件里面的每个函数
function changeFunction
    replace [program]
        P [program]
    deconstruct P
        RFDOD [repeat function_definition_or_declaration]
    construct ORFD [repeat function_definition]
        _ [extractFuncDefintion each RFDOD]
    construct NewRFD [repeat function_definition]
        _ [changeFunctionDefinition each RFDOD] 
    by 
        %NewRFD 
        P [replaceFunc each ORFD NewRFD]
end function


function replaceFunc FDOD [function_definition] NewRFD [function_definition]
    replace [program]
        P [program]
    by  
        P [$ FDOD NewRFD]
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
       CSB [changeCompoundStatementBody] [removeDoubleBracket]
    '} OS
end function

rule removeDoubleBracket
    replace [compound_statement]
        CSB [compound_statement]
    deconstruct CSB
    '{{ NCSB [compound_statement_body] '}}
    by 
    '{ NCSB [changeCompoundStatementBody] '}
end rule

rule changeCompoundStatementBody
    replace  $[compound_statement_body]
        Dos [repeat block_item]
    construct NDos [repeat block_item]
        _ [removeNullDeclaration each Dos] % [message "THE RESULT IS:"][print]
    by 
        NDos 
end rule


% ----------------------------------------------------------------
% 这里删除空白语句，这里的空白语句是由于前面重定义为了避免冲突而引进的
% 删除只有 ;  的语句
function removeNullDeclaration BI [block_item]
    replace [repeat block_item]
        DE [repeat block_item ]
    construct NDE [repeat block_item]
        _ [testIsStatement BI]
    construct NNDE [repeat block_item]
        NDE [testIsDeclaration BI] 
    by
        DE [. NNDE]
end function 

% 判断是否是declaration 
function testIsDeclaration BI [block_item]
    replace [repeat block_item]
        RBI [repeat block_item]
    deconstruct BI
        DE [declaration]
    deconstruct not DE
        ';
    construct OutBI [block_item]
        BI %[message "THE BI IS:"][print]
    by
        RBI [. BI]        
end function

% 判断是否是statemnt
function testIsStatement BI[block_item]
    replace [repeat block_item]
        RBI [repeat block_item]
    deconstruct BI
       St [statement]
    construct OutBI [block_item]
        BI %[message "THE BI IS:"][print]
    by 
        RBI [. BI]
end function

% 删除空白语句完成
% ---------------------------------------------------------------