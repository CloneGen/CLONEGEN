% Txl v10.8 (7.5.20) (c) 1988-2020 Queen's University at Kingston
% statements 
% 
% version 20200924
% 这个文件的主要功能是实现代码statement , expression 等自身发生的变化

include "c.grm"
%include "extract_id.Txl" % 这主要是实现变量名和函数名重命名的功能

% ----------------------------------------------------------------
% 这里为了转换的需要重新定义了部分结构， 这里是一些redefine结构。
% 这里在某些重定义中加入 '; 的作用是因为重定义变量中可能会产生的冲突，加入'; 可以起到消除冲突的作用

% 重新定义while结构
redefine while_statement
    ... |[expression] ';[NL] 'while '( [condition] ') [sub_statement] 
    | '{ [NL] [IN] [opt non_null_declaration]  'while '( [opt expression_list] ') [sub_statement] [NL] [EX] '} [NL]
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
% 这之前都是重新定义的结构
% ----------------------------------------------------------------


%----------------------------------------------------------------
% 这里是主函数的开始

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
        _ [extractFuncDefintion each RFDOD]  %提取所有函数定义进行操作
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
       CSB [changeCompoundStatementBody]
    '} OS
end function

% 这里是所有satement 可能情况的组合
function changeCompoundStatementBody
    replace  [compound_statement_body]
        CSB [compound_statement_body]
    by
        CSB 
        %[changeCompoundLogicalOperator]
        %[changeCompoundDoWhile]
        %[changeCompoundSwitch]
        %[changeCompoundFor0]
        %[changeCompoundFor1]
        %[changeCompoundWhile]
        %[changeCompoundIncrement]
        %[changeSelfOperatorExpression]
        %[changeSelfOperatorExpressionStatement]
        %[changeCompoundIf]
        %[changeConstats]
        %[changeAddJunkCode]
        [changeDeleteCode]
end function 

% 主函数到这里结束
% ---------------------------------------------------------------


% ----------------------------------------------------------------
% 这里是所有操作的主函数

% 第一种情况，修改逻辑表达式
function changeCompoundLogicalOperator
    replace [compound_statement_body]
        CSB [compound_statement_body]
    construct RIOE [repeat inclusive_OR_expression]
        _ [^ CSB]
    construct NewRIOE [repeat inclusive_OR_expression]
        _ [changeInclusiveORExpression1 each RIOE]
    by 
        CSB [replaceInclusiveORExpression each RIOE NewRIOE]  
end function 

% 第二种情况，修改DoWhile循环
function changeCompoundDoWhile 
    replace [compound_statement_body]
        CSB [compound_statement_body]
    construct DoWhile [repeat do_statement]
        _ [^ CSB]
    construct NDoWhile [repeat statement]
        _ [changeDoWhileStatement each DoWhile]
    construct NS [repeat statement]
        _ [fromDoToStatement each DoWhile]
    by
        CSB [replaceStatement each NS NDoWhile] 
end function

% 第三种情况，修改Switch 语句
function changeCompoundSwitch
    replace [compound_statement_body]
        CSB [compound_statement_body]
    construct S[repeat switch_statement]
        _ [^ CSB]
    construct NewS [repeat statement]
        _ [changeSwitchStatement each S]
    construct NS [repeat statement]
        _ [fromSwitchToStatement each S]
    by
        CSB [replaceStatement each NS NewS]
end function

% 第四种情况，修改for语句
function changeCompoundFor0
    replace [compound_statement_body]
        CSB [compound_statement_body]
    construct S[repeat for_statement]
        _ [^ CSB]
    construct NewS [repeat statement]
        _ [changeForStatementCase0 each S]
    construct NNewS [repeat statement]
        _ [changeForStatementCase1 each S]
    construct NS [repeat statement]
        _ [fromForToStatement each S]
    construct NCSB [compound_statement_body]
        CSB [replaceStatement each NS NNewS]
    by
        NCSB [replaceStatement each NS NewS]
end function

function changeCompoundFor1
    replace [compound_statement_body]
        CSB [compound_statement_body]
    construct S[repeat for_statement]
        _ [^ CSB]
    construct NewS [repeat statement]
        _ [changeForStatementCase1 each S]
    construct NS [repeat statement]
        _ [fromForToStatement each S]
    by
        CSB [replaceStatement each NS NewS]
end function

