% Txl v10.8 (7.5.20) (c) 1988-2020 Queen's University at Kingston
% statements 
% 
% version 20200924
% 这个文件的主要功能是实现代码statement , expression 等自身发生的变化

include "c.grm"
% 这里实现删除代码，这里只实现了删除printf("test") 这种语句，因为printf 语句不会改变代码语义

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
        "../CountResult/15Delete.random"
    by 
        P  [changeDeleteCode] 
end function


% 主函数到这里结束
% ---------------------------------------------------------------


% ---------------------------------------------------------------
% 这里完成第15 个操作，代码删除，这里目前只考虑删除Printf 等不会影响代码语义的代码
% 第 15 种情况，删除代码
function changeDeleteCode
    replace [program]
        CST [program]
    by 
        CST [deletePrintfStatement]
end function

% 这里删除部分不影响原始代码逻辑的代码，这里只实现了对printf 代码的删除
function deletePrintfStatement 
    replace [program] 
        CSB [program]
    import RandomPath [stringlit]
    export RandomChange [repeat number]
      _ [readRandomFile RandomPath] 
    export CountDeleteCodeChanged [number]
        0
    % 第一种情况删除的代码在大括里面{},删除的在sub_statement的compound_statement里面
    construct AllCSB [repeat compound_statement_body]
        _ [^ CSB] 
    construct NewAllCSB [repeat compound_statement_body]
        _ [deleteNullCSB each AllCSB]
    construct NAllCSB [repeat compound_statement_body]
        _ [deletePrint each NewAllCSB]
    construct NCSB [program]
         %CSB [replaceCompoundStatementBody each AllCSB NAllCSB]
         CSB [replaceProgramState each NewAllCSB NAllCSB]
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

function deleteNullCSB CSB [compound_statement_body]    
    replace [repeat compound_statement_body]
        RCSB [repeat compound_statement_body]
    deconstruct CSB
        RBI [repeat block_item]
    by
        RCSB [. CSB]
end function  

function replaceProgramState Old [compound_statement_body] New [compound_statement_body]
    replace *[compound_statement_body]
        Old
    construct NulCSB [compound_statement_body]
    where not
        Old [= NulCSB] 
    where not
        Old [= New]
    construct OutOld [compound_statement_body]
        Old %[message "the compound_statement_body:"][print][message "---------------"][message ""]
    by 
        New
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
 
% 这里进行statemetn 的替换操作
function replaceStatementPrintf Old [statement] New [statement]
    replace *[statement]
        Old
    where not
        Old [= New] 
    by  
        New
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
        _ [^ RPostfisExtension] %[print]
    construct LenRAE [number]
        _ [length RAE] %[print]
    where 
        LenRAE [= 1]
    import CountDeleteCodeChanged [number]
    export CountDeleteCodeChanged 
        CountDeleteCodeChanged [+ 1] 
    import CountDeleteCodeChanged
    import RandomChange [repeat number]
    construct ChangeNum [repeat number]
        RandomChange [select CountDeleteCodeChanged CountDeleteCodeChanged]
    deconstruct ChangeNum 
        Changed [number]
    construct ChangedSt [statement]
        St [isNddeChanged Changed]  
    by
        ChangedSt
end function

% 这里判断是否需要进行相应的替换操作
function isNddeChanged Changed [number]
    replace [statement]
        St [statement]
    where 
        Changed [= 1] 
    by 
        ';
end function

% 这里完成compound_statement_bode 的替换操作
function replaceCompoundStatementBody Old[compound_statement_body] New[compound_statement_body]
    replace *[compound_statement_body]
        Old
    where not
        Old [= New] 
    by 
        New
end function

% 这里删除每个compound_statment中的printf 语句
function deletePrint CSB [compound_statement_body]
    replace [repeat compound_statement_body]
        RCSB [repeat compound_statement_body]
    deconstruct CSB 
        RBI [repeat block_item]  
    construct OutCSB [compound_statement_body]
        CSB% [print][message "-------------"][message ""]
    construct AllPrintf [repeat block_item]
        _ [isPrintfDelete each RBI] %[message "THE ALL PRINTF IS:"][print] [message ""]
    construct NAllPrintf [repeat block_item]
        AllPrintf [isStatementPrintf each RBI] [filterPrintfWithParam]
    export NAllPrintf
    construct TBI [block_item]
        ';
    construct NRBI [repeat block_item]
        _ [isdeleteBlockItem each RBI] [. TBI]
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
        string %[print]
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
    construct NewN [number]
        N [+ 1]
    import CountDeleteCodeChanged [number]
    export CountDeleteCodeChanged 
        CountDeleteCodeChanged [+ 1] 
    import CountDeleteCodeChanged
    import RandomChange [repeat number]
    construct ChangeNum [repeat number]
        RandomChange [select CountDeleteCodeChanged CountDeleteCodeChanged]
    deconstruct ChangeNum 
        Changed [number]
    construct ChangedN [number]
        N [isNddeChangedN NewN Changed]
    by 
        ChangedN    
end function

% 这里判断是否需要修改
function isNddeChangedN NewN [number] Changed [number]
    replace [number]
        N [number]
    where 
        Changed [= 1] 
    by 
        NewN
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
