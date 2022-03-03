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
% 这里是变量转换时候的需要
redefine declaration
    ... |  [repeat declaration] '; [NL] [repeat init_declarator] 
end redefine

redefine init_declarator
    ... | [init_declarator] '; [NL]
end redefine

% 这之前都是重新定义的结构
% ----------------------------------------------------------------


%----------------------------------------------------------------
% 这里是主函数的开始

function main
    replace [program]
        P [program]
    export RandomPath [stringlit]
        "../CountResult/12Define.random"
    import RandomPath 
    export RandomChange [repeat number]
      _ [readRandomFile RandomPath] 
    export CountChangedDecl [number]
        0
    by 
        P  [changeCompoundStatementBody] 
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
    import RandomPath [stringlit]
    export RandomChange [repeat number]
      _ [readRandomFile RandomPath] 
    export CountChangedDecl [number]
        0
    by 
    '{ 
       CSB 
    '} OS
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
% main 函数到这里结束
% ----------------------------------------------------------------

% ----------------------------------------------------------------
% 这里是第一种情况，需要重复调用处理的
rule changeCompoundStatementBody
    replace  $[compound_statement_body]
        Dos [repeat block_item]
    construct NewDos[repeat block_item]
        Dos [changeDeclarations]
    construct NDos [repeat block_item]
        _ [removeNullDeclaration each NewDos] % [message "THE RESULT IS:"][print]
    by 
        NDos 
end rule

% 这里对definition 进行修改
rule changeDeclarations 
    replace $[block_item]
        De [declaration]
    construct NewDe [declaration]
        De [changeDeclaration]  % 这里进行变量声明的变化，将一条语句中连续的变量声明变成单个的变量声明语句的形式。
    by 
        NewDe 
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

%----------------------------------------------------------------
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
        OutDe [judgeIdisDeal Gets] 
    import containId 
    where 
        containId [= 0] 
    construct OutDE [declaration]
        De %[print]
    deconstruct De
        DSs [declaration_specifiers]
        OIDL [opt init_declarator_list]  ';
    % 这里完成从连续定义的变量中取出单个变量的定义
    deconstruct DSs % 因为只有一个变量定义的地方存在两个 declaration_spefifier,所以解析会不成功
        TS [type_specifier] % 这里提取出变量的定义
    % 这里提取出当前定义中所有定义的变量
    deconstruct OIDL 
        LID [list init_declarator]
    construct OutLID [list init_declarator]
        LID %[putp "THE LID IS:%"] 
    % 这里提取出没有初始化的id ，类似int a,b=0;中的a
    construct RDS [repeat declaration_specifier]
        _ [createDeclarationSpec each LID]  %[putp "RDS:%"] 
    % 这里提取出 int a,b=0 ; 中的 b ，这里只是为了测试，然后输出而已
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
    % 这里处理 int a[100], *p; 数组和指针存在的情况，这里只是为了测试，然后输出而已
    construct NRDe [repeat declaration]
        _ [createRepeatDeclaration1 each RID] %[putp "NRDE IS:%"]
    % 这里创建新的int a; 等内容
    construct NewRDe [repeat declaration]
        RDe [createRepeatDeclaration1 each RID] %[putp "NewRDE IS:%"]
    %这里开始提取出变量可能的初始化操作
    construct Init [repeat init_declarator]
        _ [createInitDeclarator each LID] %[putp "InIt IS:%"]
    construct LenNewRDe [number]
        _ [length NewRDe]
    where
        LenNewRDe [> 0]
    construct NewDe [declaration]
       NewRDe '; Init %[message ""][message ""]
    import CountChangedDecl [number]
    export CountChangedDecl
        CountChangedDecl [+ 1]
    import CountChangedDecl
    import RandomChange [repeat number]
    construct ChangeNum [repeat number]
        RandomChange [select CountChangedDecl CountChangedDecl]
    deconstruct ChangeNum 
        Changed [number]
    construct ChangedDe [declaration]
        De [isNeedChanged NewDe Changed] 
    by 
        ChangedDe
end function

% 这里判断当前id 是否已经在处理的id 里面
function judgeIdisDeal Id [id]
    replace *[id]
        Id
    export containId [number]
        1
    construct OutId [id]
        Id %[print]
    by
        Id 
end function

% 这里判断是否需要改变
function isNeedChanged NewDe [declaration] Changed [number]
    replace [declaration]
        De [declaration]
    where
        Changed [= 1] 
    by
        NewDe
end function 

% 这里处理连续定义中有 int a[100],i  a[100] 这种形式的定义
% 还要考虑 int a[100]={0},i; 这种形式
% 还要考虑 int *a=&j,i; 这种形式
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
% 这里完成变量声明的格式化输出操作
% ----------------------------------------------------------------

