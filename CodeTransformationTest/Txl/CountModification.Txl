% 这个代码的实现对要修改代码进行统计，变换的代码进行统计

include "c.grm"


% ----------------------------------------------------------------
% 一些重定义标准库，实现代码的替换操作

% 这里重定义为了实现变量定义修改操作
redefine declaration
    ... |  [repeat declaration] '; [NL] [repeat init_declarator] 
end redefine

redefine init_declarator
    ... | [init_declarator] '; [NL]
end redefine

% 重新定义while结构
redefine while_statement
    ... |[expression] ';[NL] 'while '( [condition] ') [sub_statement] 
   % | '{ [NL] [IN] [opt non_null_declaration]  'while '( [opt expression_list] ') [sub_statement] [NL] [EX] '} [NL]
    | '; [NL] [repeat block_item] [do_while_condition] [sub_statement] % 这里是 do...while 循环转换到while 循环的时候会用到
    | '; [NL] [repeat block_item]  'while '( [opt expression_list] ') [sub_statement]  % 这里是把for循环转换成while循环会用到
end redefine

% 重新定义了sub_statement结构 ，这里主要是for 循环到 while 循环的转换会用到
redefine sub_statement 
    ... |'{ [repeat sub_statement]'}
end redefine

define n_sub_statement
    [compound_statement_body]
end define

% 这里重新定义else_statement 主要是为了使得if-else-if  和 if-else 之间的相互转换区分开来
redefine else_sub_statement
    ... | [compound_statement_body]
end redefine

% 这里重新定义了if_statement 主要是为了switch case 转换成 if else if 语句的时候会用到
redefine if_statement
    ... |
        'if '( [repeat condition]
            ') [sub_statement]
        | [if_statement]
            [repeat else_statement] 
end redefine

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

% 这里重新定义是为了对整型常量进行修改
redefine integer_constant
    ... | '( [number] '+ '1 '+ '2 '* '5 '- '1 ')
end redefine

% 这里重新定义是对浮点型常量的修改操作
redefine floating_constant
    ... | '( [floatnumber] '+ 3 '* 4 '+ 0.0 '- 12 ')
end redefine
% 重定义到这里完成
% ----------------------------------------------------------------


% ----------------------------------------------------------------
% 这里是主函数
function main
    replace [program]
        P [program]
    by  
        P  
         [changeFunction]        % 这里实现统计当前文件中每个函数中的代码行数
end function

% 这里对修改的函数进行计数操作
function changeFunction
    replace [program]
        P [program]
    deconstruct P
        RFDOD [repeat function_definition_or_declaration]
    % 这里定义计数的全局变量
    construct _ [any] 
        _ [defineExportData]
    % 这里统计当前函数的行数，输出当前函数名，总的修改的函数名和变量名
    construct ORFD [repeat function_definition]
        _ [extractFuncDefintion each RFDOD]  
    construct ORFD1 [repeat function_definition]
        _ [extractFuncDefintionKP each RFDOD] 
    construct GlobalID [repeat id]  
        _ [extractGlobalID each RFDOD]  %[message "THE GLOBAL ID IS:"][print]
    export GlobalID 
    % 提取当前文件的所有函数名
    construct GlobalFuncName [repeat id]
        _ [extractFuncName each RFDOD] %[message "THE FUNCNAME ID IS:"][print][message "----------"]
    export GlobalFuncName
    % 种类统计当前修改的变量名
    construct NewRFD [repeat function_definition]
        _ [countDeclaration each RFDOD]
    % 这里对修改的statement 进行统计
    construct CState [repeat function_definition]
        _ [countChangeState each RFDOD]
    construct CProgram [program]
        P [countProgram]
    % 这里输出全局统计的结果
    construct _ [any]
        _ [outResult] % 这里输出变量计数结果
    by  
        P 
end function

% 这里提取出所有全局变变量
function extractGlobalID FDOD [function_definition_or_declaration]
    replace [repeat id]
        RI [repeat id]
    deconstruct FDOD
        Decl [declaration]
    construct Global [repeat declarator]
        _ [^ Decl]
    construct Id1 [repeat id]
        _ [^ Global]
    construct Local [repeat typedef_name]
        _ [^ Decl]
    construct Id2 [repeat id]
        _ [^ Local]
    construct AllId [repeat id]
        _ [. Id1][. Id2]
    by
        RI [. AllId]
end function

% 这里提取出所有函数名
function extractFuncName FDOD [function_definition_or_declaration]
    replace [repeat id]
        RI [repeat id]
    deconstruct FDOD
        FD [function_definition]
    deconstruct FD
        FH [function_header]
        FB [compound_statement]
    deconstruct FH
        ODS [opt declaration_specifiers]
        Decl [declarator]
        FDE [function_declarator_extension]
    deconstruct Decl
        ID [id] 
    by 
        RI [. ID]
end function
% 主函数到这里结束
% ----------------------------------------------------------------



% ----------------------------------------------------------------
% 这里第二种情况，直接对progrma进行统计
function countProgram
    replace [program]
        P [program]
    construct NewP [program]
        P [changeCompoundFor0] [changeCompoundFor1][changeCompoundFor2]
        [changeCompoundWhile]
        [countDoWhileChanged]
        [changeCompoundIf]
        [countSwitchChanged]
        [countChangedLogicalOperator]
        [changeCompoundIncrement]
        [changeSelfOperatorExpression]
        [changeSelfOperatorExpressionStatement]
        [changeConstats]
        [changeAddJunkCode]
        [conutDeleteCode] 
        [countExchangedCodeFunc] 
        [extractVarandFuncNameAndRename]
    by 
        P
end function

% ----------------------------------------------------------------
% 这里对修改的statement进行统计的主函数
% 这里是对各种修改操作进行统计的函数
% 对 while, do while 的度量只能按照整体来度量，也不好进行细化的度量，修改的时候
% 是按照整个statement 进行考虑的, 这里只能度量修改相应的语句会带来多少改变
function countChangeState FDOD [function_definition_or_declaration]
    replace [repeat function_definition]
        RFuncDefine [repeat function_definition]   
    deconstruct FDOD 
        FD [function_definition]
    deconstruct FD
        FuncHead [function_header] FuncBody [compound_statement]
    % 主要的调用函数是这个
    construct NewFuncBody [compound_statement]
        FuncBody [changeCompound2]
    by
        RFuncDefine
end function

function changeCompound2
    replace [compound_statement]
        CS [compound_statement]
    deconstruct CS 
    '{ 
       CSB [compound_statement_body] 
    '} OS [opt ';]  
    construct Output [compound_statement_body]
        CSB 
    construct NewCSB [compound_statement_body]
        CSB [changeCompoundStatementBody2]
    by 
        CS
end function

% 这个函数对函数主体进行修改操作
function changeCompoundStatementBody2
    replace  [compound_statement_body]
        CSB [compound_statement_body]
    by
        CSB 
end function 
% 全局变量的定义
% 这里变量的定义主要从三个方向来考虑
% 1. 对源码中本来的这种类型数据进行计数
% 2. 对源码中发生变化的代码进行计数
% 3. 对源码中发生的变化带来的新的数据进行计数
function defineExportData
    replace [any]
        A [any]
    % 0 整个函数代码行数
    export CodeLine [number]
        1 % 这里以 1 为开始是因为包含函数名那一行数据

    % 1 对变量名和函数名的修改就行统计
    export CountVarAndFuncName [number]
        0
    export CountVarAndFuncNameChanged [number]
        0
    % 2 这里对for 循环进行统计
    export CountFor[number]
        0
    export CountForChanged [number]
        0   
    export CountForNewer [number]
        0

    % 3 这里完成对 while 的统计操作
    export CountWhile[number]
        0
    export CountWhileChanged [number]
        0
    export CountWhileNewer [number]
        0

    % 4 对do while进行统计
    export CountDoWhile [number]
        0
    export CountChangedDoWhile [number]
        0
    export CountNewerDoWhile [number]
        0

    % 5 这里完成 if else if 到 if else 的统计
    export CountIfElseIf [number]
        0
    export CountIfElseIfChanged [number]
        0
    export CountIfElseIfNewer [number]
        0

    % 6 这里完成对if else 到if else if 的统计
    export CountIfElse [number]
        0
    export CountIfElseChanged [number]
        0
    export CountIfElseNewer [number]
        0

    % 7 这里对switch 语句进行统计
    export CountSwitch [number]
        0
    export CountChangedSwitch [number]
        0
    export CountNewSwitch [number]
        0

     % 8 对逻辑表达式的修改进行统计
    export CountLogicalOperator [number]
        0

    % 9 这里完成对自增自减操作的统计
    export CountSelfIncrement [number]
        0

    % 10 这里完成对增量操作进行统计
    export CountIncrementAssign [number]
        0

    % 11 这里完成对常量的统计
    export CountConstant [number]
        0

    % 12 这里对声明语句的修改进行统计
    export CountDecl[number] 
        0
    export CountChangedDecl [number]
        0
    export countNewDecl [number]
        0

    % 13 这里完成对插入垃圾代码进行统计
    export CountJunkCode [number]
        0
    export CountJunkCodeChanged [number]
        0
    export CountJunkCodeNewer [number]
        0 

    % 14 这里对交换代码进行统计
    export CountExchangedCode [number]
        0
    export CountExchangedCodeChanged [number]
        0
    export CountExchangedCodeNewer [number]
        0

    % 15 这里实现对代码删除进行统计
    export CountDeleteCode [number]
        0
    export CountDeleteCodeChanged [number]
        0
    export CountDeleteCodeNewer [number]
        0
    by 
        A
end function 