% 第五种情况，修改while 语句
function changeCompoundWhile
    replace [compound_statement_body]
        CSB [compound_statement_body]
    construct S[repeat while_statement]
        _ [^ CSB]
    construct NewS [repeat statement]
        _ [changeWhileStatement each S]
    construct NS [repeat statement]
        _ [fromWhileToStatement each S]
    by
        CSB [replaceStatement each NS NewS]
end function

% 第六种情况，修改增量操作 i+=1 
function changeCompoundIncrement
    replace [compound_statement_body]
        St [compound_statement_body]
    construct RES [repeat expression_statement]
        _ [^ St]
    construct NewRES [repeat expression_statement]
        _ [createNewIncrementAssignment each RES]
    by 
        St [replaceExpressionStatement each RES NewRES]
end function

% 第七种情况，修改自操作++，--
function changeSelfOperatorExpression
    replace [compound_statement_body]
        St [compound_statement_body]
    construct IOE [repeat expression]
        _ [^ St] %[message "expression is:"] [print]
    construct NewIOE [repeat expression]
        _ [changeExpressionSelfOperator each IOE]   % 这里一定要处理表达式的对应关系，这里进行替换的变量对之间一定要严格对应
    by 
        St [replaceSelfOperatorExpression each IOE NewIOE]
end function

function changeSelfOperatorExpressionStatement
    replace [compound_statement_body]
        St [compound_statement_body]
    construct IOE [repeat expression_statement]
        _ [^ St]
    construct NewIOE [repeat expression_statement]
        _ [changeExpressionStatementSelfOperator each IOE]
    by 
        St [replaceExpressionStatement each IOE NewIOE]
end function 

% 第八种情况，处理if else , if else if  语句
function changeCompoundIf
    replace [compound_statement_body]
        CSB [compound_statement_body]
    construct S[repeat if_statement]
        _ [^ CSB]
    construct NewS [repeat statement]
        _ [changeIfStatement each S]
    construct NS [repeat statement]
        _ [fromIfToStatement each S]
    by
        CSB [replaceStatement each NS NewS]
end function

% 第九种情况，对常量的展开，这里做了对整型，浮点型变量的展开
function changeConstats
    replace [compound_statement_body]
        St [compound_statement_body]
    by
        St [changeIntegerConstant] [changeFloatConstant]
end function

% 第十种情况，添加垃圾代码
function changeAddJunkCode
    replace [compound_statement_body]
        St [compound_statement_body]
    export JunkNum [number]
        1
    by 
        St [addJunkCode]
end function

% 第十一种情况，删除代码
function changeDeleteCode
    replace [compound_statement_body]
        CST [compound_statement_body]
    by 
        CST [deletePrintfStatement]
end function

% statement 的替换
function replaceStatement S [statement] NS [statement]
    replace [compound_statement_body]
        CSB [compound_statement_body]
    by
        CSB [$ S NS]
end function
% 所有处理的操作的main 函数到这里结束
% ----------------------------------------------------------------


% ----------------------------------------------------------------
% 这里删除部分不影响原始代码逻辑的代码，这里只实现了对printf 代码的删除
% 这里删除部分不影响原始代码逻辑的代码，这里只实现了对printf 代码的删除
function deletePrintfStatement 
    replace [compound_statement_body] 
        CSB [compound_statement_body]
    % 第一种情况删除的代码在大括里面{},删除的在sub_statement的compound_statement里面
    construct AllCSB [repeat compound_statement_body]
        _ [^ CSB]
    construct NAllCSB [repeat compound_statement_body]
        _ [deletePrint each AllCSB]
    construct NCSB [compound_statement_body]
         CSB [replaceCompoundStatementBody each AllCSB NAllCSB]
    % 第二种情况删除的时候代码在sub_statement的 statement里面
    construct ALLSubStatement [repeat sub_statement]
        _ [^ CSB]
    construct ALLStatement [repeat statement]
        _ [fromSubStatementExtractStatement each ALLSubStatement] %[print][message ""]
    construct NAllStatement [repeat statement]
        _ [deleteStatementPrintf each ALLStatement]
    by 
        NCSB [replaceStatementPrintf each ALLStatement NAllStatement]
end function
 
% 这里进行statemetn 的替换操作
function replaceStatementPrintf Old [statement] New [statement]
    replace [compound_statement_body]
        CSB [compound_statement_body]
    by  
        CSB [$ Old New]
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
    by
        ';
