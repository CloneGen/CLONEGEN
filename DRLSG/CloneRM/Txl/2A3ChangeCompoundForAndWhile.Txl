% Txl v10.8 (7.5.20) (c) 1988-2020 Queen's University at Kingston
% statements 
% 这个文件主要实现修改for 循环

include "c.grm"
%include "extract_id.Txl" % 这主要是实现变量名和函数名重命名的功能

% ----------------------------------------------------------------
% 这里为了转换的需要重新定义了部分结构， 这里是一些redefine结构。
% 这里在某些重定义中加入 '; 的作用是因为重定义变量中可能会产生的冲突，加入'; 可以起到消除冲突的作用

% 重新定义while结构
redefine while_statement
    ... |[expression] ';[NL] 'while '( [condition] ') [sub_statement] 
    | '{ '; [NL] [IN] [opt non_null_declaration]  'while '( [opt expression_list] ') [sub_statement] [NL] [EX] '} [NL]
    | '; [NL] [repeat block_item] [do_while_condition] [sub_statement] % 这里是 do...while 循环转换到while 循环的时候会用到
    |  '{ [NL] [IN] '; [repeat block_item]  'while '( [opt expression_list] ') [sub_statement] [NL] [EX] '} [NL]  % 这里是把for循环转换成while循环会用到
end redefine

% 重新定义了sub_statement结构 ，这里主要是for 循环到 while 循环的转换会用到
redefine sub_statement 
    ... |'{ [repeat sub_statement]'}
end redefine

% 这之前都是重新定义的结构
% ----------------------------------------------------------------


%----------------------------------------------------------------
% 这里是主函数的开始

function main
    replace [program]
        P [program]
    % 这里设置全局路径,使用的时候需要修改这个路径，这里表示随机变换的文件名
    export RandomPath [stringlit]
        "../CountResult/2For.random"
    export RandomPathWhile [stringlit]
        "../CountResult/3While.random"
    by 
        P  [changeProgram] 
end function

function changeProgram
    replace  [program]
        CSB [program]
    by
        CSB [changeCompoundFor]
        [changeCompoundWhile]
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
    import RandomPathWhile [stringlit]
    construct RandomChangeWhile [repeat number]
      _ [readRandomFile RandomPathWhile] %[print]
    construct NewS [repeat statement]
        _ [changeWhileStatement each S RandomChangeWhile]
    construct NS [repeat statement]
        _ [fromWhileToStatement each S]
    by 
        CSB [replaceStatement each NS NewS]
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

% ---------------------------------------------------------------
% 第四种情况，修改for语句
function changeCompoundFor
    replace [program]
        CSB [program]
    construct S[repeat for_statement]
        _ [^ CSB]
    construct LenFor [number]
        _ [length S] %[putp "THE FOR NUMBER IS:%"]
    import RandomPath [stringlit]
    construct RandomChange [repeat number]
      _ [readRandomFile RandomPath] %[print]
    construct NewS [repeat statement]
        _ [changeForStatementCase0 each S RandomChange]
    construct NNewS [repeat statement]
        _ [changeForStatementCase1 each S RandomChange]
    construct NNNewS [repeat statement]
        _ [changeForStatementCase2 each S RandomChange]
    construct NS [repeat statement]
        _ [fromForToStatement each S]
    construct NCSB [program]
        CSB [replaceStatement each NS NNewS]
    construct NEwCSB [program]
        NCSB [replaceStatement each NS NewS]
    by
        NEwCSB [replaceStatement each NS NNNewS]
end function

% statement 的替换
function replaceStatement S [statement] NS [statement]
    replace *[statement]
        S  
    by
        NS
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

% -----------------------for-----------------------------------------
% 从这里开始从 for 循环到 while 循环的转换操作
% 这里处理 for(i=0,k=1;i<20,k<10;i++,k++) 这种形式
% 这个函数是处理for 循环到while 循环转换的主体
function changeForStatementCase2 For [for_statement] changed [number]
    replace [repeat statement]
        RS [repeat statement]
    construct S [statement]
        For
    construct NS [statement]
        S [newForStatement2]
    construct Changed [statement]
        S [isForNeedChanged NS changed] %[message "the for statement is:"][print][message "-------"][message ""]
    by 
        RS [. Changed]
end function