% 输出最后结果
function outResult
    replace [any]
        A [any]
    % 0 函数名和当前代码行数
    import FuncName [repeat id]
    import CodeLine [number]
    construct OutFuncName [repeat id]
        FuncName [putp "THE FUNCNAME IS:%"] %[message ""]
    construct OutCodeLine [number]
        CodeLine [putp "THE CODE OF LINE IS:%"] [message ""]

    % 1 对变量名和函数名的修改进行统计
    import CountVarAndFuncName [number]
    import CountVarAndFuncNameChanged [number]
    construct Op1 [number]
        1
    construct OutOp1 [number]
        Op1 [putp "THE OPERATOR IS:%"] 
    construct OutFileCountVarAndFuncName [number]
        CountVarAndFuncName [fput "../CountResult/1Rename.count"]
    construct Close1 [any]
        _ [fclose "../CountResult/1Rename.count"]
    construct OutCountVarAndFuncName [number]
        CountVarAndFuncName [- 1] [putp "THE RENAME COUNT IS:%"]
    construct OutCountVarAndFuncNameChanged [number]
        CountVarAndFuncNameChanged [- 1] [putp "THE CHANGE STATEMENT COUNT IS:%"] 
    construct OutCountVarAndFuncNameNewer [number]
        CountVarAndFuncNameChanged [- 1] [putp "THE NEWERS STATEMENT COUNT IS:%"][message ""]

    % 2 这里完成对for 循环的统计
    import CountFor [number]
    import CountForChanged [number]
    import CountForNewer [number]
    construct Op2 [number]
        Op1 [+ 1]
    construct OutOp2 [number]
        Op2 [putp "THE OPERATOR IS:%"] 
    construct OutFileCountFor [number]
        CountFor [fput "../CountResult/2For.count"]
    construct Close2 [any]
        _ [fclose "../CountResult/2For.count"]
    construct OutCountFor [number]
        CountFor [putp "THE FOR COUNT IS:%"]
    construct OutCountForChanged [number]
        CountFor [putp "THE CHANGE STATEMENT COUNT IS:%"]  % for 语句只改变了for 这一行代码
    construct OutCountForNewer [number]
        CountForNewer [putp "THE NEWERS STATEMENT COUNT IS:%"][message ""]
    
    % 3 这里完成对while循环的统计  % while 循环只会改变一条while 语句
    import CountWhile [number]
    import CountWhileChanged [number]
    import CountWhileNewer [number] 
    construct Op3 [number]
        Op2 [+ 1]
    construct OutOp3 [number]
        Op3 [putp "THE OPERATOR IS:%"] 
    construct OutFileCountWhile [number]
        CountWhile [fput "../CountResult/3While.count"]
    construct Close3 [any]
        _ [fclose  "../CountResult/3While.count"]
    construct OutCountWhile [number]
        CountWhile [putp "THE WHILE COUNT IS:%"]
    construct OutCountWhileChanged [number]
        CountWhile [putp "THE CHANGE STATEMENT COUNT IS:%"] 
    construct OutCountWhileNewer [number]
        CountWhile [putp "THE NEWERS STATEMENT COUNT IS:%"][message ""]
    
    % 4 对do while的修改进行统计
    import CountDoWhile [number]
    import CountChangedDoWhile [number] 
    import CountNewerDoWhile [number]
    construct Op4 [number]
        Op3 [+ 1]
    construct OutOp4 [number]
        Op4 [putp "THE OPERATOR IS:%"] 
    construct OutFileCountDoWhile [number]
        CountDoWhile [fput "../CountResult/4DoWhile.count"]
    construct Close4 [any]
        _ [fclose  "../CountResult/4DoWhile.count"]
    construct OutDoWhile[number]
        CountDoWhile [putp "THE DO WHILE COUNT IS:%"]
    construct OutChangedDoWhile [number]
        CountChangedDoWhile [putp "THE CHANGE STATEMENT COUNT IS:%"] 
    construct OutCountNewerDoWhile [number]
        CountNewerDoWhile [putp "THE NEWERS STATEMENT COUNT IS:%"][message ""]
    
     % 5 这里完成对if else if 到 if else  的统计
    import CountIfElseIf [number]
    import CountIfElseIfChanged [number]
    import CountIfElseIfNewer [number]
    construct Op5 [number]
        Op4 [+ 1]
    construct OutOp5 [number]
        Op5 [putp "THE OPERATOR IS:%"] 
    construct OutFileCountIfElseIF [number]
        CountIfElseIf [fput "../CountResult/5IfElseIf.count"]
    construct Close5 [any]
        _ [fclose  "../CountResult/5IfElseIf.count"]
    construct OutCountIfElseIf [number]
        CountIfElseIf [putp "THE IFELSEIF COUNT IS:%"]
    construct OutCountIfElseChanged [number]
        CountIfElseIfChanged [putp "THE CHANGE STATEMENT COUNT IS:%"] % if else if 的修改不会改变原来的代码
    construct OutCountIfElseIfNewer [number]
        CountIfElseIf [putp "THE NEWERS STATEMENT COUNT IS:%"][message ""] % if else if 的修改只会在ast 中引入一个新的ast节点

     % 6 这里完成对if else 到 if else if 的统计
    import CountIfElse [number]
    import CountIfElseChanged [number]
    import CountIfElseNewer [number]
    construct Op6 [number]
        Op5 [+ 1]
    construct OutOp6 [number]
        Op6 [putp "THE OPERATOR IS:%"] 
    construct OutFileCountIfElse [number]
        CountIfElse [fput "../CountResult/6IfElse.count"]
    construct Close6 [any]
        _ [fclose  "../CountResult/6IfElse.count"]
    construct OutIfElse [number]
        CountIfElse [putp "THE IFELSE COUNT IS:%"]
    construct OutIfElseChanged [number]  % if else 语句的修改只会减少ast 当中的一个node
        CountIfElse [putp "THE CHANGE STATEMENT COUNT IS:%"]
    construct OutIfElseNewer [number] % if else  语句的修改不会引入新的节点
        CountIfElseNewer [putp "THE NEWERS STATEMENT COUNT IS:%"][message ""]

    % 7 对 switch 的修改进行统计
    import CountSwitch [number]
    import CountChangedSwitch  [number]
    import CountNewSwitch [number]
    construct Op7 [number]
        Op6 [+ 1]
    construct OutOp7 [number]
        Op7 [putp "THE OPERATOR IS:%"] 
    construct OutFileCountSwitch [number]
        CountSwitch [fput "../CountResult/7Switch.count"]
    construct Close7 [any]
        _ [fclose  "../CountResult/7Switch.count"]
    construct OutCountSwitch [number]
        CountSwitch [putp "THE SWITCH COUNT IS:%"]
    construct OutCountChangedSwitch [number]
        CountChangedSwitch [putp "THE CHANGE STATEMENT COUNT IS:%"] 
    construct OutCountNewSwitch [number]
        CountNewSwitch [putp "THE NEWERS STATEMENT COUNT IS:%"][message ""]

    % 8 对逻辑表达式的修改进行统计
    import CountLogicalOperator [number]
    construct Op8 [number]
        Op7 [+ 1]
    construct OutOp8 [number]
        Op8 [putp "THE OPERATOR IS:%"] 
    construct OutFileCountOperator [number]
        CountLogicalOperator [fput "../CountResult/8Logic.count"] 
    construct Close8 [any]
        _ [fclose  "../CountResult/8Logic.count"]
    construct OutCountOperator [number]
        CountLogicalOperator [putp "THE LOGICAL OPERATOR IS:%"]
    construct OutCountOperatorChanged [number]
        CountLogicalOperator [putp "THE CHANGE STATEMENT COUNT IS:%"] 
    construct OutCountOperatorNewers [number]
        CountLogicalOperator [putp "THE NEWERS STATEMENT COUNT IS:%"][message ""]

    % 9 这里完成对自增自减操作的统计
    import CountSelfIncrement [number]
    construct Op9 [number]
        Op8 [+ 1]
    construct OutOp9 [number]
        Op9 [putp "THE OPERATOR IS:%"] 
    construct OutFileCountSelfOperator [number]
        CountSelfIncrement [fput "../CountResult/9SelfOperator.count"] 
    construct Close9 [any]
        _ [fclose  "../CountResult/9SelfOperator.count"]
    construct OutCountSelfIncrement [number]
        CountSelfIncrement [putp "THE SELFINCREMENT COUNT IS:%"]
    construct OutCountSelfIncrementChanged [number]
        CountSelfIncrement [putp "THE CHANGE STATEMENT COUNT IS:%"]
    construct OutCountSelfIncrementNewer [number]
        CountSelfIncrement [putp "THE NEWERS STATEMENT COUNT IS:%"][message ""]

    % 10 这里完成对增量操作的统计
    import CountIncrementAssign [number]
    construct Op10 [number]
        Op9 [+ 1]
    construct OutOp10 [number]
        Op10 [putp "THE OPERATOR IS:%"] 
    construct OutFileCountIncrementAssign [number]
        CountIncrementAssign [fput "../CountResult/10IncrementAssign.count"] 
    construct Close10 [any]
        _ [fclose  "../CountResult/10IncrementAssign.count"]
    construct OutCountIncrementAssign [number]
        CountIncrementAssign [putp "THE INCREMENTASSIGN COUNT IS:%"]
    construct OutCountIncreAssignChanged [number]
        CountIncrementAssign [putp "THE CHANGE STATEMENT COUNT IS:%"] 
    construct OutCountIncreAssignNewer [number]
        CountIncrementAssign [putp "THE NEWERS STATEMENT COUNT IS:%"][message ""]
   
    % 11 这里完成对常量的统计操作
    import CountConstant [number]
    construct Op11 [number]
        Op10 [+ 1]
    construct OutOp11 [number]
        Op11 [putp "THE OPERATOR IS:%"] 
    construct OutFileCountConstant [number]
        CountConstant [fput "../CountResult/11Constant.count"] 
    construct Close11 [any]
        _ [fclose  "../CountResult/11Constant.count"]
    construct OutCountConstant [number]
        CountConstant [putp "THE CONSTANT IS:%"]
    construct OutCountConstantChanged [number]
        CountConstant [putp "THE CHANGE STATEMENT COUNT IS:%"]
    construct OutCountConstantNewer [number]
        CountConstant [putp "THE NEWERS STATEMENT COUNT IS:%"][message ""]  

    % 12 对声明语句进行统计
    import CountDecl [number]
    import CountChangedDecl [number]
    import countNewDecl [number]
    construct Op12 [number]
        Op11 [+ 1]
    construct OutOp12 [number]
        Op12 [putp "THE OPERATOR IS:%"] 
    construct OutFileCountChangedDecl [number]
        CountChangedDecl [fput "../CountResult/12Define.count"] 
    construct Close12 [any]
        _ [fclose  "../CountResult/12Define.count"]
    construct OutCountDecl [number]
        CountDecl [putp "THE DECL COUNT IS:%"]
    construct OutCountChangedDecl [number]
        CountChangedDecl [putp "THE CHANGE STATEMENT COUNT IS:%"]
    construct OutCountDeclChanged [number]
        countNewDecl [putp "THE NEWERS STATEMENT COUNT IS:%"][message ""]
   
    % 13 这里完成对垃圾代码的统计操作，加入垃圾代码不会改变原来的代码，只会引入新的代码
    import CountJunkCode [number]
    import CountJunkCodeChanged [number]
    import CountJunkCodeNewer [number]
    construct Op13 [number]
        Op12 [+ 1]
    construct OutOp13 [number]
        Op13 [putp "THE OPERATOR IS:%"] 
    construct OutFileCountJunkCode [number]
        CountJunkCode [fput "../CountResult/13JunkCode.count"] 
    construct Close13 [any]
        _ [fclose  "../CountResult/13JunkCode.count"]
    construct OutCountJunkCode [number]
        CountJunkCode [putp "THE JUNKCODE COUNT IS:%"]
    construct OutCountJunkCodeChanged [number]
        CountJunkCodeChanged [putp "THE CHANGE STATEMENT COUNT IS:%"]
    construct OutCountJunkCodeNewer [number]
        CountJunkCodeNewer [putp "THE NEWERS STATEMENT COUNT IS:%"][message ""]

    % 14 这里完成了对交换代码顺序的统计
    import CountExchangedCode [number]
    import CountExchangedCodeChanged [number]
    import CountExchangedCodeNewer [number]
    construct Op14 [number]
        Op13 [+ 1]
    construct OutOp14 [number]
        Op14 [putp "THE OPERATOR IS:%"] 
    construct OutFileCountExchangeCode [number]
        CountExchangedCodeChanged [fput "../CountResult/14Exchange.count"] 
    construct Close14 [any]
        _ [fclose  "../CountResult/14Exchange.count"]
    construct OutCountExchangedCode [number]
        CodeLine [putp "THE EXCHANGE CODE COUNT IS:%"] % 这里对总的语句进行计数操作
    construct OutCountExchangedCodeChanged [number]
        CountExchangedCodeChanged [putp "THE CHANGE STATEMENT COUNT IS:%"]
    construct OutCountExchangedCodeNewer [number]
        CountExchangedCodeNewer [putp "THE NEWERS STATEMENT COUNT IS:%"][message ""]
        
    % 15 这里完成对代码删除的统计,这里的代码删除只考虑了对printf 这种不会影响代码语义的代码进行删除
    import CountDeleteCode [number]
    import CountDeleteCodeChanged [number]
    import CountDeleteCodeNewer [number]  
    construct Op15 [number]
        Op14 [+ 1]
    construct OutOp15 [number]
        Op15 [putp "THE OPERATOR IS:%"]  
    construct OutFileCountDelete [number]
        CountDeleteCodeChanged [fput "../CountResult/15Delete.count"] 
    construct Close15 [any]
        _ [fclose  "../CountResult/15Delete.count"]
    construct OutCountDeleteCode [number]
        CodeLine [putp "THE DELETE CODE COUNT IS:%"]
    construct OutCountDeleteCodeChanged [number]
        CountDeleteCodeChanged [putp "THE CHANGE STATEMENT COUNT IS:%"]
    construct OutCountDeleteCodeNewer [number]
        CountDeleteCodeNewer [putp "THE NEWERS STATEMENT COUNT IS:%"][message ""]
    by 
        A
end function 
% 对statement 修改进行统计的主函数完成
%--------------------------------------------------------------


%-------------------------------------------------------------
%这里对变量名进行统计
function extractVarandFuncNameAndRename
    replace [program]
      P [program]
    % 提取全局定义的变量 , 变量的提取情况1，变量是declarator
    construct AllVarGlobal [repeat declarator]
      _ [^ P] %[putp "test:"]
    construct PureAllVarGlobal [repeat id]
      _ [^ AllVarGlobal]% [message "THE PUREALLVARGLOBAL"][print]
    
    % 提取定义的局部变量， 变量的提取情况2,变量是simple_type_name
    construct AllVarLocal [repeat typedef_name]
      _ [^ P] 
    construct PureAllVarLocal [repeat id]
      _ [^ AllVarLocal] 
    
    % 全部变变量
    construct AllVar [repeat id]
    _[. PureAllVarGlobal] [. PureAllVarLocal] [sortId]  

    % 变量去重操作，获取独一无二的变量
    construct UniqueAllVar [repeat id]
      AllVar [select 1 1] [deduplication AllVar]  %[message "ALL UNIQUE ID IS:"][print]
    construct CountChangedName[number]
        _[length UniqueAllVar]
    export CountVarAndFuncName [number]
        CountChangedName
    by 
      P   
end function
%-------------------------------------------------------------

% -------------------------------------------------------------
% 这里实现对删除的代码进行统计操作
function conutDeleteCode
    replace [program]
        CSB [program]
    construct _ [program]
        CSB [deletePrintfStatement] %[putp "delete code:"]
    by 
        CSB
end function