end function


% 这里完成compound_statement_bode 的替换操作
function replaceCompoundStatementBody Old[compound_statement_body] New[compound_statement_body]
    replace [compound_statement_body]
        CSB [compound_statement_body]
    by 
        CSB [$ Old New]
end function

% 这里删除每个compound_statment中的printf 语句
function deletePrint CSB [compound_statement_body]
    replace [repeat compound_statement_body]
        RCSB [repeat compound_statement_body]
    deconstruct CSB 
        RBI [repeat block_item]  
    construct OutCSB [compound_statement_body]
        CSB %[print]
    construct AllPrintf [repeat block_item]
        _ [isPrintfDelete each RBI] %[message "THE ALL PRINTF IS:"][print] [message ""]
    construct NAllPrintf [repeat block_item]
        AllPrintf [isStatementPrintf each RBI]
    export NAllPrintf
    construct NRBI [repeat block_item]
        _ [isdeleteBlockItem each RBI]
    construct NCSB [compound_statement_body]
        NRBI
    by 
        RCSB [. NCSB]
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
% 删除代码到这里结束
% ----------------------------------------------------------------
% 删除代码到这里结束
% ----------------------------------------------------------------


% ----------------------------------------------------------------
% 这里添加垃圾代码
rule addJunkCode
    replace $[compound_statement_body]
        Dos [repeat block_item]
    import JunkNum [number]
    construct OutDos[repeat block_item]
        Dos% [message "THE DOS IS:"][print] [message ""]
    % 在block_time 序列中间插入，这里获取一半的长度
    construct DosLenHalf [number]
        _ [length Dos] [/ 2] [round] %[print]
    construct DosLenHalfPlusOne [number]
        DosLenHalf [+ 1]
    % 这里拆分成两部分
    construct DosFront[repeat block_item]
        Dos [select 1 DosLenHalf] %[print] [message "----------------------------------------------------------------"]
    construct DosRear [repeat block_item]
        Dos [select DosLenHalfPlusOne 9999]% [print] [message "----------------------------------------------------------------"]
    % 这里构造junk code1
    construct JunkCode [repeat block_item]
        _ [addJunk1][addJunk2][addJunk3] %[message "JUNK CODE:"][print] [message "----------------------------------------------------------------"]
    % 这里将junk code 加入 repeat block_item 中去构造新的block_item
    construct NDos [repeat block_item]
        _ [. DosFront] [. JunkCode] [. DosRear]
    construct NJunkNum [number]
        JunkNum [+ 1]
    export JunkNum [number]
        NJunkNum
    by 
        NDos 
end rule 

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
        JunkCode [createJunkCodeCase1] %[print] 
    by
        RBI [. NJunkCode]
end function

% 添加第二个junk code 2
function addJunk2
    replace [repeat block_item]
        RBI [repeat block_item]
    import JunkNum [number]
    where 
        JunkNum [= 4]
    construct JunkCode [block_item]
        0
    construct NJunkCode [block_item]
        JunkCode [createJunkCodeCase2] %[print] 
    by
        RBI [. NJunkCode]
end function

% 添加第三个junk code 3
function addJunk3
    replace [repeat block_item]
        RBI [repeat block_item]
    import JunkNum [number]
    where 
        JunkNum [= 6]
    construct JunkCode [block_item]
        0
    construct NJunkCode [block_item]
        JunkCode [createJunkCodeCase3] %[print] 
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
            y=2;
            x=1;
            for(x=0;x<20;x++)
            {
                y+=x;
                y*=2;
            }
            if(y>30)
                return y;
        }
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
    by 
        NBI
end function

% 这里创造第三个junk code 
function createJunkCodeCase3
    replace [block_item]
        BI [block_item]
    construct NBI [block_item]
         if (1)
        {
            int m=0;
            int n=0;
            m=m*n+n-m+n*2;
         }
    by 
        NBI
end function
% 添加垃圾代码的操作到这里结束
% ----------------------------------------------------------------


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

% ----------------------------------------------------------------
% 这里进行常量的修改操作
% 这里完成浮点型常量的修改 比如将 20 修改成8+3*4+0.0
% 这里对每个常量的修改是固定的，因为Txl 不同动态解析
function changeFloatConstant
    replace [compound_statement_body]
        St [compound_statement_body]
    construct FloatConstant [repeat floating_constant]
        _ [^ St]
    construct NewFloatConstant [repeat floating_constant]
        _ [createNewFloatConstant each FloatConstant]
    by  
        St [replaceFloatConstant each FloatConstant NewFloatConstant]
