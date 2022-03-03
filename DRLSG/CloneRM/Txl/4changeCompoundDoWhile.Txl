% Txl v10.8 (7.5.20) (c) 1988-2020 Queen's University at Kingston
% statements 
% 
% version 20200924
% 这个函数主要实现修改do while 循环

include "c.grm"
 
% ----------------------------------------------------------------
% 这里为了转换的需要重新定义了部分结构， 这里是一些redefine结构。
% 这里在某些重定义中加入 '; 的作用是因为重定义变量中可能会产生的冲突，加入'; 可以起到消除冲突的作用

% 重新定义while结构
redefine while_statement
%    ... |[expression] ';[NL] 'while '( [condition] ') [sub_statement] 
%    | '{ [NL] [IN] [opt non_null_declaration]  'while '( [opt expression_list] ') [sub_statement] [NL] [EX] '} [NL]
  ...  | '{{ [NL][IN] [repeat block_item+]  [do_while_condition] [sub_statement] [EX] [NL] '}} % 这里是 do...while 循环转换到while 循环的时候会用到
         % 这里用两个{{}} 是为了解决和{ while_statment } 的冲突问题
       
end redefine
% 这之前都是重新定义的结构d
% ----------------------------------------------------------------


%----------------------------------------------------------------
% 这里是主函数的开始

function main 
    replace [program]
        P [program]
    export RandomPath [stringlit]
        "../CountResult/4DoWhile.random"
    by 
        P  [changeProgram] 
end function


% 主函数到这里结束
% ---------------------------------------------------------------

% ----------------------------------------------------------------
% 这里处理从do...while 循环到 while 循环的转换


% 第四种情况，修改DoWhile循环
function changeProgram 
    replace [program]
        CSB [program]
    construct DoWhile [repeat do_statement]
        _ [^ CSB] %[putp "the do while statement is:%"]
    import RandomPath [stringlit]
    construct RandomChange [repeat number]
      _ [readRandomFile RandomPath] 
    construct NDoWhile [repeat statement]
        _ [changeDoWhileStatement each DoWhile RandomChange] %[putp "the new st is:%"]
    construct NS [repeat statement]
        _ [fromDoToStatement each DoWhile] %[putp "the nwe wile is%"]
    by
        CSB [replaceStatement each NS NDoWhile] 
end function


% 这里读取文件内容
rule readRandomFile FileName [stringlit]
    replace [repeat number+]
      RN [repeat number+]
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

function changeDoWhileStatement DS[do_statement] Change [number]
    replace [repeat statement]
        RS [repeat statement]
    construct ST [statement]
        DS    
    construct NST [statement]
        ST [newDoStatement]
    construct Changed [statement]
        ST [isNeedChanged NST Change] 
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

% 这里修改do_statement
function newDoStatement
    replace [statement]
        DoWhile [statement]
    deconstruct DoWhile
        DoSS [structured_statement]
    deconstruct DoSS
        DS [do_statement]
    deconstruct DS
        'do 
        S [sub_statement]
        DWC [do_while_condition]
        ';
    deconstruct S
        '{
            BIL [repeat block_item+]
        '}
    construct OutBIL [repeat block_item+]
        BIL %[message "the BIL is:"][print]
    construct While [while_statement]
        '{{ BIL DWC S '}}   
    by 
        While
end function

function fromDoToStatement Do [do_statement]
    replace [repeat statement]  
        RS [repeat statement]
    construct NS [statement]
        Do
    by 
        RS [. NS]
end function 
        
% 从 do...while 循环到 while 循环的转换完成
% ----------------------------------------------------------------