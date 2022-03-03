% Txl v10.8 (7.5.20) (c) 1988-2020 Queen's University at Kingston
% statements 
% 
% version 20200924
% 这里实现插入垃圾代码的操作

include "c.grm"
%include "extract_id.Txl" % 这主要是实现变量名和函数名重命名的功能

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
        "../CountResult/13JunkCode.random"
    by 
        P  [changeAddJunkCode] 
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
    construct Output [compound_statement_body]
        CSB 
    by 
    '{ 
       CSB 
    '} OS
end function
% 主函数到这里结束
% ---------------------------------------------------------------


% ---------------------------------------------------------------
% 这里实现第13 个操作向代码中插入垃圾代码
function changeAddJunkCode
    replace [program]
        St [program]
    export JunkNum [number]
        1
    export CountJunkNum [number]
        1
    import RandomPath [stringlit]
    export RandomChange [repeat number]
      _ [readRandomFile RandomPath] 
    construct CSB[repeat compound_statement_body]
        _ [^ St]% [print]
    construct PurCSB [repeat compound_statement_body]
        _ [filterCSB each CSB]
    construct NCSB [repeat compound_statement_body]
        _ [addJunkCode each CSB]% [print]
    by 
        St [replaceCompoundStatementBodyJunk each PurCSB NCSB]
end function

% 这里进行简单的过滤操作
function filterCSB CSB [compound_statement_body]
    replace [repeat compound_statement_body] 
        RCSB [repeat compound_statement_body]
    construct OutDos[compound_statement_body]
        CSB %[putp "compound_statement_body:"]
    deconstruct CSB
        Dos [repeat block_item]
    by 
        RCSB [. CSB] 
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

% 这里进行替换操作
function replaceCompoundStatementBodyJunk CSB[compound_statement_body] NCSB[compound_statement_body]
    replace *[compound_statement_body]
        CSB
    where not
        CSB [= NCSB]
    by 
        NCSB
end function

% ----------------------------------------------------------------
% 这里添加垃圾代码
function addJunkCode CSB [compound_statement_body]
    replace [repeat compound_statement_body] 
        RCSB [repeat compound_statement_body]
    construct OutDos[compound_statement_body]
        CSB %[putp "compound_statement_body"]
    deconstruct CSB
        Dos [repeat block_item]
    import JunkNum [number]
    % 在block_time 序列中间插入，这里获取一半的长度
    % 这里拆分成两部分
    construct DosLen [number]
        _ [length Dos] %[putp "len:"]    
    construct genRandom [number]
        _ [system "cat /proc/sys/kernel/random/uuid | cksum | awk -F ' ' '{print $1}' | cut -c 1-7 > ./random"] 
    construct InsertPlace [number]
        _ [read "./random"] 
    construct PrintInsetPlace [number]
        InsertPlace %[putp "InsertPlace:"] 
    construct DosLenHalf [number]
        %_ [length Dos] [/ 2] [round] %[print]
        InsertPlace [rem DosLen] %[putp "DosLenHalf:"]
    construct DosLenHalfPlusOne [number]
        DosLenHalf [+ 1] %[putp "rem+1:"] [message " "]
    construct DosFront[repeat block_item]
        Dos [select 1 DosLenHalf] %[print] [message "----------------------------------------------------------------"]
    construct DosRear [repeat block_item]
        Dos [select DosLenHalfPlusOne 9999]% [print] [message "----------------------------------------------------------------"]
    % 这里构造junk code1
    construct JunkCode [repeat block_item]
        _ [addJunk1][addJunk2][addJunk3][addJunk4][addJunk5][addJunk6] %[message "JUNK CODE:"][print] [message "----------------------------------------------------------------"]
    % 这里将junk code 加入 repeat block_item 中去构造新的block_item
    construct NDos [repeat block_item]
        _ [. DosFront] [. JunkCode] [. DosRear]
    construct NCSB [compound_statement_body]
        NDos
    import RandomChange [repeat number]
    import CountJunkNum [number]
    construct ChangeNum [repeat number]
        RandomChange [select CountJunkNum CountJunkNum]
    construct tempChange [number]
        0
    construct Changed [number] 
        tempChange [getChangeNum ChangeNum]
    construct ChangedJunkCode [compound_statement_body]
        CSB [isNddeChanged NCSB Changed]
    export JunkNum
        JunkNum [+ 1] [rem 2][+ 1]
    export CountJunkNum
        CountJunkNum[+1]
    by 
        RCSB [. ChangedJunkCode] 