end function

% 常量的替换操作
function replaceFloatConstant IC [floating_constant] NIC [floating_constant]
    replace [compound_statement_body]
        St [compound_statement_body]
    by
        St [$ IC NIC]
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
    by 
        NewFC
end function

%这里进行整型常量的修改操作，比如将20 修改成 (10+1+2*5-1) 这里的+1+2*5-1 
% 是固定的，因为Txl 不能动态解析变化
function changeIntegerConstant
    replace [compound_statement_body]
        St [compound_statement_body]
    construct IntConstant [repeat integer_constant]
        _ [^ St]
    construct NewIntConstant [repeat integer_constant]
        _ [createNewIntConstant each IntConstant]
    by  
        St [replaceIntConstant each IntConstant NewIntConstant]
end function

% 常量的替换操作
function replaceIntConstant IC [integer_constant] NIC [integer_constant]
    replace [compound_statement_body]
        St [compound_statement_body]
    by
        St [$ IC NIC]
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
    by 
        NewIC 
end function
% 这里完成常量的修改操作
% ----------------------------------------------------------------


% ----------------------------------------------------------------
% 增量操作的转换操作 +=,-+,*=,/=,%=,<<=,>>=,&=,^=,|=
function changeIncrementalAssignment
    replace [statement]
        St [statement]
    construct RES [repeat expression_statement]
        _ [^ St]
    construct NewRES [repeat expression_statement]
        _ [createNewIncrementAssignment each RES]
    by 
        St [replaceExpressionStatement each RES NewRES]
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
    by 
        NewES
end function
% 完成增量操作的转换
% ----------------------------------------------------------------



% ----------------------------------------------------------------
% 这里修改 i++ , i-- 在expression里面的这种自增，自减运算
% 这里修改 ++i， expression 里面的这种自增，自减操作
function changeSelfOperatorExpression_temp 
    replace [statement]
        St [statement]
    construct IOE [repeat expression]
        _ [^ St] %[message "expression is:"] [print]
    construct NewIOE [repeat expression]
        _ [changeExpressionSelfOperator each IOE]   % 这里一定要处理表达式的对应关系，这里进行替换的变量对之间一定要严格对应
    by 
        St [replaceSelfOperatorExpression each IOE NewIOE]
end function

% 进行expression 的替换操作
function replaceSelfOperatorExpression E [expression] NE [expression]
    replace [compound_statement_body]
        St [compound_statement_body]
    by 
        St [$ E NE]
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
    replace [compound_statement_body]
        St [compound_statement_body]
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
    by 
        NewE
end function 
% 这里完成自操作运算的修改
% ----------------------------------------------------------------

% ----------------------------------------------------------------
% 这里修改逻辑表达式   a < b --> b > a
%                    a > b --> b < a 
%                    a <= b --> b >= a
%                    a >= b --> b <= a
%                    a ==b  --> a != b
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
    construct OutSE1 [shift_expression]
        SE1 %[putp "the SE1 is :%"]
    construct Expression [expression]
        IOE [$ '!= '==]
    construct ListExpression [list expression]
        Expression
    construct PE [parenthesized_expression]
        '( ListExpression ')
    construct NewIOE [inclusive_OR_expression]
        '! PE
    by 
        NewIOE 
end function
% 这里逻辑表达式的修改完成，这里完成逻辑表达式的修改操作
% ----------------------------------------------------------------


% ----------------------------------------------------------------
% 这里修改逻辑表达式 a<b 修改成 !(a>=b)
%                  a>b 修改成  !(a>=b)
%                  a==b 修改成 !(a!=b)
%function changeLogicalOperator
%    replace [statement]
%        St [statement]
%    construct RIOE [repeat inclusive_OR_expression]
%        _ [^ St] %[putp "the IOE is:%"]
%    construct NewIOE [repeat inclusive_OR_expression]
%        _ [changeInclusiveORExpression each RIOE]
%    by  
%        St [replaceInclusiveORExpression each RIOE NewIOE]
%end function 

% 这里替换conditon 里面的 inclusive_OR_expression 
function replaceInclusiveORExpression OldIOE [inclusive_OR_expression] NewIOE [inclusive_OR_expression]
    replace [compound_statement_body]
        C [compound_statement_body]
    by 
        C [$ OldIOE NewIOE]