function newForStatement2
    replace [statement]
        For [for_statement]
    deconstruct For
        'for '( '; '; ') 
	     S2 [sub_statement]    
    % 这里是为了处理嵌套的变量
    construct whileStatement [while_statement]
       '{ ';   'while '( 'true ') S2 '}
    construct OutwhileStatement [while_statement]
        whileStatement %[print]
    by 
        whileStatement
end function
% -----------------------for-----------------------------------------
% 从这里开始从 for 循环到 while 循环的转换操作
% 这里处理 for(i=0,k=1;i<20,k<10;i++,k++) 这种形式
% 这个函数是处理for 循环到while 循环转换的主体
function changeForStatementCase1 For [for_statement] changed [number]
    replace [repeat statement]
        RS [repeat statement]
    construct S [statement]
        For
    construct NS [statement]
        S [newForStatement1]
    construct Changed [statement]
        S [isForNeedChanged NS changed] %[message "the for statement is:"][print][message "-------"][message ""]
    by 
        RS [. Changed]
end function

function newForStatement1
    replace [statement]
        For [for_statement]
    deconstruct For
        'for '( OptI [opt non_null_declaration] I [list expression] ';
        C [opt expression_list] S1 [opt semi_opt_expression_list] ') 
	     S2 [sub_statement]    
    % 这里是为了处理嵌套的变量
    construct S2Embed [sub_statement]
        S2  %[putp "S2Embed is : %"]
    % 构造新的while循环的结构
    construct RBI [repeat block_item]
        _ [forSubCreateBlockItem1 S2Embed]%[putp "the RIB is:%"] % 当sub_statement是statement的情况
    construct NewRBI [repeat block_item]
        RBI [forSubCreateBlockItem2 S2Embed] %[putp "the NewRBI is:%"]% 当sub_statement是 sub_statement的情况
    deconstruct S1 
        '; S1S [list expression]
    construct NewS1S [repeat block_item]
        _ [changeExpression each S1S]
    construct NewI [repeat block_item]
        _ [changeExpression each I]
    construct S2RP [repeat sub_statement]
        _ [. S2Embed] %[putp "S2RP is %"]
    % 去除多余的大括号
    construct NewS2 [repeat block_item]
        _ [. NewRBI] [. NewS1S]
    construct NewS2S [sub_statement]
    '{
        NewS2
    '}
    construct NewC [opt expression_list] 
        C [isNullI]
    construct whileStatement [while_statement]
       '{ ';  NewI  'while '( NewC ') NewS2S '}
    construct OutwhileStatement [while_statement]
        whileStatement %[print]
    by 
        whileStatement
end function

% 判断条件是否为空，如果为空，需要替换为 1
function isNullI 
    replace [opt expression_list]
        OEL [opt expression_list]
    construct Null [opt expression_list]
    where 
        OEL [= Null]
    construct TE[expression]
        '1
    construct EL[expression_list]
        TE %[print]
    construct Out[opt expression_list]
        EL %[message "tesst:"][print]
    by 
        EL
end function

function fromForToStatement S [for_statement]
    replace [repeat statement]
        RS [repeat statement]
    construct NS [statement]
        S
    by
        RS [. NS]
end function  

% 从这里开始从 for 循环到 while 循环的转换操作
% 这里处理 for(int i=0,k=1;i<20,k<10;i++,k++) 这种形式
% 这个函数是处理for 循环到while 循环转换的主体
function changeForStatementCase0  For [for_statement] changed [number]
    replace [repeat statement]
       RS [repeat statement]
    construct S [statement]
        For %[message "the for statement is:"][print][message "-------"][message ""]
    construct NS [statement]
        S [newForStatement0]
    construct Changed [statement]
        S [isForNeedChanged NS changed] 
    by  
        RS [. Changed]
end function

% 这里用来判断当前选中的这个函数是否需要改变
function isForNeedChanged NS [statement]  Changed [number]
    replace [statement]
        St [statement]
    where
        Changed [= 1]
    by
        NS 
end function

function newForStatement0 
    replace [statement]
        For [for_statement]
    deconstruct For
        'for '( OptI [opt non_null_declaration] I [opt expression_list] ';
        C [list expression]') 
	     S2 [sub_statement]
    % 这里是为了处理for 循环中套for循环的情况
    construct S2Embed [sub_statement]
        S2 %[dealBlockEmbedStatement]  [dealBlockEmbedCompoundStatement]
    construct RBI [repeat block_item]
        _ [forSubCreateBlockItem1 S2Embed] % 当sub_statement是statement的情况
    construct NewRBI [repeat block_item]
        RBI [forSubCreateBlockItem2 S2Embed] % 当sub_statement是 sub_statement的情况
   
    % 去除多余的大括号
    construct NewC [repeat block_item]
        _ [changeExpression each C]
    construct NewS2 [repeat block_item]
        _ [. NewRBI] [. NewC]
    construct NewS2S [sub_statement]
    '{
        NewS2
    '}
    construct NewI [opt expression_list]
        I [isNullI]
    construct whileStatement [while_statement]
      '{ '; OptI 'while '( NewI ') NewS2S '}
    by 
        whileStatement
end function


% 这里构造用for函数内容构造 block_item 当sub_statement 是 compound_statement的情况
function forSubCreateBlockItem2 SS [sub_statement]
    replace [repeat block_item]
        RBI [repeat block_item]
    deconstruct SS
        '{ 
             CSB [compound_statement_body]
        '} 
    construct OutSS [sub_statement]
        SS %[putp "the SS is:%"]
    deconstruct CSB
        OBIL [opt block_item_list]
    deconstruct OBIL
        BIL [block_item_list]
    deconstruct BIL 
        RB [repeat block_item]
    by 
        RBI [. RB]
end function 

% 这里构造用for函数内容构造 block_item ，sub_statement 是 statement的情况
function forSubCreateBlockItem1 SS [sub_statement]
    replace [repeat block_item]
        RBI [repeat block_item]
    construct OutSS [sub_statement]
        SS %[putp "S2Embed is : %"]
    deconstruct SS
         S [statement]
    construct BI [block_item]
        S
    by 
        RBI [. BI]
end function 

% 这里完成 statement 的处理
% 这里把 i++,k++ 这种形式的for循环表达式转换成 , 这里主要是提取 expression 
% i++; k++; 这种sub_statement的形式
function changeExpression S[expression]
    replace [repeat block_item]
        St [repeat block_item]
    construct OutS [expression]
        S %[message "THE EXPRESSION IS:"][print]
    export isContinueExpress [number]
        0
    construct BIOne [repeat block_item]
        _ [dealSequentialAssignment S]
    construct BITwo [repeat block_item]
        _ [fromExpressionToBlockItem S]
    by 
        St [. BITwo][. BIOne]
end function

% 这里处理第二种情况，直接从 i=0  expression 到 i=0; statement 的转换
function fromExpressionToBlockItem S [expression]
    replace [repeat block_item]
        St [repeat block_item]
    import isContinueExpress [number]
    where
        isContinueExpress [= 0]
    construct NewS [charlit]
        _ [quote S]
    construct NewSS [simple_statement]
        _ [parse NewS]
    construct US [unlabeled_statement]
        NewSS ';
    construct BI [block_item]
        US 
    by 
        St [. BI]
end function


% 这里处理i=j=0; 这种情况
function dealSequentialAssignment S [expression]
    replace [repeat block_item]
        RBI [repeat block_item]
    construct AssignExpress [repeat assignment_expression]
        _[^ S]
    construct LenAssignExpress [number]
        _[length AssignExpress]
    where 
        LenAssignExpress [> 2]
    construct OutS [expression]
        S% [print]
    % 设置二选一的标识
    export isContinueExpress [number]
      1
    % 这里获取最后一个assignment_expression
    construct LastAssignExpress [repeat assignment_expression]
        AssignExpress[select LenAssignExpress LenAssignExpress]
    deconstruct LastAssignExpress
        LastAExpress [assignment_expression]
    export LastAExpress
    % 除了最后一个以外的其它assignment_expression
    construct NewLenAssign [number]
        LenAssignExpress [- 1]
    construct NewAssignExpress [repeat assignment_expression]
        AssignExpress [select 0 NewLenAssign]
    construct newBlockItems [repeat block_item]
        _ [fromAssignToBlockItems each NewAssignExpress]
    by 
        RBI [. newBlockItems]
end function

% 这里完成assignment_expression 到 block_item 的转换
function fromAssignToBlockItems AE [assignment_expression]
    replace [repeat block_item]
        RBI [repeat block_item]
    import LastAExpress [assignment_expression]
    deconstruct AE
        UnaryExpressAssign [unary_expression_assign]
        AssignExpress [assignment_expression] 
    construct OutAE [unary_expression_assign]
        UnaryExpressAssign %[print]
    construct NewExpress [expression]
        UnaryExpressAssign LastAExpress
    construct OutNewExp [expression]
        NewExpress %[print]
    construct NewS [charlit]
        _ [quote NewExpress]
    construct NewSS [simple_statement]
        _ [parse NewS]
    construct US [unlabeled_statement]
        NewSS ';
    construct BI [block_item]
        US %[print]
    by 
        RBI [. BI]
end function


% 这里完成基础for循环的转换操作
function changeForStatement
    replace [block_item]
        For [for_statement]
    deconstruct For
        'for '( I [expression] '; C [expression] '; S1 [expression] ') 
	     S2 [sub_statement]
    construct NewS2 [sub_statement]
        S2 [changeForSubStatement S1]  
    construct NewWhile [while_statement]
        I '; 'while '( C ') NewS2
    construct OutNewWhile [while_statement]
        NewWhile %[print]
    by 
        NewWhile
end function

function changeForSubStatement S [expression]
    replace [sub_statement]
        SubS [statement]
    construct NewS [charlit]
        _ [quote S]
    construct NewSS [simple_statement]
        _ [parse NewS] 
    construct NewSubS [sub_statement]
    '{   
        SubS 
        NewSS ';
    '}
    by 
        NewSubS
end function
% for 循环到while 循环转换结束
%----------------------------for------------------------------------