end function 

function getChangeNum ChangeNum [repeat number]
    replace [number]
        N [number]
    deconstruct ChangeNum 
        Changed [number]
    by
        Changed
end function 
% 这里判断是否需要改变
function isNddeChanged NCSB [compound_statement_body] Changed [number]
    replace [compound_statement_body]
        CSB [compound_statement_body]
    where 
        Changed [= 1]
    by 
        NCSB
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
        JunkNum [= 2]
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
        JunkNum [= 3]
    construct JunkCode [block_item]
        0
    construct NJunkCode [block_item]
        JunkCode [createJunkCodeCase3] %[print] 
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
        JunkCode [createJunkCodeCase4] %[print] 
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
        JunkCode [createJunkCodeCase5] %[print] 
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
        JunkCode [createJunkCodeCase6] %[print] 
    by
        RBI [. NJunkCode]
end function

% 这里构造第一个junk code
%function createJunkCodeCase1
%    replace [block_item]
%        BI [block_item]
%    construct NBI [block_item]
%    {
%        int x=0,y;
%        if(!(x*(x-1) '% 2 == 0))
%        {
%            for(x=0;x<20;x++)
%            {
%                y+=x;
%            }
%            if(y>30)
%                return y;
%        }
%    }
%    by 
%        NBI
%end function

function createJunkCodeCase1
    replace [block_item]
        BI [block_item]
    construct NBI [block_item]
    {

        if(0){
            return 0;
        }
    }
    by 
        NBI
end function

% 这里创造第二个junk code
function createJunkCodeCase2
    replace [block_item]
        BI [block_item]
    construct NBI [block_item]
        {
             int x=0;
            if(!(x*(x-1) '% 2 == 0))
            {
                return 0;
            }
        }
    by 
        NBI
end function

% 这里创造第三个junk code 
function createJunkCodeCase3
    replace [block_item]
        BI [block_item]
    construct NBI [block_item]
    {
         int x=0,y;
        if(!(x*(x-1) '% 2 == 0))
        {
            int m=0;
            int n=0;
            m=m*n+n-m+n*2;
            return 0;
         }
    }
    by 
        NBI
end function

% 这里构造第 4 个junk code
function createJunkCodeCase4
    replace [block_item]
        BI [block_item]
    construct NBI [block_item]
    {
        int x=0,y;
        if(!(x*(x-1) '% 2 == 0))
        {
            float n=0.0;
            if(n>10)
                return;
            else
                n=0;
        }
    }
    by
        NBI
end function

% 第5 个junk code
function createJunkCodeCase5
    replace [block_item]
        BI [block_item]
    construct NBI [block_item]
    {
        int x=0,y;
        if(!(x*(x-1) '% 2 == 0))
        {
            int temp=0;
            while(temp<10)
            {
                printf("%d\n",temp);
                temp=temp+1;
                if(temp==9)
                    break;
            }    
        }
    }
    by
        NBI
end function

% 第6 个junk code 
function createJunkCodeCase6
    replace [block_item]
        BI [block_item]
    construct NBI [block_item]
    {
        int x=0,y;
        if(!(x*(x-1) '% 2 == 0))
        {
            double temp=0.0;
            if(temp==3)
                return 0;
        }
    }
    by
        NBI
end function
% 添加垃圾代码的操作到这里结束
% ----------------------------------------------------------------
