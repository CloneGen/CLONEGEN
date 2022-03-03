% 这个文件的主要的功能是实现交换代码顺序
% 这里分为两步来实现
% 1. 交换声明语句
% 2. 交换statement 分开来考虑

include "c.grm"

% ----------------------------------------------------------------
% 这里表示相应的主函数，这里表示主函数的开始

function main
    replace [program]
        P [program]
    export RandomPath [stringlit]
        "../CountResult/14Exchange.random"
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
    % 这里提取出所有全局变量
    construct GlobalID [repeat id]  
        _ [extractGlobalID each RFDOD]  %[message "THE GLOBAL ID IS:"][print]
    export GlobalID 
    % 这里提取出所有函数名
    construct GlobalFuncName [repeat id]
        _ [extractFuncName each RFDOD] %[message "THE FUNCNAME ID IS:"][print][message "----------"]
    export GlobalFuncName
    % 这里对所有的函数进行处理,这里开始进行交换代码顺序的操作
    construct NewRFD [repeat function_definition]
        _ [changeFunctionDefinition each RFDOD] 
    by 
        %NewRFD 
        P [changeProgram]
end function

% main 函数到这里结束
% ----------------------------------------------------------------

% ----------------------------------------------------------------
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
% 取出全局变量的操作到这里结束
%----------------------------------------------------------------

% ----------------------------------------------------------------
% 这里进行每个函数的操作
% 这里进行修改之后的函数替换操作
function replaceFunc FDOD [function_definition] NewRFD [function_definition]
    replace *[function_definition]
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

% 这里需要进行简单的修改操作，这里进行代码位置交换的时候存在一定的问题
% 这里开始进行交换函数位置的操作
function changeFunctionDefinition FDOD [function_definition_or_declaration]
    replace [repeat function_definition]
        RFuncDefine [repeat function_definition]   
    deconstruct FDOD 
        FD [function_definition]
    construct NewFD [function_definition]
        FD 
    by 
        RFuncDefine [. NewFD]
end function

% 对函数进行修改操作, 对代码顺序的交换没法实现精确的定量操作，只能保证大概的操作
function changeProgram
    replace [program]
       P [program]
    construct NFuncBody [repeat compound_statement]
        _ [^ P] %[print]
    construct NewFcuncBody [repeat compound_statement]
        _ [filterFuncbody each NFuncBody]
    import RandomPath [stringlit]
    export RandomChange [repeat number]
      _ [readRandomFile RandomPath] %[print]
    import RandomChange
    construct TestRandomChange [repeat number]
        RandomChange %[select 1 0] [putp "THE TEST IS:%"]
    export CountExchangedCodeChanged[number]
        0
    construct NNFuncBody [repeat compound_statement]
        _ [changeCompound each NFuncBody] %[print]
    import CountExchangedCodeChanged
    construct OutCountExchangedCodeChanged [number]
        CountExchangedCodeChanged %[message "THE EXCHANGE CODE IS:"][print]
    by
       P [replaceCompoundStatement each NewFcuncBody NNFuncBody]
end function

% 这里进行简单的过滤操作，确保两个是一样的
function filterFuncbody CS [compound_statement]
    replace [repeat compound_statement]
        RCS [repeat compound_statement]
    deconstruct CS
    '{ 
       CSB [compound_statement_body] 
    '} OS [opt ';]  
    by 
        RCS [. CS]   
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

function replaceCompoundStatement FB [compound_statement] NFB [compound_statement]
    replace *[compound_statement]
        FB
    by 
        NFB
end function

% 会循环调用这个函数 这里一个函数里面可能嵌套多个函数
function changeCompound CS [compound_statement]
    replace [repeat compound_statement]
        RCS [repeat compound_statement]
    
    construct OutCS [compound_statement]
        CS %[print][message "-------------"]
    deconstruct CS
    '{ 
       CSB [compound_statement_body] 
    '} OS [opt ';]  
    construct NCSB [compound_statement_body]
        CSB [changeCompoundStatementBody]
    construct NCS [compound_statement]
        '{ 
           NCSB
        '} OS
    construct OutNCS [compound_statement]
        NCS% [print][message "------------------------"][message ""]
    by 
        RCS [. NCS]   
end function

% 对函数的处理到这里结束
% ----------------------------------------------------------------


% ----------------------------------------------------------------
% 这里是实现代码交换的主要函数
% 这里会对代码里面的statement 进行循环进行处理，这里交换代码顺序以CompoundStatement为单位进行解析
function changeCompoundStatementBody
    %skipping [declaration]
    replace  [compound_statement_body]
        Dos [repeat block_item]
    export Dos
    construct OutDos [repeat block_item]
        Dos %[print][message "----------"]
    % 这里构造排序的declaration
    construct RDecl [repeat declaration]
        _ [extractBlockItemDecl each Dos] %[message "THE DECLARATION IS:"][print]
    construct OutRDecl [repeat declaration]
        RDecl %[print][message "----------"]
   % 这里交换代码声明语句的顺序。
    construct NRDecl [repeat declaration]
        _ [changeDeclarationOrder2 RDecl]
    construct OutRDecl1 [repeat declaration]
        RDecl %[print][message "----------"]
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
    construct OutNDos [repeat block_item]
        NDos %[print] [message "----------"]
    by 
        NDos 
end function
% 对代码进行主要交换的函数到这里结束
% ----------------------------------------------------------------