% 这里删除部分不影响原始代码逻辑的代码，这里只实现了对printf 代码的删除
function deletePrintfStatement 
    replace [program] 
        CSB [program]
    % 第一种情况删除的代码在大括里面{},删除的在sub_statement的compound_statement里面
    construct AllCSB [repeat compound_statement_body]
        _ [^ CSB]
    construct NAllCSB [repeat compound_statement_body]
        _ [deletePrint each AllCSB]
    construct NCSB [program]
         CSB
    % 第二种情况删除的时候代码在sub_statement的 statement里面
    construct ALLSubStatement [repeat sub_statement]
        _ [^ CSB]
    construct ALLStatement [repeat statement]
        _ [fromSubStatementExtractStatement each ALLSubStatement] [message ""]
    construct NAllStatement [repeat statement]
        _ [deleteStatementPrintf each ALLStatement]
    by 
        CSB 
end function

% 这里从sub_statement 里面提取出相应的statement语句
function fromSubStatementExtractStatement SubStatement [sub_statement]
    replace [repeat statement]
        RSt [repeat statement]
    deconstruct SubStatement
        St [statement]
    by
        RSt [. St]
end function

% 这里删除Sub_statement, Statement里面的printf语句
function deleteStatementPrintf St [statement]
    replace [repeat statement]
        RST [repeat statement]
    construct NSt [statement]
        St [testStatementPrint]
    by  
        RST [. NSt]
end function

% 判断是不是printf 如果是的话则替换成 ;
function testStatementPrint 
    replace [statement]
        St [statement]
    deconstruct St 
        USt [unlabeled_statement]
    deconstruct USt
        SimpleStatement [simple_statement]
        ';
    deconstruct SimpleStatement
        PrimaryExpression [primary_expression]
        RPostfisExtension [repeat postfix_extension]
    deconstruct PrimaryExpression
        'printf
    construct RAE [repeat argument_expression]
        _ [^ RPostfisExtension] 
    construct LenRAE [number]
        _ [length RAE] 
    where 
        LenRAE [= 1]
    import CountDeleteCodeChanged [number]
    export CountDeleteCodeChanged 
        CountDeleteCodeChanged [+ 1] 
    by
        ';
end function

% 这里删除每个compound_statment中的printf 语句
function deletePrint CSB [compound_statement_body]
    replace [repeat compound_statement_body]
        RCSB [repeat compound_statement_body]
    deconstruct CSB 
        RBI [repeat block_item]  
    construct OutCSB [compound_statement_body]
        CSB 
    construct AllPrintf [repeat block_item]
        _ [isPrintfDelete each RBI] %[message "THE ALL PRINTF IS:"][print] [message ""]
    construct NAllPrintf [repeat block_item]
        AllPrintf [isStatementPrintf each RBI] [filterPrintfWithParam] %[message "THE ALL PRING IS:"][print ]
    export NAllPrintf
    construct NRBI [repeat block_item]
        _ [isdeleteBlockItem each RBI]
    construct NCSB [compound_statement_body]
        NRBI
    by 
        RCSB [. NCSB]
end function

% 这里过滤掉有参数的printf 语句
function filterPrintfWithParam 
    replace [repeat block_item]
        AllPrintf [repeat block_item]
    construct NewPrintf [repeat block_item]
        _ [filterPrintf each AllPrintf]
    by 
        NewPrintf
end function

