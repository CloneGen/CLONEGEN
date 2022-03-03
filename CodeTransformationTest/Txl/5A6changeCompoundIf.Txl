% Txl v10.8 (7.5.20) (c) 1988-2020 Queen's University at Kingston
% statements 
% 
% 这个文件主要实现if else 和 if esleif 之间的转换，这两个要连起来考虑因为这两个是等价转换
% 对同一个语句只能进行一种操作，有可能只存在一个

include "c.grm"
%include "extract_id.Txl" % 这主要是实现变量名和函数名重命名的功能

% ----------------------------------------------------------------
% 这里为了转换的需要重新定义了部分结构， 这里是一些redefine结构。
% 这里在某些重定义中加入 '; 的作用是因为重定义变量中可能会产生的冲突，加入'; 可以起到消除冲突的作用

% 这里重新定义else_statement 主要是为了使得if-else-if  和 if-else 之间的相互转换区分开来
redefine else_sub_statement
    ... | [compound_statement_body]
end redefine
 
% 这之前都是重新定义的结构
% ----------------------------------------------------------------


%----------------------------------------------------------------
% 这里是主函数的开始

function main
    replace [program]
        P [program]
    export RandomPathIfElseIf [stringlit]
        "../CountResult/5IfElseIf.random"
    export RandomPathIfElse [stringlit]
        "../CountResult/6IfElse.random"
    by 
        P  [changeProgram] 
end function

% 主函数到这里结束
% ---------------------------------------------------------------



% ---------------------------------------------------------------
% 这里处理第5，6 种情况 if else 和 else if  之间的转换
function changeProgram
    replace [program]
        CSB [program]
    construct S[repeat if_statement]
        _ [^ CSB]
    % 这里导入应该随机变换的数据
    import RandomPathIfElseIf [stringlit]
    export RandomChangeIfElseIf [repeat number]
      _ [readRandomFile RandomPathIfElseIf] 
    import RandomPathIfElse [stringlit]
    export RandomChangeIfElse [repeat number]
      _ [readRandomFile RandomPathIfElse] 
    % 这里实现对应的计数操作
    export CountIfElseIf [number]
        0
    export CountIfElse [number]
        0
    construct NewS [repeat statement]
        _ [changeIfStatement each S]
    construct NS [repeat statement]
        _ [fromIfToStatement each S]
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

% 处理到这里结束
% ----------------------------------------------------------------


% ----------------------------------------------------------------
% 这里处理整体的if 语句的转换
function fromIfToStatement S [if_statement]
    replace [repeat statement]
        RS [repeat statement]
    construct NS [statement]
        S
    by
        RS [. NS]
end function

function changeIfStatement If [if_statement]
    replace [repeat statement]
        RS [repeat statement]
    construct IfElseIf [number]
        0
    construct S [statement]
        If
    construct NS [statement]
        S [changeIfElsetoIfElseIf]
            [changeIfElseIftoIfElse]
    by 
        RS [. NS]
end function 
% if 语句的转换到这里结束
% ----------------------------------------------------------------


