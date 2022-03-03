% Txl v10.8 (7.5.20) (c) 1988-2020 Queen's University at Kingston
% statements 
% 
% version 20200924
% 这个文件的主要功能是实现代码statement , expression 等自身发生的变化

include "c.grm"
% 这里处理switch 语句到 if elseif 语句的转换

% ----------------------------------------------------------------
% 这里为了转换的需要重新定义了部分结构， 这里是一些redefine结构。
% 这里在某些重定义中加入 '; 的作用是因为重定义变量中可能会产生的冲突，加入'; 可以起到消除冲突的作用

% 这里重新定义了if_statement 主要是为了switch case 转换成 if else if 语句的时候会用到
redefine if_statement
    ... |
        'if '( [repeat condition]
            ') [sub_statement]
        | [if_statement]
            [repeat else_statement] 
end redefine
% 这之前都是重新定义的结构
% ----------------------------------------------------------------


%----------------------------------------------------------------
% 这里是主函数的开始

function main
    replace [program]
        P [program]
    export RandomPath [stringlit]
        "../CountResult/7Switch.random"
    by 
        P  [changeProgram] 
end function


% 主函数到这里结束
% ---------------------------------------------------------------


% ---------------------------------------------------------------
% 这里处理第 7 种情况 switch 语句的变换
function changeProgram
    replace [program]
        CSB [program]
    construct S[repeat switch_statement]
        _ [^ CSB]
    import RandomPath [stringlit]
    construct RandomChange [repeat number]
      _ [readRandomFile RandomPath]
    construct NewS [repeat statement]
        _ [changeSwitchStatement each S RandomChange]
    construct NS [repeat statement]
        _ [fromSwitchToStatement each S]
    by
        CSB [replaceStatement each NS NewS]
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


% ----------------------------------------------------------------
% 这里处理从switch case 到 if else 语句的变化
% 这里从switch 转换成Statement
function fromSwitchToStatement Switch [switch_statement]
    replace [repeat statement]
        RS [repeat statement]
    construct NS [statement]
        Switch
    by
        RS [. NS]
end function

% 这里开始修改SwitchStatement 语句
function changeSwitchStatement Switch [switch_statement] Change [number]
    replace [repeat statement]
        RS [repeat statement]
    construct S [statement]
        Switch
    construct NS [statement]
        S [newSwitchStatement]
    construct Changed [statement]
        S [isNeedChanged NS Change]
    by 
        RS [. Changed]
end function

% 这里判断是否需要改变
function isNeedChanged NS[statement] Change[number]
    replace [statement]
        St [statement]
    where
        Change [= 1]
    by 
        NS 
end function


% 这里进行对应的改变,这里将switch 语句变换为case 语句
function newSwitchStatement
    replace [statement]
        Switch [switch_statement]
    deconstruct Switch
        'switch '( Ex [expression_list] ') S [sub_statement]
    deconstruct S 
        CS [compound_statement]
    deconstruct CS 
    '{ 
       CSB [compound_statement_body] 
    '} OS [opt ';] 
    deconstruct CSB
        OBlockItem [opt block_item_list]
    deconstruct OBlockItem
        BlockItem [repeat block_item]
    construct OutEx[expression_list]
        Ex %[putp "the Ex is : %"]
    
    % 这里处理defult 语句不在最后的情况，将default语句放到最后去
    construct NewBlockItem [repeat block_item]
        BlockItem [judgeDefaultIsFirst]
    construct OutS [repeat block_item]
        BlockItem %[putp "the Block_itme is : %"][print]
    % start analysis 这里把所有的case ,default 转换成一系列的if_statement
    export RIf [repeat if_statement]
        _
    construct ORIf [repeat if_statement]
        _ [createRepeatIfStatements Ex NewBlockItem] %[print][message ""]
    import RIf
    construct OutRIf [repeat if_statement]
        RIf %[message "the if statement is"] [print]
    % 这里取出第一个if_statement
    construct OneRIf [repeat if_statement]  % 只有一个的时候才能deconstruct 成功
        RIf [select 1 1]
    deconstruct OneRIf  
        IfS [if_statement]
    construct OutIfS [if_statement] 
        IfS %[message "the IfS is : "][print]
    % 对除第一个 if_statement 之后的if_statement 进行操作生成一系列else if statement
    construct RestRIf [repeat if_statement]
        RIf [select 2 999]
    construct ElseIf [repeat else_statement]
        _ [caseCreateElseIfStatement each RestRIf] %[message "else if statement "][print][message ""]
    % 这里生成else 语句
    construct NewEIf [repeat else_statement]
        ElseIf [caseCreateElseStatement RestRIf] %[message "else if statement "][print][message ""]
    construct IfStatement [if_statement]
        IfS  NewEIf
    construct OutIfStatement [if_statement]
        IfStatement %[print]
    by 
        IfStatement
end function


function judgeDefaultIsFirst
    replace [repeat block_item]
        RBI [repeat block_item]
    construct DefaultEnd [number]
        0
    export CaseDefaultIndex [number]
        0
    construct FindDefault [number]
        0

    % 判断第一个语句是不是default
    construct FirstBlocks [repeat block_item]
        RBI [select 1 1] 
    deconstruct FirstBlocks
        FirstBlock [block_item]
    construct FindDefaults[number]
        FindDefault [findDefaultStart FirstBlock]
    % 这里代表第一个是default
    deconstruct FindDefaults
        1

    % 判断Default的尾部
    construct EndBlocks [repeat block_item]
        RBI [select 2 999]
    construct DefaultEnds[number]
        DefaultEnd [findDefaultEnd each EndBlocks] %[putp "the length is:%"]
    construct Defaults [repeat block_item]
        RBI [select 1 DefaultEnds ] %[putp "the length is:%"]
    construct DefaultEndss [number]
        DefaultEnds [+ 1]
    construct EndDefault [repeat block_item]
        RBI [select DefaultEndss 9999]%[putp "the length is:%"]
    construct NRBI [repeat block_item]
        _ [. EndDefault][. Defaults]
    construct OutS [repeat block_item]
        NRBI %[putp "the Block_itme is : %"]
    by 
        NRBI 
end function

function findDefaultEnd BlockItem [block_item]
    replace [number]
        N [number]
    import CaseDefaultIndex [number]
    construct testBlockItem [block_item]
        BlockItem [setDefaultNextIndex]
    deconstruct CaseDefaultIndex
        0
    by 
        N [+1]
end function

function setDefaultNextIndex
    replace [block_item]
        BI [block_item]
    construct RL [repeat label]
        _ [^ BI]
    construct RLL [number]
        _ [length RL]
    where
        RLL [> 0]
    export CaseDefaultIndex [number]
        1
    by 
        BI 
end function

% 寻找default 语句开头的位置
function findDefaultStart BI [block_item]
    replace [number]
        StartNumber [number]
    deconstruct BI 
        S [statement]
    deconstruct S 
        RL [repeat label] US[unlabeled_statement]
    deconstruct RL  
        L [label]
    deconstruct L 
        default ':
    by 
        1
end function


% 这里创建else 语句
function caseCreateElseStatement RIf [repeat if_statement]
    replace [repeat else_statement]
        RES [repeat else_statement]
    construct LenRIf[number]
        _ [length RIf]
    construct LastRIf [repeat if_statement]
        RIf [select LenRIf LenRIf]
    deconstruct LastRIf
        LRIf [if_statement]
    construct Else1 [repeat else_statement]
        _ [createElse1Statement LRIf] %[message ""][putp "else1 default is : %"]
    construct Else2 [repeat else_statement]
        _ [createElse2Statement LRIf] %[putp "else2 is : %"]
    by 
        RES [. Else1] [. Else2]
end function 

% default 的情况
function createElse1Statement LRIf [if_statement]
    replace [repeat else_statement]
        RES [repeat else_statement]
    deconstruct LRIf
        'if '( RC [repeat condition]
            ') SS [sub_statement]
    construct LenRC [number]
        _ [length RC]
    where
        LenRC [> 1]
    construct Else [else_statement]
        'else SS
    by 
        RES [. Else]
end function

% 没有 default 的情况
function createElse2Statement LRIf [if_statement]
    replace [repeat else_statement]
        RES [repeat else_statement]
    deconstruct LRIf
        'if '( RC [repeat condition]
            ') SS [sub_statement]
    construct LenRC [number]
        _ [length RC]
    where
        LenRC [= 1]
    construct Else [else_statement]
        'else '{ '; '}
    by 
        RES [. Else]
end function

% 这里创建 case 语句相关的else if 语句
function caseCreateElseIfStatement IfS [if_statement]
    replace [repeat else_statement]
        RES [repeat else_statement]
    deconstruct IfS
        'if '( RC [repeat condition]
            ') SS [sub_statement]
    construct LenRC [number]
        _ [length RC]
    export LenRCE[number]
        LenRC
    where 
        LenRC [= 1]
    construct ElseIf [else_statement]
        'else IfS
    by 
        RES [. ElseIf]
end function

% 思路是写一个循环函数，不断递归调用自己，每个循环都已case block_item 作为开始条件，
% 每个循环if 语句的构造以 break 语句作为结束 ,这里构造的是repeat if_statement
function createRepeatIfStatements Ex [expression_list] BlockItem [repeat block_item]
    replace [repeat if_statement]
        If [repeat if_statement]
    % 这里处理每个 repeat block_item 的第一个block_item , 也就是说处理第一个 case 语句
    construct firstBlockItem [repeat block_item]
        BlockItem [select 1 1] %[print] [message ""]

    % 这里获取的 constant_expression 可能不止一个，当是几个连着的case 的情况的时候这种情况比较特殊
    construct OutEx [expression_list]
        Ex %[putp "expression_list : %"] 
    construct CaseConstant [repeat constant_expression]
        _ [fromBlockItemGetConstanExpression each firstBlockItem] %[putp "CaseConstant :%"]  
    
    export tillBreak [number]
        0
    % 这里获取对应的case应该包含的语句
    construct OutBlockItem [repeat block_item]
        BlockItem %[message "the block item is:"][print][message ""]
    construct CaseStatement [repeat block_item]
        _ [getCaseIncludeStatement each BlockItem] %[message "CaseStatement is:"] [print][message ""]
    construct IfSubStatement [sub_statement]
        '{  
            CaseStatement
        '} 
    % 这里构造一系列的if condition
    construct IfConditions [repeat condition]
        _ [createIfCondition Ex CaseConstant]  %[message "the if condition is:"] [print] [message ""]
    construct LenIfCondition [number]
        _ [length IfConditions] %[putp "the len if condition is: %"] 
    construct IFStatement [if_statement]
        'if '( IfConditions 
            ') IfSubStatement
    construct OutIFStatement [if_statement]
        IFStatement %[putp "IfStatement is:%"]
    import RIf [repeat if_statement]
    export RIf
        _[. RIf] [. IFStatement]
    % 这里获取 case 语句之后的下一个 case 语句
    construct BlockItemLength [number]
        _ [length BlockItem] % [print]
    where 
        BlockItemLength [> 1]
    construct RestBlockItem[repeat block_item]
        BlockItem [tail 2] %[putp "RestBlockItem is  %"]

    % 全局变量用对循环进行控制
    export CaseIndex [number]
        0 
    construct IndexStart [number]
        1
    construct NextCaseIndex [number]
        IndexStart [getNextCaseIndex each RestBlockItem]% [putp "NextCaseIndex is: %"]
    construct OutRestBlockItem [repeat block_item]
        RestBlockItem %[print]
    
    import CaseIndex
    where 
        CaseIndex [= 1]
    construct RestBlockItemCase [repeat block_item]
        BlockItem [tail NextCaseIndex] %[message "RestBlockItem"][print] [message ""]
    by  
        If[. IFStatement] [createRepeatIfStatements Ex RestBlockItemCase]  % 递归调用当前函数，实现对整个case 语句的处理
end function

% 这里构造if  里面的condition 语句
function createIfCondition Ex [expression_list] CaseConstant [repeat constant_expression]
    replace [repeat condition]
        C [repeat condition]
    % 当constant_expression 为空的时候，比如default 语句
    construct DefaultCondition [repeat condition]
        _ [createDefaultCondition Ex CaseConstant] %[putp "DefaultCondition is :%"]
    
    % 构造case 语句对应的condition
    construct CaseCondition [condition]
        0
    construct NewCaseCondtion [condition]   
        CaseCondition [createCaseCondition Ex CaseConstant]
  %  construct NewEx [repeat expression_list]
  %      _ [createNewExpression each constant_expression]
    by 
        C  [. DefaultCondition] [. NewCaseCondtion]
end function

% 这里构造每个if 语句里面的condition 子函数
function createCaseCondition Ex [expression_list] CaseConstant [repeat constant_expression]
    replace [condition]
        C [condition]
    % 这里不处理default 语句这种情况
    construct CaseConstantLength [number]
        _ [length CaseConstant]
    where 
        CaseConstantLength [> 0]
    % 这里要构造一个总体的logical_OR_expression
    % logical_OR_expression 由 [logical_AND_expression] [repeat OR_logical_AND_expression] 组成
    % 所以这里分步骤构造，第一步构造logical_AND_expression 第二步构造 repeat OR_logical_AND_expression
    % 先提取出第一个condition  构造相应的logical_AND_expression
    construct CaseConstantFirst [repeat constant_expression]
        CaseConstant [select 1 1]
    deconstruct CaseConstantFirst
        CaseConstantFirstOne [constant_expression]
    construct LogicalAndExpression [logical_AND_expression]
        0
    construct NewLogicalAndExpression [logical_AND_expression]
        LogicalAndExpression [createLogicalAndExpression Ex CaseConstantFirstOne] 
  
    % 这里开始构造repeat OR_logical_AND_expression
    export Exs [expression_list]
        Ex 
    construct CaseConstantRest [repeat constant_expression]
        CaseConstant [tail 2] %[putp "The Rest const is:%"]
    construct OrLogicalAndExpression [repeat OR_logical_AND_expression]
        _ [createOrLogicalAndExpression each CaseConstantRest] %[putp "the OrLogicalAndExpression is : %"]
    
    % 这里把两个分支合起来构造整个条件表达式，构造logical_OR_expression
    construct LOE [logical_OR_expression]
        NewLogicalAndExpression OrLogicalAndExpression
    construct OutLOE [logical_OR_expression]
        LOE %[putp "the LOE is : %"]
    by 
        LOE
end function

% 这里构造 repeat OR_logical_AND_expression
function createOrLogicalAndExpression CE [constant_expression]
    replace [repeat OR_logical_AND_expression]
        OLAE [repeat OR_logical_AND_expression] 
    construct LAE [logical_AND_expression]
        0
    import Exs [expression_list]
    construct NewLAE [logical_AND_expression]
        LAE [createLogicalAndExpression Exs CE] 
    construct NewOLAE [OR_logical_AND_expression]
        '|| NewLAE
    by 
        OLAE [. NewOLAE]
end function

% 这里创建if 语句的第一个表达式
function createLogicalAndExpression Ex [expression_list] CaseConstantFirst [constant_expression]
    replace [logical_AND_expression]
        LAE [logical_AND_expression]
    deconstruct Ex
        SE [shift_expression]
    construct EqualityOperator [equality_operator]
        '==
    deconstruct CaseConstantFirst
        SECaseFist [shift_expression]
    construct EqualityExpression [equality_expression]
        SE EqualityOperator SECaseFist
    construct OutputS [equality_expression]
        EqualityExpression %[putp "the EqualityExpression is : %"]
    construct NewLAE [logical_AND_expression]
        EqualityExpression
    by 
        NewLAE 
end function

% 这里构造default 语句的 condition
function createDefaultCondition  Ex [expression_list] CaseConstant [repeat constant_expression]
    replace [repeat condition]
        C [repeat condition]
    construct CaseConstantLength [number]
        _ [length CaseConstant]
    where 
        CaseConstantLength [= 0]
    construct DC [condition]  
        Ex %[putp "DefaultCondition is :%"]
    by 
        C [. DC]
end function

% 这里获取对应case 语句里面的case 语句，这里获取每个block_item 里面的statement 语句
function getCaseIncludeStatement BlockItem [block_item]
    replace [repeat block_item] 
        RBlockItem [repeat block_item]
    import tillBreak [number]
    construct OuttillBreak [number]
        tillBreak %[putp "tillBreak after is : %"]
    where 
        tillBreak [= 0]
    construct OutBlockItem [block_item]
        BlockItem %[putp "BlockItem is %"]
    construct caseStatement [repeat block_item]
        _ [getCaseStatement BlockItem] %[putp "caseStatement is :%"]
    % case 语句之后的代码，但是没有包含在case 里面
    construct caseStatementContinue [repeat block_item]
        _ [getCaseStatementContinue BlockItem] %[putp "caseStatementContinue is: "]
    % 这里解决当case 语句是{} 这种形式包含 break; 的情况
    construct curCaseIsContainBreak [number]
        _ [judgeCurCaseIsContainBreak BlockItem]
    by 
        RBlockItem [. caseStatement] [. caseStatementContinue]
end function

function judgeCurCaseIsContainBreak BlockItem [block_item]
    replace [number]
        N [number]
    construct RBreak [repeat break_statement]
        _ [^ BlockItem] %[print]
    construct LenRBreak [number]
        _ [length RBreak]
    where 
        LenRBreak [> 0]
    export tillBreak [number]
        1
    by
        N
end function  

% 这里判断当前block是否是label 类型，如果不是，则直接加入相应的case 之后的语句当中去
function getCaseStatementContinue BlockItem [block_item]
    replace [repeat block_item]
        RBlockItem [repeat block_item]
    import tillBreak [number]
    where 
        tillBreak [= 0]
    construct caseBlock [repeat label]
        _ [^ BlockItem]
    construct caseBlockLength [number]
        _ [length caseBlock]
    where   
        caseBlockLength [= 0]
    by 
        RBlockItem [. BlockItem]
end function    

% 这里获取label 类型的语句
function getCaseStatement BlockItem [block_item]
    replace [repeat block_item]
        RBlockItem [repeat block_item]
    deconstruct BlockItem
        S [statement]
    deconstruct S 
        RL [repeat label] US [unlabeled_statement]
    construct NewUs [block_item]
        US [setBreakLabel]  %[putp "NewUS is :%"]
    % 这里判断{} 里面的break 语句
    construct NNewUs [block_item]
        NewUs [judgeCaseIsContainBreak] %[print]
    % 这里如果出现了Break 语句要及时终中操作
    deconstruct RL
        L [label]
    import tillBreak [number]
    where 
        tillBreak [= 0]
    by 
        RBlockItem [. NNewUs]
end function


function judgeCaseIsContainBreak 
    replace [block_item]
        BI [block_item]
    deconstruct BI
        LA [repeat label] US [unlabeled_statement]
    construct OutUS [unlabeled_statement] 
        US %[print]
    construct RBI [repeat block_item]
        _ [^ BI]%[print]
    construct LENRBI [number]
        _ [length RBI]%[print]
    construct LastBI [repeat block_item]
        RBI [select LENRBI LENRBI]%[print]
    deconstruct LastBI
        LBI [block_item]% [print]
    construct Break [block_item]
        'break ';
    where 
        LBI [= Break]
    deconstruct US
        CS [compound_statement]
    deconstruct CS 
    '{
        CSB [compound_statement_body]
    '}
    deconstruct CSB
        RBIS [repeat block_item]
    construct LENRBIS [number]
        _ [length RBIS][- 1]% [print]
    construct NewRBIS [repeat block_item]
        RBIS [select 1 LENRBIS] %[print]
    construct NBI [unlabeled_statement]
        '{
            NewRBIS
        '}
    construct OUTNBI [unlabeled_statement]
        NBI %[print]
    by
        NBI 
end function 

% 判断 case 语句是否已经处理到了break , 是的话，则中断退出循环
function setBreakLabel
    replace [unlabeled_statement]
        Si [simple_statement] Se [semi]
    deconstruct Si
        Br [break_statement]
    construct OutBr [break_statement]
        Br %[putp "Br is : %"]
    export tillBreak [number]
        1
    construct OuttillBreak [number]
        tillBreak %[putp "tillBreak is : %"]
    by 
        Si Se 
end function

% 获取下一个case 语句的索引
function getNextCaseIndex OneBlockItem [block_item]
    replace [number]
        N [number]
    import CaseIndex [number]
    where
        CaseIndex [= 0]
    construct testOneBlockItem [block_item]
        OneBlockItem [setIndexLabel]    
    by 
        N [+1]
end function

% 如果有或者default 则设置相应的caselabel, 之后的不处理
function setIndexLabel
    replace [block_item]
        OneBlockItem [block_item]
    construct RLabel [repeat label]
        _ [^ OneBlockItem] 
    construct RLabelLength [number]
        _ [length RLabel]
    where 
        RLabelLength [> 0]
    export CaseIndex [number]
        1
    by
        OneBlockItem
end function

    
% 这里从每个case 语句里面提取出相应的case 后面对应的表达式 ，比如这里 case 'a' 中的'a'.
function fromBlockItemGetConstanExpression BI [block_item]
    replace [repeat constant_expression]
        CE [repeat constant_expression]
    deconstruct BI 
        S [statement]
    construct OutS [statement]
        S %[putp "S is : %"]
    deconstruct S 
        RL [repeat label] US[unlabeled_statement]
    construct OutCE[repeat label]
        RL %[putp "RL is : %"]
    construct RCE [repeat constant_expression]
        _ [extractConstantExpression each RL] %[putp "RCE is : %"]
    by 
        CE [. RCE]
end function 

% 这里提取出 case 里面的expression
function extractConstantExpression L [label]
    replace [repeat constant_expression]
        CE [repeat constant_expression]
    deconstruct L   
        'case C [constant_expression] ':
    by 
        CE [. C]
end function
% switch 转换成 if else if 语句结束
% ----------------------------------------------------------------