% 筛选出printf语句
function filterPrintf BI [block_item]
    replace [repeat block_item]
        RBI [repeat block_item]
    deconstruct BI 
        DS [declaration]
    deconstruct DS 
        'printf '( string [stringlit] ') ';
    %deconstruct BI 
    %    'printf '( stinrg [stringlit] ')
    construct outSting [stringlit]
        string 
    by 
        RBI [. BI]
end function

% 这里判断当前statement 是不是printf 语句，如果是的话则加入
function isStatementPrintf BI [block_item]
    replace [repeat block_item]
        RBI [repeat block_item]
    deconstruct BI
        St [statement]
    deconstruct St 
        USt [unlabeled_statement]
    deconstruct USt
        SimpleStatement [simple_statement]
        ';
    deconstruct SimpleStatement
        PrimaryExpression [primary_expression]
        RPostfisExtension [repeat postfix_extension]
    deconstruct PrimaryExpression
        'printf
    by 
        RBI [. BI]
end function 

% 这里判断block_item 是不是printf 语句，如果是的话则删除
function isdeleteBlockItem DeleteBI [block_item]
    replace [repeat block_item]
        RBI [repeat block_item]
    import NAllPrintf [repeat block_item]
    construct IsPrintf [number]
        0
    export DeleteBI
    construct NIsPrintf [number]
        IsPrintf [isBlockItemEqualPrintf each NAllPrintf]
    where
        NIsPrintf [= 0]
    by
        RBI [. DeleteBI]
end function

% 判断当前block_item 是否等于Printf语句
function isBlockItemEqualPrintf BI [block_item]
    replace [number]
        N [number]
    import DeleteBI [block_item]
    where 
        DeleteBI [= BI]
    import CountDeleteCodeChanged [number]
    export CountDeleteCodeChanged 
        CountDeleteCodeChanged [+ 1] 
    by 
        N [+ 1]    
end function

% 如果不是判断是不是printf语句
function isPrintfDelete  BI [block_item]
    replace [repeat block_item]
        RBI [repeat block_item]
    deconstruct BI 
        Decl [declaration]
    export Printf [id]
        'printf
    construct AllDeclID [repeat id]
        _ [^ Decl]
    construct NPrint [repeat id]
        _ [IsContainPrint each AllDeclID]
    construct LenNPrint [number]
        _ [length NPrint]
    where
        LenNPrint [> 0]
    by 
        RBI [. BI]
end function

% 对代码删除的统计操作完成
% -------------------------------------------------------------




% -------------------------------------------------------------
% 这里实现对交换代码顺序的统计操作
function countExchangedCodeFunc
    replace [program]
        CSB [program]
    construct RCSB [repeat compound_statement_body]
        _ [^ CSB] %[putp "test:"]
    construct NRCSB [repeat compound_statement_body]
        _ [exchangeCompoundCode each RCSB]
    by
        CSB
end function

% 这里是实现代码交换的主函数
% 这里实现交换代码的统计操作
function exchangeCompoundCode CSB [compound_statement_body]
    %skipping [declaration]
    replace  [repeat compound_statement_body]
        RepeatCSB [repeat compound_statement_body]
    deconstruct CSB
        Dos [repeat block_item]
    export Dos
    construct OutDos [repeat block_item]
        Dos %[message "----------"]
    % 这里构造排序的declaration
    construct RDecl [repeat declaration]
        _ [extractBlockItemDecl each Dos] %[message "THE DECLARATION IS:"][print]
    construct OutRDecl [repeat declaration]
        RDecl %[message "----------"]
   % 这里交换代码声明语句的顺序。
    construct NRDecl [repeat declaration]
        _ [changeDeclarationOrder2 RDecl]
    construct OutRDecl1 [repeat declaration]
        RDecl %[message "----------"]
    construct DeclBlockItem [repeat block_item]
        _ [fromDeclCreateBlockItem each NRDecl]
    % 这里构造排序的statement
    construct RStatement [repeat statement]
         _ [extractStatement each Dos] 
    construct NRstatement [repeat statement] % 这里实现当前compound_statement 里面的statement的交换操作
         _ [createNewOrderStatement RStatement] 
    construct StateBlockItem [repeat block_item]  % 这里实现statement到block_item之间的转换操作
         _ [formStateCreateBlockItem each NRstatement]
    % 这里对printf 这种语句进行排序，需要对printf进行单独考虑，Printf 是一种特殊情况，printf 属于declaration语句
    construct PrintDecl [repeat declaration]
        _ [extractBlockItemPrintDecl each Dos]
    construct PrintfStatement [repeat block_item]
        _ [dealPrintfDeclaration PrintDecl] 
    % 这里判断PrintStatement 应该插入当前StateBlockItem的位置，StateBlockItem里面可能有return 语句
    construct NStatement [repeat block_item]
        StateBlockItem [mergeStatementAndPrintStatement PrintfStatement]
    % 这里创建新的block_item ， 语句声明在前，其它语句在后
    construct NDos [repeat block_item]
        _ [. DeclBlockItem] [. NStatement]   %[. StateBlockItem] [. PrintfStatement]
    construct OutRDecl2 [repeat declaration]
        RDecl [message "----------"]
    by 
        RepeatCSB 
end function
% 对代码进行主要交换的函数到这里结束
% ----------------------------------------------------------------

% ----------------------------------------------------------------
% 这里交换代码声明语句，另外一种实现方式，和交换statment 的实现方式差不多
% 考虑两个declaration 之间有没有依赖关系，如果没有依赖关系则可以交换两者的顺序
function changeDeclarationOrder2 RDecls [repeat declaration]
    replace [repeat declaration]
        RDecl [repeat declaration]
    construct out [repeat declaration]
        RDecls %[putp "test:"]
    construct NRdecl [repeat declaration]
        _ [selectDeclaration1 each RDecls] %[putp "test"]
    construct NNRdecl [repeat declaration]
        _ [reverseOrderDecl each NRdecl] 
    by 
        NNRdecl
end function

% 这里实现declaration 序列的逆序操作
function reverseOrderDecl Decl [declaration]
    replace [repeat declaration]
        RDecl [repeat declaration]
    construct newDecl [repeat declaration]
         _ [. Decl][. RDecl] [message "test"]

    by 
       newDecl
end function

% 这里实现将declaration 插入当前语句合适的位置
function selectDeclaration1 Decl [declaration]
    replace [repeat declaration]
        RDecl [repeat declaration]
    % 这里判断当前Decl 应该插入Rdecl 哪个位置
    construct  DeclIndex [number]
        0
    export DeclGlobalAffected [number]
        0
    export GlobalDecl [declaration]
        Decl
    % 这里获取当前index的索引
    construct NewIndex [number]
        DeclIndex [locateAffectedDeclaration each RDecl] 
    % 这里设置全局索引
    construct _ [number]
        NewIndex [setCountExchangedCodeChanged] 
    construct RDeclBefore [repeat declaration]
        RDecl [select 1 NewIndex] 
    construct  NIndexAfter [number]
        NewIndex [+ 1]
    construct RDeclAfter [repeat declaration]
        RDecl [select NIndexAfter 9999] 
    
    construct NewRDecl1 [repeat declaration]
        RDeclBefore [. Decl]
    construct NewRDecl2 [repeat declaration]
        NewRDecl1 [. RDeclAfter]  
    by
        NewRDecl2 
end function


% 这里定位当前decl 应该插入的位置，进行插入的定位操作
function locateAffectedDeclaration Decl [declaration]
    replace [number]
        Index [number]
    import DeclGlobalAffected [number]
    where
        DeclGlobalAffected [= 0] 
    import GlobalDecl [declaration]
    % 这里判断两个id 之间是否存在交集
    construct GlobalDeclId [repeat id]
        _ [^ GlobalDecl] 
     construct LowerId [repeat upper_macro_name]
        _ [^ GlobalDecl] 
    construct UMNId [repeat id]
        GlobalDeclId [fromUMNtoId each LowerId]
    construct DeclId [repeat id]
        _ [^ Decl]
    construct DeclIdLower [repeat upper_macro_name]
        _ [^ Decl] 
    construct NewDeclId [repeat id]
        DeclId [fromUMNtoId each DeclIdLower] 
    % 这里获取两个decl 之间的交集
    export GlobalDeclId
        UMNId
    construct IntersectionId [repeat id]
        _ [intersectionDeclId each NewDeclId]  
    construct LenIntersectionId [number]
        _ [length IntersectionId] [setDeclGlobalAffected] 
    import DeclGlobalAffected 
    where
        DeclGlobalAffected [= 0] 
    by 
        Index [+ 1]
end function

% 这里从upper_marcro_name 到id 的变换
function fromUMNtoId UMN[upper_macro_name]
    replace [repeat id]
        RID [repeat id]
    construct NIdChar [charlit]
        _ [quote UMN] [putp "test:"]
    construct NewId [id]
        _ [parse NIdChar]
    by 
        RID [. NewId]
end function


% 这里判断两个者之间是否存在交集，如果存在交集则停止先后搜索，找到对应的位置
function setDeclGlobalAffected
    replace [number]
        N [number]
    where 
        N [> 0]
    export DeclGlobalAffected [number]
        1
    by 
        N
end function

% 这里判断两个id 之间的交集
function intersectionDeclId ID [id]
    replace [repeat id]
        RID [repeat id] 
    import GlobalDeclId [repeat id]
    where 
        GlobalDeclId [? judgeIdisDeal ID]
    by
        RID [. ID]
end function
% 这里完成对声明语句之间交换顺序的操作
% ----------------------------------------------------------------


% ----------------------------------------------------------------
% 这里处理printf这种特殊情况
% 这里提取出block_item 里面的printf 语句
function extractBlockItemPrintDecl BI [block_item]
    replace [repeat declaration]
        RDecl [repeat declaration]
    deconstruct BI
        Decl [declaration]
    by 
        RDecl [. Decl]
end function

% 这里实现statementBlockItem 和 PrintfStatement 的合并操作,判断最后一个语句是否是return 语句来进行相应的插入操作
function mergeStatementAndPrintStatement PrintfStatement [repeat block_item]
    replace [repeat block_item]
        RBI [repeat block_item]
    construct LenRBI [number]
        _ [length RBI]
    construct outPrint [repeat block_item]
        PrintfStatement %[message "THE PRINTF STATEMENT IS:"] 
    construct OutRBI [repeat block_item]
        RBI %[message "THE RBI STATEMENT IS:"]
    construct Index [number]
        LenRBI [setLastIndex RBI] %[putp "THE INEDX IS:%"]
    construct BeforeBI [repeat block_item]
        RBI [select 1 Index]
    construct LastIndex [number]
        Index [+ 1] %[putp "THE LAST INDEX IS:%"]
    construct LastBlockItem [repeat block_item]
        RBI [select LastIndex 9999] %[putp "THE LAST STATEMENT IS:%"] [message "--------------"]
    construct NRBI [repeat block_item]
        _ [. BeforeBI] [. PrintfStatement] [. LastBlockItem] [message "test"]
    by 
        NRBI
end function

% 根据当前statement来判断当前printf 应该插入的索引
function setLastIndex RBI [repeat block_item]
    replace [number]    
        Index [number]
    construct LastIndex [number]
        Index [- 1]
    construct LastBI [repeat block_item]
        RBI [select Index 9999] %[putp "THE LAST STATEMENT:%"]
    deconstruct LastBI
        LastBlockItem [block_item]
    construct ReturnSt [repeat return_statement]  % 这里判断最后一个语句是否包含return 语句
        _ [^ LastBlockItem]
    construct LenReturnSt [number]
        _ [length ReturnSt]
    where 
        LenReturnSt [> 0]
    by 
        LastIndex 
end function    
    
% 这里处理printf 这种特殊情况
function dealPrintfDeclaration RDecl [repeat declaration]
    replace [repeat block_item]
        RBI [repeat block_item]
    % 这里提取出里面的printf 语句
    construct Printf [repeat declaration]
        _ [extractPrintfDecl each RDecl]% [message "THE PRINTF DECL IS:"][print][message "----------"]
    construct NBI [repeat block_item]
        _ [fromDeclCreateBlockItem  each Printf]
    import  Dos [repeat block_item]
    construct _ [any]
        _ [isPrintfChanged Dos Printf]   % 这里判断printf 语句到底有没有，有没有交换代码位置
    by
        RBI [. NBI]
end function 

% 这里判断printf 的位置到底有没有改变
function isPrintfChanged RBI [repeat block_item] RPrintf [repeat declaration]
    replace [any]
        A [any]
    construct LenPrintf [number]
        _ [length RPrintf]
    where 
        LenPrintf [= 1]
    deconstruct RPrintf
        Print [declaration]
    construct PBI [block_item]
        Print
    construct PrintExchangeOrNot [number]
        0
    construct LenRBI [number]
        _ [length RBI] %[putp "THE LENGTH IS:%"]
    construct LBI [repeat block_item]
        RBI [select LenRBI 9999]
    deconstruct LBI
        BI [block_item]
    construct OutPrintf [repeat declaration]
        RPrintf %[message "THE PRINTF DECL IS:"][print][message "----------"]
    construct IsLastCode [number] % 判断最后一条语句是不是Printf，是的话说明Printf 没有交换位置
        PrintExchangeOrNot [isPrintfLastCode BI PBI]
    construct IsRorderSecond [number]
        IsLastCode [isReorderSecondIsPrint RBI PBI] %[putp "THE PRINTF IS:%"][message ""]
    import CountExchangedCodeChanged [number]
    export CountExchangedCodeChanged
        CountExchangedCodeChanged [- IsRorderSecond]
    by 
        A
end function

% 判断是不是最后一条语句是return 语句，导数第二条语句是printf的情况下
function isReorderSecondIsPrint RBI [repeat block_item] PBI [block_item]
    replace [number]
        N [number]
    construct LenRBI [number]
        _ [length RBI]
    construct LBI [repeat block_item]
        RBI [select LenRBI 9999]
    deconstruct LBI
        BI [block_item]
    deconstruct BI 
        St [statement]
    deconstruct St
        SS [simple_statement] ';
    deconstruct SS
        RS [return_statement]
    construct LenSub1 [number]
        LenRBI [- 1]
    construct LSBI [repeat block_item]
        RBI [select LenSub1 LenSub1]
    deconstruct LSBI
        SBI [block_item]
    by 
        N [isPrintfLastCode SBI PBI]
end function
% 判断最后一条语句是不是Printf,是的话说明没有交换printf的位置
function isPrintfLastCode BI [block_item] PBI [block_item]
    replace [number]
        N [number]
    where 
        BI [= PBI]
    by 
        N [+ 1]
end function
    
% 这里提取出declaration 语句
function extractPrintfDecl Decl [declaration]
    replace [repeat declaration]
        RDecl [repeat declaration]
    construct AllDeclID [repeat id]
        _ [^ Decl]
    export Printf [id]
        'printf
    construct NPrint [repeat id]
        _ [IsContainPrint each AllDeclID]
    construct LenNPrint [number]
        _ [length NPrint]
    where
        LenNPrint [> 0]
    construct OutDecl [declaration]
        Decl %[putp "THE DECL IS:%"]
    import CountExchangedCodeChanged [number]   %这里提取出的printf语句有进行排序操作，所以需要计数
    export CountExchangedCodeChanged
        CountExchangedCodeChanged [+ 1]
    construct outTest [declaration]
        Decl [message "test"]
    by
        _ [. Decl] [. RDecl]
end function

% 判断当前的id 是否包含printf 语句
function IsContainPrint ID [id]
    replace [repeat id]
        RID [repeat id]
    import Printf [id]
    where 
        Printf [= ID]
    by 
        RID [. ID]
end function

% printf 这种特殊情况的处理到这里结束
% ----------------------------------------------------------------

% ----------------------------------------------------------------
% 这里对statement进行处理
% 这里这里实现对statement交换顺序的的操作
function createNewOrderStatement RStatement [repeat statement]
    replace [repeat statement]
        RS [repeat statement]
    construct NRS [repeat statement]
        _ [selectStatement each RStatement] [message "final"] % 这里将statement 插入适当的位置
    construct RNRS [repeat statement]
        _ [reverseOrderStatement each NRS] %这里是逆序加入的，所以这里将statement逆序排列
    by
        RNRS
end function  

% 这个函数将statement 加入到NRS 适当的位置
function selectStatement St [statement]
    replace [repeat statement]
        RSt [repeat statement]
    
    % return 语句需要特殊处理，return 语句不需要排序操作
    export ReturnSt [number]
        0
    construct RSt2 [repeat statement]  % 这里实现对return 的重新排序操作
        _ [createReturnStatement RSt St]  
    % break 语句需要特殊处理，这里实现对break语句进行排序操作
    export BreakSt [number]
        0
    construct RSt3 [repeat statement]
        _ [createBreakStatement RSt St]
    % continue 语句需要特殊处理，这里实现对continue语句的排序操作
    export ContinueSt [number]
        0
    construct RSt4 [repeat statement]
        _ [createContinueStatement RSt St] 
    % 这里实现对switch 里面的 case,default 语句进行处理，代码中有这种语句的时候排序的时候应该考虑
    export LabelSt [number]
        0
    construct Rst5 [repeat statement]
        _ [createSwitchLabelStatement RSt St] %[message "test"]
    % 这里实现对上面特殊情况以外的其它语句的操作
    construct RSt1 [repeat statement]
        _ [createOrdinalStatement RSt St] [message "test"]
    construct NewRSt [repeat statement]
        _ [. RSt1] [. RSt4][. RSt3] [. RSt2] [. Rst5]
    construct OutSt [repeat statement]
        NewRSt [message "THE STATEMENT IS:"] [print]
    by
        NewRSt 
end function 

% 这里构造有switch,case,default 这种statement
function createSwitchLabelStatement RSt [repeat statement] St [statement]
    replace [repeat statement]
        RSt1 [repeat statement]
    deconstruct St 
        RL [repeat label]
        US [unlabeled_statement]
    construct LenRL [number]
        _ [length RL]
    where 
        LenRL [> 0]
    export LabelSt [number]
        1
    construct NewRSt [repeat statement]
        _  [. St][. RSt]
    construct OutRst [repeat statement]
        St [message "----------"] 
    by 
        NewRSt
end function

% 这里构造有continue 这种statement
function createContinueStatement RSt [repeat statement] St [statement]
    replace [repeat statement]
        RSt1 [repeat statement]
    deconstruct St 
        SS [simple_statement] ';
    deconstruct SS
        BS [continue_statement]
    export ContinueSt [number]
        1
    construct NewRSt [repeat statement]
        _  [. St][. RSt]
    construct OutRst [repeat statement]
        NewRSt [message "----------"] 
    by 
        NewRSt
end function

% 这里构造有 break 这种statement
function createBreakStatement RSt [repeat statement] St [statement]
    replace [repeat statement]
        RSt1 [repeat statement]
    deconstruct St 
        SS [simple_statement] ';
    deconstruct SS
        BS [break_statement]
    export BreakSt [number]
        1
    construct NewRSt [repeat statement]
        _  [. St][. RSt]
    construct OutRst [repeat statement]
        NewRSt [message "----------"] 
    by 
        NewRSt
end function

% 这里构造有return 这种statement
function createReturnStatement RSt [repeat statement] St [statement]
    replace [repeat statement]
        RSt2 [repeat statement]
    deconstruct St
        SS [simple_statement] ';
    deconstruct SS
        RS [return_statement]
    export ReturnSt [number]
        1
    construct NewRSt [repeat statement]
        _ [. St][. RSt]
    construct OutRst [repeat statement]
        NewRSt [message "----------"] 
    by 
        NewRSt
end function

% 这里处理没有return,break,continue 的这种statement的重新排序操作
function createOrdinalStatement RSt [repeat statement] St [statement]
    % 不是return 语句
    import ReturnSt [number]
    where
        ReturnSt [= 0]  
    % 不是break语句
    import BreakSt [number]
    where
        BreakSt [= 0] 
    % 不是continue 语句
    import ContinueSt [number]
    where
        ContinueSt [= 0]
    % 不是switch ,case ,default 语句
    import LabelSt [number]
    where
        LabelSt [= 0]
    replace [repeat statement]
        RSt1 [repeat statement]
     % 这里判断当前St 应该插入已经处理的repeat statement 的哪个位置
    construct Index [number]
        0
    export GlobalAffected [number] % 这里用来判断全局受到影响的范围
        0
    export St
    construct NewIndex [number]  % 这里获取当前应该插入的statment对应的索引
        Index [locateTheAffectedStatement each RSt] %[message "THE INDEX IS:"]%[print]
    construct _  [number]
        NewIndex [setCountExchangedCodeChanged]
    construct RStBefore [repeat statement]
        RSt [select 1 NewIndex] [putp "before:"]
    construct NewIndexPlusOne [number]
        NewIndex [+ 1] %[putp 'num:']
    construct OutNum [number]
        NewIndexPlusOne [putp "num:"]
    construct outMiddle [statement]
        St [message "middle:"]
    construct RStAfter [repeat statement]
        RSt [select NewIndexPlusOne 99999]  [putp "after:"]
    construct NewRSt [repeat statement] 
        RStBefore  [. St] [message "test"]
    construct NewRSt1 [repeat statement]
        NewRSt [. RStAfter]
    construct OutRst [repeat statement]
        NewRSt1 [message "----------"] 
    by
        NewRSt1
end function



% 这里实现对statement的变化进行计数操作
function setCountExchangedCodeChanged 
    replace [number]
        Index [number]
    where 
        Index [> 0]
    import CountExchangedCodeChanged[number]
    export CountExchangedCodeChanged
        CountExchangedCodeChanged [+ 1]
    by 
        Index
end function

% 这里判断staement 应该插入的位置
function locateTheAffectedStatement RSt [statement]
    replace [number]
        Index [number]
    % 这里判断当前语句是不是包含return ,break,continue等会改变程序控制流的语句，如果包含的话则不应该继续搜索
    construct ReturenBreakContiue [statement]
        RSt [judgeIsReturnBreakContinue]
    % 这里判断当前语句是不是switch,case,default 等不需要改变程序语句的指令
    construct SwitchCaseDefault [statement]
        RSt [judegeIsSwitchCaseDefault]
    import GlobalAffected [number]
    where 
        GlobalAffected [= 0]
    import St [statement]
    % 判断两个statement 之间的id 是否存在交集
    construct StId [repeat id]  % 这里获取当前statement 对应的id ,需要修改的是这里，这里判断当前statement 是否是函数调用
        _ [^ St]
    construct StIntFuncName [repeat id] % 这里获取和函数名之间存在的交集
        _ [intersectionId2 each StId]
    construct NNStId [repeat id]   % 这里是为了设置全局变量，如果当前statement里面存在全局变量则需要把全局变量加入当前statemnt
        StId [setGlobalIDInStatement StIntFuncName]
    %construct NStId [repeat id]   % 这里获取提取到的id 和 声明语句id 的交集
    %    _ [intersectionId each StId] 
    construct RStId [repeat id]
        _ [^ RSt]
    construct RStIntFuncName [repeat id] % 这里获取和函数名之间存在的交集
        _ [intersectionId2 each RStId]
    construct NNRStId [repeat id]
        RStId [setGlobalIDInStatement RStIntFuncName]
    %construct NRStId [repeat id]
    %    _ [intersectionId each RStId] 
    %export NRStId [repeat id]
    export NNRStId
    construct IntersectionIds [repeat id] % 这里获取两个statement id 的交集
        %_ [intersectionId1 each NStId] %[message "THE INTERSECTION IS:"] [print] [message ""]
        _ [intersectionId1 each NNStId]
    construct LenIntersectionIds [number]
        _ [length IntersectionIds] [setGlobalAffected]
    import GlobalAffected
    where 
        GlobalAffected [= 0]
     % 这里输出
    construct OutSt [statement]
        St 
    construct OutRst [statement]
        RSt 
    construct OutInter [repeat id]
        IntersectionIds %[message "THE INTERSECTION IS:"] [print] [message ""]
    by
        Index [+ 1]
end function

% 这里判断是不是Switch,case,default等语句
function judegeIsSwitchCaseDefault
    replace [statement]
        St [statement]
    deconstruct St 
        RL [repeat label]
        US [unlabeled_statement]
    construct LenRL [number]
        _ [length RL]
    where 
        LenRL [> 0]    
    import GlobalAffected [number]
    export GlobalAffected
        GlobalAffected [+ 1]
    by 
        St
end function 

% 这里判断是不是包含return,break,continue 等语句，如果包含的话则应该停止向后搜索
function judgeIsReturnBreakContinue
    replace [statement]
        St [statement]
    construct RJudeSt [repeat jump_statement]
        _ [^ St]
    construct LenRjudgeSt [number]
        _ [length RJudeSt]
    where 
        LenRjudgeSt [> 0]
    import GlobalAffected [number]
    export GlobalAffected
        GlobalAffected [+ 1]
    by  
        St
end function

% 这里如果存在交集的话则设置全局变量，停止向后搜索
function setGlobalAffected
    replace [number]
        N [number]
    where
        N [> 0]
    export GlobalAffected [number]
        1
    by
        N 
end function  

% 这里判断是否和函数名存在交集，如果存在则将全局变量id 加入当前statement 的id 里面
function setGlobalIDInStatement RID [repeat id]
    replace [repeat id]
        RIDs [repeat id]
    construct LenRID [number]
        _ [length RID]
    where 
        LenRID [> 0]
    import GlobalID[repeat id]
    by
        RIDs [. GlobalID]
end function
        
% 这里获取当前statment id 和函数名的交集，如果存在交集，则需要把全局变量加入当前statement的id中
function intersectionId2 ID [id]
    replace [repeat id]
        RID [repeat id]
    import GlobalFuncName [repeat id]
    where
        GlobalFuncName [? judgeIdisDeal ID]
    by 
        RID [. ID]
end function 

% 这里获取declaration 语句和 statement 语句id 的交集，因为有时候statement里面
% 的id 不在当前declaration里面
function intersectionIdStatement ID [id]
    replace [repeat id]
        RID [repeat id]
    import AllId [repeat id]
    where
        AllId [? judgeIdisDeal ID]
    by
        RID [. ID]
end function 

% 这里获取两个 repeat id  的交集
function intersectionId1 ID [id]
    replace [repeat id]
        RID [repeat id]
   % import NRStId [repeat id]
    import NNRStId [repeat id]
    where
        NNRStId [? judgeIdisDeal ID]
    by
        RID [. ID]
end function 

% 这里从 block_item 里面提取出statement
function extractStatement BI [block_item]
    replace [repeat statement]
        RS [repeat statement]
    deconstruct BI
        ST [statement]
    by 
        RS [. ST]
end function

% 对statement 语句按照逆序排列
function reverseOrderStatement ST [statement]
    replace [repeat statement]
        RS [repeat statement]
    construct newST[repeat statement]
        _ [. ST][. RS] [message "test1"]
    by
        newST
end function 

% 这里从statement 创造相应的block_tiem 
function formStateCreateBlockItem Stat [statement]
    replace [repeat block_item]
        RBI [repeat block_item]
    construct BI [block_item]
        Stat 
    by
        RBI [. BI]
end function    
% 对satement 处理到这里结束
% ----------------------------------------------------------------

% ----------------------------------------------------------------
% 这里开始后是一些工具函数
% 这里对id 进行排序操作
% 这里获取排好序的唯一的id
function getUniqSortedID RId [repeat id]
    construct RIdLength [number]
        _ [length RId]
    where
        RIdLength [> 0]
    replace [repeat id]
        Ids [repeat id]
    construct SortRId [repeat id]
        RId [sortId]
    construct UniqRId [repeat id]
        SortRId [select 1 1][deduplication SortRId]
    by
        Ids [. UniqRId]
end function 
    
% 这个函数根据declaration 创造相应的block_item
function fromDeclCreateBlockItem Decl [declaration]
    replace [repeat block_item]
        RBI [repeat block_item]
    construct BI [block_item]
        Decl
    by
        RBI [. BI]
end function 

% 这里从 block_item 里面提取出相应的declaration
function extractBlockItemDecl BI [block_item]
    replace [repeat declaration]
        RDecl [repeat declaration]
    deconstruct BI
        Decl [declaration]
    % 由于printf 语句这里也属于declaration 语句，所以这里要过滤掉printf 语句
    construct AllDeclID [repeat id]
        _ [^ Decl]
    export PrintfDecl [id]
        'printf
    construct NPrint [repeat id]
        _ [IsContainPrintDecl each AllDeclID]
    construct LenNPrint [number]
        _ [length NPrint]
    where
        LenNPrint [= 0]
    by  
        RDecl [. Decl]
end function

% 判断当前的id 是否包含printf 语句
function IsContainPrintDecl ID [id]
    replace [repeat id]
        RID [repeat id]
    import PrintfDecl [id]
    where 
        PrintfDecl [= ID]
    by 
        RID [. ID]
end function
% 工具函数到这里结束
% --------------------------------------------------------------
% 交换代码的统计操作完成
% -------------------------------------------------------------



% -------------------------------------------------------------
% 这里对垃圾代码的修改进行统计操作
function changeAddJunkCode
    replace [program]
        St [program]
    export JunkNum [number]
        1
    construct CSB[repeat compound_statement_body]
        _ [^ St]
    construct NCSB [repeat compound_statement_body]
        _ [addJunkCode each CSB]
    by 
        St 
end function

% ----------------------------------------------------------------
% 这里添加垃圾代码
function addJunkCode CSB [compound_statement_body]
    replace [repeat compound_statement_body] 
        RCSB [repeat compound_statement_body]
    construct OutDos[compound_statement_body]
        CSB %[message "THE DOS IS:"][print] [message ""]
    deconstruct CSB
        Dos [repeat block_item]
    import JunkNum [number]
    % 在block_time 序列中间插入，这里获取一半的长度
    construct DosLenHalf [number]
        _ [length Dos] [/ 2] [round] 
    construct DosLenHalfPlusOne [number]
        DosLenHalf [+ 1]
    % 这里拆分成两部分
    construct DosFront[repeat block_item]
        Dos [select 1 DosLenHalf]  %[message "----------------------------------------------------------------"]
    construct DosRear [repeat block_item]
        Dos [select DosLenHalfPlusOne 9999]% [print] [message "----------------------------------------------------------------"]
    % 这里构造junk code1
    import CountJunkCode [number]
    export CountJunkCode
        CountJunkCode [+1]
    construct OutCuntJunk[number]
        CountJunkCode  %[message "----------------------------------------------------------------"]
    by 
        RCSB  
end function 

% 添加第一个junk code 1
function addJunk1
    replace [repeat block_item]
        RBI [repeat block_item]
    import JunkNum [number]
    where 
        JunkNum [= 1]
    construct JunkCode [block_item]
        0
    construct NJunkCode [block_item]
        JunkCode [createJunkCodeCase1]  
    by
        RBI [. NJunkCode]
end function

% 添加第二个junk code 2
function addJunk2
    replace [repeat block_item]
        RBI [repeat block_item]
    import JunkNum [number]
    where 
        JunkNum [= 2]
    construct JunkCode [block_item]
        0
    construct NJunkCode [block_item]
        JunkCode [createJunkCodeCase2]  
    by
        RBI [. NJunkCode]
end function

% 添加第三个junk code 3
function addJunk3
    replace [repeat block_item]
        RBI [repeat block_item]
    import JunkNum [number]
    where 
        JunkNum [= 3]
    construct JunkCode [block_item]
        0
    construct NJunkCode [block_item]
        JunkCode [createJunkCodeCase3]  
    by
        RBI [. NJunkCode]
end function

% 添加第四个junk code 4
function addJunk4
    replace [repeat block_item]
        RBI [repeat block_item]
    import JunkNum [number]
    where 
        JunkNum [= 4]
    construct JunkCode [block_item]
        0
    construct NJunkCode [block_item]
        JunkCode [createJunkCodeCase4]  
    by
        RBI [. NJunkCode]
end function

% 添加第五个junk code 5
function addJunk5
    replace [repeat block_item]
        RBI [repeat block_item]
    import JunkNum [number]
    where 
        JunkNum [= 5]
    construct JunkCode [block_item]
        0
    construct NJunkCode [block_item]
        JunkCode [createJunkCodeCase5]  
    by
        RBI [. NJunkCode]
end function

% 添加第6个junk code 6
function addJunk6
    replace [repeat block_item]
        RBI [repeat block_item]
    import JunkNum [number]
    where 
        JunkNum [= 6]
    construct JunkCode [block_item]
        0
    construct NJunkCode [block_item]
        JunkCode [createJunkCodeCase6]  
    by
        RBI [. NJunkCode]
end function

% 这里构造第一个junk code
function createJunkCodeCase1
    replace [block_item]
        BI [block_item]
    construct NBI [block_item]
        if(0)
        {
            int x,y;
            for(x=0;x<20;x++)
            {
                y+=x;
            }
            if(y>30)
                return y;
        }
    import CountJunkCodeNewer [number]
    export CountJunkCodeNewer
        CountJunkCodeNewer [+ 6]
    by 
        NBI
end function

% 这里创造第二个junk code
function createJunkCodeCase2
    replace [block_item]
        BI [block_item]
    construct NBI [block_item]
         if(0)
        {
            return ;
        }
    import CountJunkCodeNewer [number]
    export CountJunkCodeNewer
        CountJunkCodeNewer [+ 2]
    by 
        NBI
end function

% 这里创造第三个junk code 
function createJunkCodeCase3
    replace [block_item]
        BI [block_item]
    construct NBI [block_item]
         if (0)
        {
            int m=0;
            int n=0;
            m=m*n+n-m+n*2;
            return 0;
         }
    import CountJunkCodeNewer [number]
    export CountJunkCodeNewer
        CountJunkCodeNewer [+ 5]
    by 
        NBI
end function

% 这里构造第 4 个junk code
function createJunkCodeCase4
    replace [block_item]
        BI [block_item]
    construct NBI [block_item]
        if(0)
        {
            float n=0.0;
            if(n>10)
                return;
            else
                n=0;
        }
    import CountJunkCodeNewer [number]
    export CountJunkCodeNewer
        CountJunkCodeNewer [+ 6]
    by
        NBI
end function

% 第5 个junk code
function createJunkCodeCase5
    replace [block_item]
        BI [block_item]
    construct NBI [block_item]
        if (0)
        {
            int temp=0;
            while(temp<10)
            {
                printf("%d\n",temp)
                temp=temp+1;
                if(temp==9)
                    break;
            }    
        }
    import CountJunkCodeNewer [number]
    export CountJunkCodeNewer
        CountJunkCodeNewer [+ 7]
    by
        NBI
end function

% 第6 个junk code 
function createJunkCodeCase6
    replace [block_item]
        BI [block_item]
    construct NBI [block_item]
        if(0)
        {
            double temp=0.0;
            if(temp==3)
                return 0;
        }
    import CountJunkCodeNewer [number]
    export CountJunkCodeNewer
        CountJunkCodeNewer [+ 4]
    by
        NBI
end function
% 添加垃圾代码的操作到这里结束
% ----------------------------------------------------------------


%--------------------------------------------------------------
% 这里进行对常量的修改的统计操作
function changeConstats
    replace [program]
        St [program]
    construct NewSt [program]
        St [changeIntegerConstant] [changeFloatConstant]
    by
        St
end function

% 这里进行常量的修改操作
% 这里完成浮点型常量的修改 比如将 20 修改成8+3*4+0.0
% 这里对每个常量的修改是固定的，因为Txl 不同动态解析
function changeFloatConstant
    replace [program]
        St [program]
    construct FloatConstant [repeat floating_constant]
        _ [^ St]
    construct NewFloatConstant [repeat floating_constant]
        _ [createNewFloatConstant each FloatConstant]
    by  
        St 
end function

function createNewFloatConstant FC [floating_constant]
    replace [repeat floating_constant]
        RFC [repeat floating_constant]
    construct NewFC [floating_constant]
        FC [createNewFC]
    by 
        RFC [. NewFC]
end function

function createNewFC
    replace [floating_constant]
        FC [floating_constant]
    deconstruct FC
        F [floatnumber]
    construct NewFC [floating_constant]
        '( F '+ 3 '* 4 '+ 0.0 '- 12 ')
    import CountConstant [number]
    export CountConstant 
        CountConstant [+ 1]
    by 
        NewFC
end function

%这里进行整型常量的修改操作，比如将20 修改成 (10+1+2*5-1) 这里的+1+2*5-1 
% 是固定的，因为Txl 不能动态解析变化
function changeIntegerConstant
    replace [program]
        St [program]
    construct IntConstant [repeat integer_constant]
        _ [^ St]
    construct NewIntConstant [repeat integer_constant]
        _ [createNewIntConstant each IntConstant]
    by  
        St 
end function

function createNewIntConstant IC [integer_constant]
    replace [repeat integer_constant]
        RIC [repeat integer_constant]
    construct NewIC [integer_constant]
        IC [createNewIC]
    by 
        RIC [. NewIC]
end function

function createNewIC
    replace [integer_constant]
        IC [integer_constant]
    deconstruct IC
        ICN [number]
    construct ICSubTen [number]
        ICN [- 10]
    construct NewIC [integer_constant]
        '( ICSubTen '+ '1 '+ '2 '* '5 '- '1 ')
    import CountConstant [number]
    export CountConstant 
        CountConstant [+ 1]
    by 
        NewIC 