% ----------------------------------------------------------------
% 这里交换代码声明语句，另外一种实现方式，和交换statment 的实现方式差不多
% 考虑两个declaration 之间有没有依赖关系，如果没有依赖关系则可以交换两者的顺序
function changeDeclarationOrder2 RDecls [repeat declaration]
    replace [repeat declaration]
        RDecl [repeat declaration]
    construct NRdecl [repeat declaration]
        _ [selectDeclaration1 each RDecls]
    construct NNRdecl [repeat declaration]
        _ [reverseOrderDecl each NRdecl]
    by 
        NNRdecl
end function

% 这里实现declaration 序列的逆序操作
function reverseOrderDecl Decl [declaration]
    replace [repeat declaration]
        RDecl [repeat declaration]
    by 
        _ [. Decl][. RDecl]
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
    construct ChangedIndex [number]
        NewIndex [setCountExchangedCodeChanged]
    construct RDeclBefore [repeat declaration]
        RDecl [select 1 ChangedIndex]
    construct  NIndexAfter [number]
        ChangedIndex [+ 1]
    construct RDeclAfter [repeat declaration]
        RDecl [select NIndexAfter 9999]
    construct NewRDecl [repeat declaration]
        _ [. RDeclBefore] [. Decl] [. RDeclAfter]
    by
        NewRDecl 
end function

% 这里定位当前decl 应该插入的位置，进行插入的定位操作
function locateAffectedDeclaration Decl [declaration]
    replace [number]
        Index [number]
    import DeclGlobalAffected [number]
    where
        DeclGlobalAffected [= 0] 
    import GlobalDecl [declaration]
    % 这里判断是否是结构体，如果是结构体，则不需要交换顺序
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
        _ [quote UMN]
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
        PrintfStatement %[message "THE PRINTF STATEMENT IS:"][print]
    construct OutRBI [repeat block_item]
        RBI %[message "THE RBI STATEMENT IS:"][print]
    construct Index [number]
        LenRBI [setLastIndex RBI] %[putp "THE INEDX IS:%"]
    construct BeforeBI [repeat block_item]
        RBI [select 1 Index]
    construct LastIndex [number]
        Index [+ 1] %[putp "THE LAST INDEX IS:%"]
    construct LastBlockItem [repeat block_item]
        RBI [select LastIndex 9999] %[putp "THE LAST STATEMENT IS:%"] [message "--------------"]
    construct NRBI [repeat block_item]
        _ [. BeforeBI] [. PrintfStatement] [. LastBlockItem]
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
        _ [extractPrintfDecl each RDecl] %[message "THE PRINTF DECL IS:"][print][message "----------"]
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

% 这里提取出declaration 语句，提取出Printf 也相当于改变了代码顺序
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
    import CountExchangedCodeChanged[number]
    export CountExchangedCodeChanged
        CountExchangedCodeChanged [+ 1]
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
        _ [selectStatement each RStatement] % 这里将statement 插入适当的位置
    construct RNRS [repeat statement]
        _ [reverseOrderStatement each NRS] %这里是逆序加入的，所以这里将statement逆序排列
    by
        RNRS
end function  

% 这个函数将statement 加入到NRS 适当的位置
function selectStatement St [statement]
    replace [repeat statement]
        RSt [repeat statement]
    construct OutSt [statement]
        St %[putp "THE STATEMENT IS:%"]
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
        _ [createSwitchLabelStatement RSt St]
    % 这里实现对上面特殊情况以外的其它语句的操作
    construct RSt1 [repeat statement]
        _ [createOrdinalStatement RSt St] 
    construct NewRSt [repeat statement]
        _ [. RSt1] [. RSt4][. RSt3] [. RSt2] [. Rst5]
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
        St %[print][message "----------"] 
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
        NewRSt %[print][message "----------"] 
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
        NewRSt %[print][message "----------"] 
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
        Index [locateTheAffectedStatement each RSt] %[message "THE INDEX IS:"][print]
    construct ChangedIndex  [number]
        NewIndex [setCountExchangedCodeChanged]
    construct RStBefore [repeat statement]
        RSt [select 1 ChangedIndex]
    construct NewIndexPlusOne [number]
        ChangedIndex [+ 1]
    construct RStAfter [repeat statement]
        RSt [select NewIndexPlusOne 99999]
    construct NewRSt [repeat statement] 
        _ [. RStBefore] [. St] [. RStAfter]
    by
        NewRSt
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
    import CountExchangedCodeChanged
    import RandomChange [repeat number]
    construct ChangeNum [repeat number]
        RandomChange [select CountExchangedCodeChanged CountExchangedCodeChanged]
    deconstruct ChangeNum 
        Changed [number]
    construct ChangedIndex [number]
        Index [isNddeChanged Changed] 
    by 
        ChangedIndex
end function

% 这里判断是否需要改变
function isNddeChanged Changed [number]
    replace [number]
        Index [number]
    where 
        Changed [= 0]
    by 
      0
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
        St %[print]
    construct OutRst [statement]
        RSt %[print]
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
    by
        _ [. ST][. RS]
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
    
% 这里对id 进行排序操作
rule sortId
  replace [repeat id]
    N1 [id] N2 [id] Rest [repeat id]
  where
    N1 [> N2]
  by
    N2 N1 Rest
end rule

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

% 这里判断两个id 是否相等
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


% 这里判断当前id 是否在已经处理的id 里面
function judgeIdisDeal Id [id]
    match *[repeat id]
        Id Other[repeat id]
    construct OutId [id]
        Id %[putp "THE MATCH ID IS:%"]
    export containId [number]
        1
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