% ----------------------------------------------------------------
% 这里从 if esel 转换到 if else if
function changeIfElsetoIfElseIf
    replace [statement]
        If [if_statement]
    construct OptIf[if_statement]
        If %[message "If is:"][print] [message ""]
    deconstruct If
        'if '( C [condition] ') S [sub_statement]
        OE [opt else_statement]
    construct NewOE [opt else_statement]
        OE [changeIfElseStatement]
    construct NewIf [if_statement]
        'if '( C ') S 
        NewOE
    export IfElseIf [number]
        1
    by 
        NewIf  
end function

function changeIfElseStatement
    replace [opt else_statement] 
        E [opt else_statement]
    deconstruct E 
        'else EIf [sub_statement]
    deconstruct EIf
    '{  
        EIfCompoundBody [compound_statement_body]
    '}
    deconstruct EIfCompoundBody
        If [if_statement]
    deconstruct If
        'if '( C [condition] ') S [sub_statement]
            OE [opt else_statement]
    construct OutOE [opt else_statement]
        OE %[message "else :"] [print]
    % 这里主要是判断if 的下一条语句是否为 else ，如果不是else 需要自己手动加else ;
    construct RES [repeat else_statement]
        _ [createRepeatElseStatement OE] %[print] [message ""]
    construct NewRES [repeat else_statement]
        _ [createNewRES RES]
    construct NRES [repeat else_statement]
        _ [. RES] [. NewRES] %[message "if after else:"][print]
    deconstruct NRES
        NE [else_statement]
    construct OutIf [compound_statement_body]
        EIfCompoundBody %[putp "EIfCompoundBody is: %"]
    construct NewIf [if_statement]
        'if '( C ') S
            NE
    construct NewEIfCompoundBody [compound_statement_body]
        NewIf
    construct NewE [opt else_statement]
        'else NewEIfCompoundBody
    import CountIfElse [number]
    export CountIfElse
        CountIfElse [+ 1]
    import CountIfElse 
    construct OutCountIfElse [number]
        CountIfElse %[print]
    import RandomChangeIfElse [repeat number]
    construct RChanged [repeat number]
        RandomChangeIfElse [select CountIfElse CountIfElse]
    deconstruct RChanged
        Changed [number]
    construct OptE [opt else_statement]
        E [isNeedChanged NewE Changed]
    %import CountIfElse [number]
    %export CountIfElse
    %    CountIfElse [+ 1]
    by 
        OptE
end function

% 这里判断else 之后的 if  是否存在 else 如果不存在else 需要自己手动添加 else 语句
function createNewRES RES [repeat else_statement]
    replace [repeat else_statement]
        NRES [repeat else_statement]
    construct LenRES [number]
        _ [length RES] %[print]
    where 
        LenRES [= 0]
    construct Else [else_statement]
        'else ';
    by 
        NRES [. Else]
end function

% 这里将opt else_statement转换成 rpeat esle_statement 以用来判断else 之后的 if是否存在 else
function createRepeatElseStatement OE [opt else_statement]
    replace [repeat else_statement]
        RES [repeat else_statement]
    deconstruct OE
        E [else_statement]
    construct OutE [else_statement]
        E %[print]
    by
        RES [. E]
end function  
% if else  语句转换到 if else if 语句 完成
% ----------------------------------------------------------------

% ----------------------------------------------------------------
% if elseif else --> if { if else } else 的转换
function changeIfElseIftoIfElse
    %import IfElseIf [number]
    %where 
    %    IfElseIf [= 0]
    replace [statement]
        If [if_statement]
    deconstruct If
        'if '( C [condition] ') S [sub_statement]
        OE [opt else_statement]
    construct NewOE[opt else_statement]
        OE [changeElseIfStatement]
    construct OutNewOE [opt else_statement]
        NewOE %[putp "NewEIf is : %"]
    construct NewIf [if_statement]
        'if '( C ') S
        NewOE
    construct OutputNewIf [if_statement]
        NewIf %[putp "NewEIf is: %"]
    by 
        NewIf 
end function


function changeElseIfStatement
    replace [opt else_statement]    
        E [opt else_statement]
    deconstruct E
        'else E_If [if_statement]
    construct NewE [sub_statement]
    '{
        E_If
    '}
    construct NewEIf[opt else_statement]
        'else NewE
    % 这里主要是用来判断是否需要发生改变
    import CountIfElseIf [number]
    export CountIfElseIf
        CountIfElseIf [+ 1]
    import CountIfElseIf
    construct OutCountIfElseIf [number]
        CountIfElseIf %[print]
    import RandomChangeIfElseIf [repeat number]
    construct RRandomNumber [repeat number]
        RandomChangeIfElseIf [select CountIfElseIf CountIfElseIf]
    deconstruct RRandomNumber
        RandomNumber [number]
    %import CountIfElseIf [number]
    %export CountIfElseIf
    %    CountIfElseIf [+ 1]
    construct OptE[opt else_statement]
        E [isNeedChanged NewEIf RandomNumber]
    by
        OptE
end function

% 这里用来判断是否需要发生改变
function isNeedChanged NewEIf [opt else_statement] Change [number]
    replace [opt else_statement]
        OElse [opt else_statement]
    where
        Change [= 1]
    by
        NewEIf
end function 
% if ... else if ...   eles...   到    if ... else ... 转换完成
% ----------------------------------------------------------------