end function
% 这里完成对常量的修改的统计操作
% -------------------------------------------------------------



% -------------------------------------------------------------
% 完成if else 到 if else if 的统计
function changeCompoundIf
    replace [program]
        CSB [program]
    construct S[repeat if_statement]
        _ [^ CSB]
    construct NewS [repeat statement]
        _ [changeIfStatement each S]
    by
        CSB
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
% ----------------------------------------------------------------
% 这里从 if else 转换到 if else if
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
    deconstruct EIfCompoundBody  % 这里解析成功说明为连续的if else 语句
        If [if_statement]
    deconstruct If
        'if '( C [condition] ') S [sub_statement]
            OE [opt else_statement]
    construct OutOE [opt else_statement]
        OE %[message "else :"] [print]
    % 这里主要是判断if 的下一条语句是否为 else ，如果不是else 需要自己手动加else ;
    construct RES [repeat else_statement]
        _ [createRepeatElseStatement OE]  [message ""]
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
    by 
        NewE
end function

% 这里判断else 之后的 if  是否存在 else 如果不存在else 需要自己手动添加 else 语句
function createNewRES RES [repeat else_statement]
    replace [repeat else_statement]
        NRES [repeat else_statement]
    construct LenRES [number]
        _ [length RES] 
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
        E 
    by
        RES [. E]
end function  
% if else  语句转换到 if else if 语句 完成
% ----------------------------------------------------------------


% ----------------------------------------------------------------
% if else if else --> if { if else } else 的转换
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
    import CountIfElseIf [number]
    export CountIfElseIf
        CountIfElseIf [+ 1]
    construct OptE[opt else_statement]
        NewEIf %[putp "NewEIf is :%"]
    by
        NewEIf
end function
% if ... else if ...   eles...   到    if ... else ... 转换完成
% ----------------------------------------------------------------



% -------------------------------------------------------------
% 这里对自增操作进行统计
function changeSelfOperatorExpression
    replace [program]
        St [program]
    construct IOE [repeat expression]
        _ [^ St] %[message "expression is:"] [print]
    construct NewIOE [repeat expression]
        _ [changeExpressionSelfOperator each IOE]   % 这里一定要处理表达式的对应关系，这里进行替换的变量对之间一定要严格对应
    by 
        St  
end function

% 修改 ++i; 这种操作
function changeSelfOperatorExpressionStatement
    replace [program]
        St [program]
    construct IOE [repeat expression_statement]
        _ [^ St]
    construct NewIOE [repeat expression_statement]
        _ [changeExpressionStatementSelfOperator each IOE]
    by 
        St 
end function 

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
    by 
        NewE
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
    by 
        NewE
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
    by 
        NewE
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
    by 
        NewE
end function 

% 这里是修改 i++; 这种在statement 里面的自增，自减运算。
function changeSelfOperatorExpressionStatement_temp
    replace [statement]
        St [statement]
    construct IOE [repeat expression_statement]
        _ [^ St]
    construct NewIOE [repeat expression_statement]
        _ [changeExpressionStatementSelfOperator each IOE]
    by 
        St [replaceExpressionStatement each IOE NewIOE]
end function  

function replaceExpressionStatement E [expression_statement] NE [expression_statement]
    replace [statement]
        St [statement]
    by 
        St [$ E NE]
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
    by 
        NewE
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
    by 
        NewE
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
    by 
        NewE
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
    by 
        NewE
end function 
% 对自增操作的统计到这里结束
% -------------------------------------------------------------



% -------------------------------------------------------------
% 这里对增量操作进行统计
% 第六种情况，修改增量操作 i+=1 
function changeCompoundIncrement
    replace [program]
        St [program]
    construct RES [repeat expression_statement]
        _ [^ St]
    construct NewRES [repeat expression_statement]
        _ [createNewIncrementAssignment each RES]
    by 
        St  
end function

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
    by 
        NewES
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
    by 
        NewES
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
    by 
        NewES
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
    by 
        NewES
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
    by 
        NewES
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
    by 
        NewES
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
    by 
        NewES
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
    by 
        NewES
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
    by 
        NewES
end function
% 对增量操作的统计到这里结束
% -------------------------------------------------------------


% -------------------------------------------------------------
% 这里对while 循环进行统计操作
function changeCompoundWhile
    replace [program]
        CSB [program]
    construct S[repeat while_statement]
        _ [^ CSB]
    construct NewS [repeat statement]
        _ [changeWhileStatement each S]
    export CountWhile [number]
        _ [length S]
    by
        CSB 
end function

function changeWhileStatement  While [while_statement]
    replace [repeat statement]
       RS [repeat statement]
    construct S [statement]
        While
    construct NS [statement]
        S [newWhilwStatement]
    by 
        RS [. NS]
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
% 对while 的统计到这里结束
% -------------------------------------------------------------


% -------------------------------------------------------------
% 这里对for循环进行统计操作
function changeCompoundFor0
    replace [program]
        CSB [program]
    construct S[repeat for_statement]
        _ [^ CSB]
    % 这里对for 循环的统计只需要进行一次就可以了
    construct LenFor[number]
        _ [length S]
    import CountFor [number]
    export CountFor
        CountFor [+ LenFor]
    construct NewS [repeat statement]
        _ [changeForStatementCase0 each S]
    by
        CSB 
end function

function changeCompoundFor2
    replace [program]
        CSB [program]
    construct S[repeat for_statement]
        _ [^ CSB]
    construct NewS [repeat statement]
        _ [changeForStatementCase2 each S]
    by
        CSB 
end function

% 处理 for(;;){} 这种情况
function changeForStatementCase2 For [for_statement]
    replace [repeat statement]
        RS [repeat statement]
    construct S [statement]
        For
    construct NS [statement]
        S [newForStatement2]
    by 
        RS [. NS]
end function

function newForStatement2
    replace [statement]
        For [for_statement]
    deconstruct For
        'for '( ';
        '; ') 
	     S2 [sub_statement]    
    % 这里是为了处理嵌套的变量

    construct whileStatement [while_statement]
       ';  'while '( 'true ') S2 
    import CountForNewer [number]
    export CountForNewer
        CountForNewer [+ 1] % 这里+1 是为了统计新的while语句
    by 
        whileStatement
end function



function changeCompoundFor1
    replace [program]
        CSB [program]
    construct S[repeat for_statement]
        _ [^ CSB]
    construct NewS [repeat statement]
        _ [changeForStatementCase1 each S]
    by
        CSB 
end function

% 从这里开始从 for 循环到 while 循环的转换操作
% 这里处理 for(i=0,k=1;i<20,k<10;i++,k++) 这种形式
% 这个函数是处理for 循环到while 循环转换的主体
function changeForStatementCase1 For [for_statement]
    replace [repeat statement]
        RS [repeat statement]
    construct S [statement]
        For
    construct NS [statement]
        S [newForStatement1]
    by 
        RS [. NS]
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
        S2 %[dealBlockEmbedStatement] [dealBlockEmbedCompoundStatement] %[putp "S2Embed is : %"]
    % 构造新的while循环的结构
    construct RBI [repeat block_item]
        _ [forSubCreateBlockItem1 S2Embed] % 当sub_statement是statement的情况
    construct NewRBI [repeat block_item]
        RBI [forSubCreateBlockItem2 S2Embed] % 当sub_statement是 sub_statement的情况
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
    construct whileStatement [while_statement]
       '; NewI  'while '( C ') NewS2S 
    import CountForNewer [number]
    construct LenNewS1S[number]
        _ [length NewS1S]
    construct LenNewI [number]
        _ [length NewI]
    export CountForNewer
        CountForNewer [+ LenNewS1S] [+ LenNewI] [+ 1] % 这里+1 是为了统计新的while语句
    by 
        whileStatement
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
function changeForStatementCase0  For [for_statement]
    replace [repeat statement]
       RS [repeat statement]
    construct S [statement]
        For
    construct NS [statement]
        S [newForStatement0]
    by 
        RS [. NS]
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
    %construct whileStatement [while_statement]
     % '{  OptI 'while '( I ') NewS2S '}
    import CountForNewer [number]
    construct LenNewC[number]
        _ [length NewC]
    export CountForNewer
        CountForNewer [+ LenNewC] [+ 2] % 这里+ 2 是因为会引入一条新的变量声明，一条新的while语句
    by 
        For