end function

% 这里将 > 变成  !( <= ) 这种形式
function changeInclusiveORExpression IOE [inclusive_OR_expression]
    replace [repeat inclusive_OR_expression]
        RIOE [repeat inclusive_OR_expression]
    construct OutIOE [inclusive_OR_expression]
        IOE %[message "the original IOE is:"][print] [message ""]
    construct NewIOE [inclusive_OR_expression]
        IOE [createNewIOEBlow] [createNewIOEGreat] [createNewIoEqual]
    by 
       RIOE [. NewIOE]
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
        IOE [$ '== '!=]
    construct ListExpression [list expression]
        Expression
    construct PE [parenthesized_expression]
        '( ListExpression ')
    construct NewIOE [inclusive_OR_expression]
        '! PE
    export IsEqual [number]
        1
    by 
        NewIOE 
end function

% 这里修改 < 这种逻辑
function createNewIOEBlow
    replace [inclusive_OR_expression]
        IOE [inclusive_OR_expression]
    
    deconstruct IOE
        SE1 [shift_expression] '< SE2 [shift_expression]
    construct OutSE1 [shift_expression]
        SE1 %[putp "the SE1 is :%"]
    construct Expression [expression]
        IOE [$ '< '>=]
    construct ListExpression [list expression]
        Expression
    construct PE [parenthesized_expression]
        '( ListExpression ')
    construct NewIOE [inclusive_OR_expression]
        '! PE
    by 
        NewIOE 
end function

% 这里修改 > 这种逻辑
function createNewIOEGreat
    replace [inclusive_OR_expression]
        IOE [inclusive_OR_expression]
    deconstruct IOE
        SE1 [shift_expression] '> SE2 [shift_expression]
    construct OutSE1 [shift_expression]
        SE1 %[putp "the SE1 is :%"]
    construct Expression [expression]
        IOE [$ '> '<=]
    construct ListExpression [list expression]
        Expression
    construct PE [parenthesized_expression]
        '( ListExpression ')
    construct NewIOE [inclusive_OR_expression]
        '! PE
    by 
        NewIOE 
end function
% 这里完成逻辑表达式的修改操作
% ----------------------------------------------------------------

% ----------------------------------------------------------------
% 这里处理从do...while 循环到 while 循环的转换
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
function changeSwitchStatement Switch [switch_statement]
    replace [repeat statement]
        RS [repeat statement]
    construct S [statement]
        Switch
    construct NS [statement]
        S [newSwitchStatement]
    by 
        RS [. NS]
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
    construct OutEx[expression_list]
        Ex %[putp "the Ex is : %"]
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
        IfStatement %[print]
    by 
        IfStatement
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
        _ [length BlockItem]  %[print]
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
    %where 
    %    CaseIndex [= 1]
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
% switch 转换成 if else if 语句结束
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
    by 
        NewE
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
    
    construct OptE[opt else_statement]
        NewEIf %[putp "NewEIf is :%"]
    by
        NewEIf
end function
% if ... else if ...   eles...   到    if ... else ... 转换完成
% ----------------------------------------------------------------

% ----------------------while------------------------------------------
% 这里将 while 循环转换成for 循环
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
        S [dealBlockEmbedStatement] [dealBlockEmbedCompoundStatement] 
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


% -----------------------for-----------------------------------------
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
        S2 [dealBlockEmbedStatement] [dealBlockEmbedCompoundStatement] %[putp "S2Embed is : %"]
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
        S2 [dealBlockEmbedStatement]  [dealBlockEmbedCompoundStatement]
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
    construct whileStatement [while_statement]
      '{  OptI 'while '( I ') NewS2S '}
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
% for 循环到while 循环转换结束
%----------------------------for------------------------------------

% ----------------------------------------------------------------
% 这里存放一些通用的工具函数
% 这个处理嵌入代码是 sub_statement这种类型的数据
function dealBlockEmbedCompoundStatement
    replace [sub_statement]
        BI [compound_statement]
    construct NewBI [compound_statement]
        BI[changeCompound]
    by 
        BI
end function

% 这里处理嵌入语句是 statement类型的数据
function dealBlockEmbedStatement
    replace [sub_statement]
        BI [statement]
    by 
        BI %[changeStatement]
end function

% 通用的工具函数
% ----------------------------------------------------------------