end function

% 这里构造用for函数内容构造 block_item 当sub_statement 是 compound_statement的情况
function forSubCreateBlockItem2 SS [sub_statement]
    replace [repeat block_item]
        RBI [repeat block_item]
    deconstruct SS
        '{ 
             CSB [compound_statement_body]
        '} 
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
% 这里完成对for 循环的统计
% -------------------------------------------------------------


% -------------------------------------------------------------
% 这里对switch 语句进行计数操作
function countSwitchChanged
    replace [program]
        CSB [program]
    construct S[repeat switch_statement]
        _ [^ CSB]
    construct NewS [repeat statement]
        _ [changeSwitchStatement each S]
    by
        CSB 
end function

function changeSwitchStatement Switch [switch_statement]
    replace [repeat statement]
        RS [repeat statement]
    construct S [statement]
        Switch
    construct NS [statement]
        S [newSwitchStatement]
    by 
        RS 
end function

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
    export Test [number]
        0
    construct ChangedSwitch [number]
        _ [countCaseDefaultBreak each BlockItem]
    import CountChangedSwitch [number]
    export CountChangedSwitch
        CountChangedSwitch [+ 1]
    import Test
    construct OutTest [number]
        Test %[putp "THE TEST IS:%"]
    %construct BlockItem [repeat block_item]
    %    _ [^ S] %[putp "the Block_itme is : %"]
    construct OutEx[repeat block_item]
        BlockItem %[putp "the BlockItem is : %"]
    construct OutS [repeat block_item]
        BlockItem %[putp "the Block_itme is : %"]
    % start analysis 这里把所有的case ,default 转换成一系列的if_statement
    construct RIf [repeat if_statement]
        _ [createRepeatIfStatements Ex BlockItem]
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
        IfStatement 
    import CountSwitch [number]
    export CountSwitch
        CountSwitch [+ 1]
    import CountNewSwitch [number]
    construct LenRif [number]
        _ [length RIf]
    export CountNewSwitch
        CountNewSwitch [+ LenRif] 
    by 
        IfStatement
end function

% 这里对switch 里面的 case 语句， break, defalut 语进行计数操作
function countCaseDefaultBreak BI [block_item]
    replace [number]
        N [number]
    import CountChangedSwitch [number]
    import Test [number]
    construct NChangedSwitch [number]
        CountChangedSwitch [countCase BI]
        %Test[countCase BI] %[putp "THE CASE IS:%"]
    construct NNChangedSwitch [number]
        NChangedSwitch [countDefault BI]
        %Test[countDefault BI] %[putp "THE DEFAULT IS:%"]
    construct NNNChangedSwitch [number]
        NNChangedSwitch [countBreak1 BI]
        %Test[countBreak BI] %[putp "THE BREAK IS:%"]
    construct NNNNChangedSwitch [number]
        %NNNChangedSwitch [countBreak1 BI]
        Test [countBreak1 BI]
    export Test
        NNNNChangedSwitch
    export CountChangedSwitch
        NNNChangedSwitch  % 这里的+1 表示对switch 语句的改变
    by
        N  
end function

% 对break 进行统计，break 在case 语句后面
function countBreak1 BI [block_item]
    replace [number]
        N [number]
    deconstruct BI 
        RL [repeat label]
        US [unlabeled_statement]
    deconstruct US
        SS [simple_statement]
        ';
    deconstruct SS
        BS [break_statement]
    construct OutBI [block_item]
        BI 
    by 
        N [+ 1]
end function

% 这里对break 进行统计
function countBreak BI [block_item]
    replace [number]
        N [number]
    deconstruct BI 
        S [statement]
    deconstruct S
        US [unlabeled_statement]
    deconstruct US
        SS [simple_statement]
        ';
    deconstruct SS
        BS [break_statement]
    construct OutBI [block_item]
        BI 
    by
        N [+ 1]
end function

% 这里对case 语句进行计数操作
function countCase BI [block_item]
    replace [number]
        N [number]
    deconstruct BI
        S [statement]
    deconstruct S
        RL [repeat label]
        US [unlabeled_statement]
    deconstruct RL
        L [label] 
    construct OutL [label]
        L 
    deconstruct L
        'case
        CS [constant_expression]  
        ':
    by
        N [+ 1]
end function

% 这里对defalult 语句进行计数操作
function countDefault BI [block_item]
    replace [number]
        N [number]
    deconstruct BI
        S [statement]
    deconstruct S
        RL [repeat label]
        US [unlabeled_statement]
    deconstruct RL
        L [label] 
    construct OutL [label]
        L 
    deconstruct L
        'default
        ':
    by
        N [+ 1]
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
    import CountNewSwitch [number]
    export CountNewSwitch
        CountNewSwitch [+ 1] 
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
        BlockItem [select 1 1]

    % 这里获取的 constant_expression 可能不止一个，当是几个连着的case 的情况的时候这种情况比较特殊
    construct OutEx [expression_list]
        Ex %[putp "expression_list : %"] 
    construct CaseConstant [repeat constant_expression]
        _ [fromBlockItemGetConstanExpression each firstBlockItem] %[putp "CaseConstant :%"]  
    
    export tillBreak [number]
        0
    % 这里获取对应的case应该包含的语句
    construct CaseStatement [repeat block_item]
        _ [getCaseIncludeStatement each BlockItem] %[message "CaseStatement is:"] [print]
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

    % 这里获取 case 语句之后的下一个 case 语句
    construct BlockItemLength [number]
        _ [length BlockItem]  
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
        RestBlockItem 
    
    import CaseIndex
    %where 
    %    CaseIndex [= 1]
    construct RestBlockItemCase [repeat block_item]
        BlockItem [tail NextCaseIndex] %[message ""]
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

% 这里获取对应case 语句里面的case 语句
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
    by 
        RBlockItem [. caseStatement] [. caseStatementContinue]
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
        US [setBreakLabel]  %[putp "US is :%"]
    % 这里如果出现了Break 语句要及时终中操作
    import tillBreak [number]
    where 
        tillBreak [= 0]
    by 
        RBlockItem [. NewUs]
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
% switch 语句计数完成
% ----------------------------------------------------------------


% -------------------------------------------------------------
% 这里对dowhile语句的修改进行统计
function countDoWhileChanged 
    replace [program]
        CSB [program]
    construct DoWhile [repeat do_statement]
        _ [^ CSB]
    construct NDoWhile [repeat statement]
        _ [changeDoWhileStatement each DoWhile]
    by
        CSB
end function

function changeDoWhileStatement DS[do_statement]
    replace [repeat statement]
        RS [repeat statement]
    construct ST [statement]
        DS    
    construct NST [statement]
        ST [newDoStatement]
    by 
        RS [. NST]
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
            BIL [repeat block_item]
        '}
    construct OutBIL [repeat block_item]
        BIL %[message "the BIL is:"][print]
    construct While [while_statement]
        '; BIL DWC S    
    import CountDoWhile[number]
    export CountDoWhile
        CountDoWhile [+ 1]
    import CountNewerDoWhile [number]
    construct LenBIL [number]
        _ [length BIL]
    export CountNewerDoWhile
        CountNewerDoWhile [+ LenBIL] [+ 1] % 这里的+1 表示的是对do 的改变，+ LenBIL 表示的是新增的代码
    import CountChangedDoWhile [number]
    export CountChangedDoWhile
        CountChangedDoWhile [+ 1]
    by 
        While
end function

% 对dowhile的统计到这里结束
%--------------------------------------------------------------

%--------------------------------------------------------------
% 对逻辑表达式的修改进行计数操作
function countChangedLogicalOperator
    replace [program]
        CSB [program]
    construct RIOE [repeat inclusive_OR_expression]
        _ [^ CSB] 
    construct NewRIOE [repeat inclusive_OR_expression]
        _ [changeInclusiveORExpression1 each RIOE]
    by 
        CSB 
end function 

function changeInclusiveORExpression1 IOE [inclusive_OR_expression]
    replace [repeat inclusive_OR_expression]
        RIOE [repeat inclusive_OR_expression]
    construct OutIOE [inclusive_OR_expression]
        IOE 
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
            [createNewIoEqual]  [createNewIoNotEqual] 
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
    by 
        NewIOE 
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
    by 
        NewIOE 
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
    by 
        NewIOE 
end function

function createNewIoNotEqual
    import IsEqual [number]
    where 
        IsEqual [= 0]
    replace [inclusive_OR_expression]
        IOE [inclusive_OR_expression]
    deconstruct IOE
        SE1 [shift_expression] '!= SE2 [shift_expression]
    construct Expression [expression]
        IOE [$ '!= '==]
    construct ListExpression [list expression]
        Expression
    construct PE [parenthesized_expression]
        '( ListExpression ')
    construct NewIOE [inclusive_OR_expression]
        '! PE
    import CountLogicalOperator [number]
    export CountLogicalOperator
        CountLogicalOperator [+ 1]
    by 
        NewIOE 
end function

% 这里修改 == 这种逻辑
function createNewIoEqual
    replace [inclusive_OR_expression]
        IOE [inclusive_OR_expression]
    deconstruct IOE
        SE1 [shift_expression] '== SE2 [shift_expression]
    construct Expression [expression]
        IOE [$ '== '!=]
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
    by 
        NewIOE 
end function
% 对逻辑表达式的修改的计数操作完成
%--------------------------------------------------------------


% ----------------------------------------------------------------
% 这里实现对声明语句修改的计数操作
% 被修改的声明语句
% 新增加的声明语句
function countDeclaration FDOD [function_definition_or_declaration]
    replace [repeat function_definition]
        RFuncDefine [repeat function_definition]   
    deconstruct FDOD 
        FD [function_definition]
    deconstruct FD
        FuncHead [function_header] FuncBody [compound_statement]
    construct NewFuncBody [repeat compound_statement]
        _ [^ FuncBody]
    export NewDecl [number]
        0
    construct NFuncBody [repeat compound_statement]
        _ [changeCompound1 each NewFuncBody]
    import CountDecl [number]
    import CountChangedDecl [number]
    export CountDecl
        CountDecl [+ CountChangedDecl]
    by 
        RFuncDefine
end function

function changeCompound1 CS [compound_statement]
    replace [repeat compound_statement]
        RCS [repeat compound_statement]
    deconstruct CS 
    '{ 
       CSB [compound_statement_body] 
    '} OS [opt ';]  
    construct Output [compound_statement_body]
        CSB 
    construct NewCSB [compound_statement_body]
        CSB [changeCompoundStatementBody]
    by 
        RCS
end function

function changeCompoundStatementBody
    replace  [compound_statement_body]
        Dos [repeat block_item]
    construct NewDos[repeat block_item]
        _ [changeDeclarations1 each Dos]
    by 
        Dos 
end function

% 这里对definition 进行修改
function changeDeclarations1 BI [block_item]
    replace [repeat block_item]
        B [repeat block_item]
    deconstruct BI 
        De [declaration]
    % 这里进行变量声明的变化，将一条语句中连续的变量声明变成单个的变量声明语句的形式。
    construct NewDe [declaration]
        De [changeDeclaration]  
    by 
        B 
end function


% 变量定义格式化操作 
% int a,b;
% int a;
% int b;
function changeDeclaration
    replace [declaration]
        De [declaration]
    construct OutDe [repeat id]
        _[^ De] %[putp "the declaration is:%"]
    construct Gets [id]
        'gets
    export containId [number]
        0
    construct _ [repeat id]
        OutDe [judgeIdisDealDecl Gets] 
    import containId  
    where not
        containId [= 1] 
    deconstruct De
        DSs [declaration_specifiers]
        OIDL [opt init_declarator_list]  ';
    construct CAllDecl [declaration]
        De [countAllDeclaration]
    % 这里完成从连续定义的变量中取出单个变量的定义
    deconstruct DSs % 因为只有一个变量定义的地方存在两个 declaration_spefifier,所以解析会不成功
        TS [type_specifier] % 这里提取出变量的定义
    % 这里提取出当前定义中所有定义的变量
    deconstruct OIDL 
        LID [list init_declarator]
    construct OutLID [list init_declarator]
        LID %[putp "THE LID IS:%"] 
    % 这里提取出 int a,b=0 ; 中的 b 
    construct NRDS [repeat declaration_specifier]
        %RDS [createDeclarationSpec1 each LID] [putp "NRDS:%"] 
        _ [createDeclarationSpec1 each LID] %[putp "NRDS:%"] 
    % 这里提取出相应的init_declarator 这里提取出没有初始化的id ，类似int a,b=0;中的a ,以及其它不需要改变的地方
    % 如 这里 int a[100],b; 中的a[100]
    construct RID [repeat init_declarator]
        _ [createRIDInitDeclarator each LID] %[putp "THE RID IS:%"] 
    export DSS [declaration_specifier]
        TS
    % 这里创建新的declaration 
    construct RDe [repeat declaration]
        _ [createRepeatDeclaration each NRDS] %[putp "RDE IS:%"]
    % 这里处理 int a[100], *p; 数组和指针存在的情况,这里只是为了测试，然后输出
    construct NRDe [repeat declaration]
        _ [createRepeatDeclaration1 each RID] %[putp "NRDE IS:%"]
    % 这里创建新的int a; 等内容
    construct NewRDe [repeat declaration]
        RDe [createRepeatDeclaration1 each RID] %[message "NewRDE IS:"][print]
    %这里开始提取出变量可能的初始化操作
    construct Init [repeat init_declarator]
        _ [createInitDeclarator each LID] %[message "InIt IS:"][print][message ""]
    construct LenNewRDe [number]
        _ [length NewRDe]
    where
        LenNewRDe [> 0]
    construct NewDe [declaration]
       NewRDe '; Init 
    construct OutNDe [declaration]
        NewDe %[message "THE NEW DECL IS:"][print][message ""]
    construct LenInit [number]
        _ [length Init]
    import countNewDecl [number]
    export countNewDecl
        countNewDecl [+ LenNewRDe][+ LenInit]
    import CountChangedDecl [number]
    export CountChangedDecl
        CountChangedDecl [+ 1]
    by 
        De
end function

% 对当前函数中所有声明语句进行统计
function countAllDeclaration 
    replace [declaration]
        De [declaration]
    deconstruct De
         DS [declaration_specifiers]
         ';
    deconstruct DS
        RDS [repeat declaration_specifier]
    construct LenRDS [number]
        _ [length RDS]
    where
        LenRDS [> 1] 
    import CountDecl [number]
    export CountDecl
        CountDecl [+ 1]
    construct OutDe [declaration]
        De 
    by
        De 
end function 

function createRIDInitDeclarator  ID [init_declarator]
    replace [repeat init_declarator]
        RID [repeat init_declarator]
    construct OutputID [init_declarator]
        ID %[putp "ID:%"] 
    construct NRID [repeat init_declarator]
        _ [testInitDeclarator1 ID]
    construct NewNRID [repeat init_declarator]
        NRID [testInitDeclarator2 ID]
    construct NNewNRID [repeat init_declarator]
        NewNRID [testInitDeclarator3 ID] %[message ""]
    by 
        RID [. NNewNRID]
end function 

% 这里测试是否为int a[100]={0} 这种形式
function testInitDeclarator3 ID [init_declarator]
    replace [repeat init_declarator]
        RID [repeat init_declarator]
    deconstruct ID 
        IDen [identifier] RDE [repeat declarator_extension+] OI [opt initialization]
    deconstruct not OI
    construct OutputID [init_declarator]
        ID %[message "testInitDeclarator33:"] [print]
    by
        RID [. ID]
end function  

% 这里测试是否为 int * p;这种形式 ,测试是否为int *p=&j,i; 这种形式
function testInitDeclarator2 ID [init_declarator]
    replace [repeat init_declarator]
        RID [repeat init_declarator]
    %deconstruct ID 
    %    D [declarator]
    deconstruct ID
        RP [repeat pointer+] IDen [identifier]  OI [opt initialization]
    construct OutputID [init_declarator]
        ID %[message "testInitDeclarator2:"] [print]
    by
        RID [. ID]
end function 

% 这里测试是否为 a[100]这种形式
function testInitDeclarator1  ID [init_declarator]
    replace [repeat init_declarator]
        RID [repeat init_declarator]
    deconstruct ID
        Iden [identifier] RDE [repeat declarator_extension]
    %deconstruct RDE
    %    DE [declarator_extension] 
    construct OutputID [init_declarator]
        ID %[message "testInitDeclarator1:"] [print]
    by 
        RID [. ID]
end function

% 这里提取出有初始化的部分
function createInitDeclarator InitDecl [init_declarator]
    replace [repeat init_declarator]
        RID [repeat init_declarator]
    deconstruct InitDecl
        Identifier [identifier] OInit [opt initialization]
    deconstruct not OInit %% 只有当有这个变量的时候才进行匹配操作
    construct NewInitDecl [init_declarator]
        InitDecl ';
    by 
        RID [. NewInitDecl]
end function 

% 这里创建新的declaration
function createRepeatDeclaration DS [declaration_specifier]
    replace [repeat declaration]
        RD [repeat declaration]
    import DSS [declaration_specifier]
    construct RDS [repeat declaration_specifier]
        DSS 
        DS
    construct NewD [declaration]
        RDS ';
    by 
        RD [. NewD]
end function 

% 这里处理 int a[100], *p; 数组和指针存在的情况
function createRepeatDeclaration1 ID [init_declarator]
    replace [repeat declaration]
        RD [repeat declaration]
    import DSS [declaration_specifier]
    construct RDS [repeat declaration_specifier]
        DSS 
    construct DS [declaration_specifiers]
        RDS
    construct LID [list init_declarator]
        ID
    construct IDL [init_declarator_list]
        LID
    construct OIDL [opt init_declarator_list]
        IDL
    construct NewD [declaration]
        DS OIDL ';
    by 
        RD [. NewD]
end function 

% 这里从连续的定义中抽取出单个的id int a,b=0;中的a
function createDeclarationSpec InitDecl [init_declarator]
    replace [repeat declaration_specifier]
        RDS [repeat declaration_specifier]
    construct OutInitDecl [init_declarator]
        InitDecl 
    deconstruct InitDecl
        Identifier [identifier]
    construct NewSpec [declaration_specifier]
        Identifier 
    by 
        RDS [. NewSpec]
end function

% 从连续的定义中提取出单个id int a,b=1; 中的 b
function createDeclarationSpec1 InitDecl [init_declarator]
    replace [repeat declaration_specifier]
        RDS [repeat declaration_specifier]
    construct OutInitDecl [init_declarator]
        InitDecl %[putp "THE InitDecl:%"]
    deconstruct InitDecl
        Identifier [identifier] OI [opt initialization]
    deconstruct OI 
        InIt [initialization]
    construct NewSpec [declaration_specifier]
        Identifier 
    by 
        RDS [. NewSpec]
end function
% 对声明语句的修改到这里结束
% ----------------------------------------------------------------


% ----------------------------------------------------------------
% 这里实现对代码行数进行统计

% 这里提取所有函数的定义，并实现函数代码行统计
function extractFuncDefintion FDOD [function_definition_or_declaration]
    replace [repeat function_definition]
        RFuncDefine [repeat function_definition]   
    deconstruct FDOD 
        FD [function_definition]
    % 这里计数的时候要考虑函数头，要考虑对函数头的改变操作
    % 这里可以提取函数名输出，可以在这里输出所有统计到的变量
    deconstruct FD
        FuncHead [function_header] FuncBody [compound_statement] 
    % 这里提取出函数名
    construct FuncNames [repeat declarator]
        _ [^ FuncHead]
    construct NFuncName [repeat id]
        _ [^ FuncNames] %[putp "THE CURRENT FUNCNAME IS: %"]
    export FuncName [repeat id]
        NFuncName 
    % 对函数代码进行统计
    construct NewFuncBody [repeat compound_statement]
        _ [^ FuncBody]
    construct NFuncBody [repeat compound_statement]
        _ [changeCompound each NewFuncBody]
    % 这里主要是处理 if (condition) statement; 这种特殊情况，这里应该统计计数为2
    import CodeLine [number]
    construct SubStatement [repeat sub_statement]
        _ [^ FuncBody]
    construct NCodeLine [number]
        CodeLine [countSubStatement each SubStatement]
    % 这里处理对else 的计数，else 需要单独考虑计数
    construct ElseStatement [repeat else_statement]
        _ [^ FuncBody]
    construct LenElse [number]
        _ [length ElseStatement]
    export CodeLine 
        NCodeLine [+ LenElse] %[putp "THE TOTAL CODE OF LINE IS:%"] [message ""]
     % 这里实现对函数中变量声明语句进行统计，以及变量重命名影响的代码数进行统计
    construct CountVarAndFuncName [function_definition]
        FD  
    by 
        RFuncDefine
end function

function extractFuncDefintionKP FDOD [function_definition_or_declaration]
    replace [repeat function_definition]
        RFuncDefine [repeat function_definition]   
    deconstruct FDOD 
        FD [function_definition]
    % 这里计数的时候要考虑函数头，要考虑对函数头的改变操作
    % 这里可以提取函数名输出，可以在这里输出所有统计到的变量
    construct OutTest [function_definition_or_declaration]
        FDOD 
    deconstruct FD
        FuncHead [KP_function_header] KPParameterDecls [opt KP_parameter_decls] FuncBody [compound_statement] 
    % 这里提取出函数名
    construct FuncNames [repeat declarator]
        _ [^ FuncHead] 
    construct NFuncName [repeat id]
        _ [^ FuncNames] %[putp "THE CURRENT FUNCNAME IS: %"]
    export FuncName [repeat id]
        NFuncName 
    % 对函数代码进行统计
    construct NewFuncBody [repeat compound_statement]
        _ [^ FuncBody]
    construct NFuncBody [repeat compound_statement]
        _ [changeCompound each NewFuncBody]
    % 这里主要是处理 if (condition) statement; 这种特殊情况，这里应该统计计数为2
    import CodeLine [number]
    construct SubStatement [repeat sub_statement]
        _ [^ FuncBody]
    construct NCodeLine [number]
        CodeLine [countSubStatement each SubStatement]
    % 这里处理对else 的计数，else 需要单独考虑计数
    construct ElseStatement [repeat else_statement]
        _ [^ FuncBody]
    construct LenElse [number]
        _ [length ElseStatement]
    export CodeLine 
        NCodeLine [+ LenElse] %[putp "THE TOTAL CODE OF LINE IS:%"] [message ""]
     % 这里实现对函数中变量声明语句进行统计，以及变量重命名影响的代码数进行统计
    construct CountVarAndFuncName [function_definition]
        FD  
    by 
        RFuncDefine
end function

% 会循环调用这个函数,这个规则实现对compound_statement的循环处理
% 这里实现对代码的循环计数操作
function changeCompound CS [compound_statement]
    replace [repeat compound_statement]
        RCS [repeat compound_statement]
    deconstruct CS 
    '{ 
       CSB [compound_statement_body] 
    '} OS [opt ';]  
    construct Output [compound_statement_body]
        CSB 
    construct NewCSB [compound_statement_body]
        CSB [changeCompoundStatementBody1]
    by 
        RCS
end function

% 这里实现对每个compound_statement 的操作，包含在{} 里面的代码进行操作
% 当然这里只是实现了简单计数操作，并没有对代码进行实际的改变
function changeCompoundStatementBody1
    replace  $[compound_statement_body]
        Dos [repeat block_item]
    construct LenDos [number]
        _ [length Dos] %[message "THE LENGTH IS:"][print]
    import CodeLine [number]
    export CodeLine
        CodeLine [+ LenDos]
    construct NewDos[repeat block_item]
        _ [changeDeclarations each Dos]
    by 
        Dos 
end function

% 这里实现对 if(condition) statement; 这种的计数操作，这种应该计数为2
function countSubStatement SubStatement [sub_statement]
    replace [number]
        OC [number]
    deconstruct SubStatement
        St [statement]
    construct OutStatement [repeat statement]
        St %[message "THE SUB_STATEMENT IS:"][print]
    by  
        OC [+1] 
end function

% 这里实现声明语句的计数操作,这里实现对序列的单独操作
function changeDeclarations BI [block_item]
    replace [repeat block_item]
        RBI [repeat block_item]
    deconstruct BI
        De [declaration]   
    by 
        RBI
end function
% 对代码行数的统计到这里结束
% ----------------------------------------------------------------

% ----------------------------------------------------------------
% 这里实现要修改的变量名函数名统计
function countVarAndFuncName 
    replace [program]
      P [program]
    % 提取全局定义的变量 , 变量的提取情况1，变量是declarator
    construct AllVarGlobal [repeat declarator]
      _ [^ P] 
    construct PureAllVarGlobal [repeat id]
      _ [^ AllVarGlobal]% [message "THE PUREALLVARGLOBAL"][print]
    
    % 提取定义的局部变量， 变量的提取情况2,变量是simple_type_name
    construct AllVarLocal [repeat typedef_name]
      _ [^ P] 
    construct PureAllVarLocal [repeat id]
      _ [^ AllVarLocal] 
    
    % 全部变变量
    construct AllVar [repeat id]
    _[. PureAllVarGlobal] [. PureAllVarLocal] [sortId]  

    % 变量去重操作，获取独一无二的变量
    construct UniqueAllVar [repeat id]
      AllVar [select 1 1] [deduplication AllVar] 
    construct LenUniqueAllVar [number]
        _ [length UniqueAllVar]
    export CountVarAndFuncName [number]
        LenUniqueAllVar
    % 这里提取出所有的id,提取当前函数中的所有id 
    construct AllId [repeat id]
        _ [^ P] 
    export UniqueAllVar 
    construct NAllId [repeat id]
        _ [intersectionId each AllId]%[message "THE NAllId ID IS:"][print]
    % 获取变量个数
    construct CountChangedName [number]
      _ [length NAllId] [putp "THE RENAME COUNT IS:%"]  % 变量名和函数名统计
    export CountVarAndFuncNameChanged [number]
        CountChangedName
    % 替换变量名
    by 
      P
end function

% 这里获取两个id 列表之间的交集
function intersectionId ID [id]
    replace [repeat id]
        RID [repeat id]
    import UniqueAllVar [repeat id]
    where
        UniqueAllVar [? judgeIdisDeal ID]
    by 
        RID [. ID]
end function 

% 这里判断当前id 是否已经在处理的id 里面
function judgeIdisDeal Id [id]
    match *[repeat id]
        Id Other[repeat id]
    export containId [number]
        1
end function

% 这里判断当前id 是否已经在处理的id 里面
function judgeIdisDealDecl Id [id]
    replace *[id]
        Id
    export containId [number]
        1
    by 
        Id
end function

% 变量去重操作
function deduplication AVar2 [repeat id]
  replace [repeat id]
    AVar1 [repeat id] 
  deconstruct AVar1
    V1 [id] Rest1 [repeat id]
  deconstruct AVar2
    V2 [id]  Rest2 [repeat id] 
  construct V [repeat id]
    _ [. V1] 
  construct VV[repeat id]  
    V [isIdEqual V2] [isEqualSuccss V]  %
  by
    VV [. AVar1] [deduplication Rest2] 
end function  

% 这里判断替换是否成功，如果没有进行任何替换的话，则将当前数据替换为空，不进行任何操作
function isEqualSuccss AVar2 [repeat id]
  replace  [repeat id]
    AVar1 [repeat id]
  deconstruct AVar1
    V1 [id] Rest1 [repeat id]
  deconstruct AVar2
    V2 [id]  Rest2 [repeat id] 
  where
    V1 [= V2]
  %相等表示没有替换成功，表示将其替换为空，不进行任何操作
  by 
    %none
end function

% 这里判断两个变量是否相等
function isIdEqual V2 [id] 
  replace [repeat id]
    V [repeat id]
  deconstruct V 
    V1 [id] Rest1 [repeat id]
  where 
    V1[~= V2]
  construct V12 [repeat id]
    _ [. V2]
  by 
    V12
end function

%将所有变量进行排序
rule sortId
  replace [repeat id]
    N1 [id] N2 [id] Rest [repeat id]
  where
    N1 [> N2]
  by
    N2 N1 Rest
end rule
% 变量名函数名统计到这里结束
% ----------------------------------------------------------------


