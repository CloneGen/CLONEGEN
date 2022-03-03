% Txl v10.8 (7.5.20) (c) 1988-2020 Queen's University at Kingston
% statements 
% 
% version 20200924
% 这个文件的主要功能是实现代码statement , expression 等自身发生的变化

include "c.grm"
% 这里主要完成对常量的修改操作

% ----------------------------------------------------------------
% 这里为了转换的需要重新定义了部分结构， 这里是一些redefine结构。
% 这里在某些重定义中加入 '; 的作用是因为重定义变量中可能会产生的冲突，加入'; 可以起到消除冲突的作用

% 这里重新定义是为了对整型常量进行修改
redefine integer_constant
    ... | '( [number] '+ [number] '+ [number]') 
        | '( [number] '- [number] ')

end redefine


% 这里重新定义是对浮点型常量的修改操作
redefine floating_constant
    ... | '( [floatnumber] '+ 3 '* 4 '+ 0.0 '- 12 ')
        | '( [floatnumber] '- [floatnumber] ')
end redefine
% 这之前都是重新定义的结构
% ----------------------------------------------------------------


%----------------------------------------------------------------
% 这里是主函数的开始

function main
    replace [program]
        P [program]
    export RandomPath [stringlit]
        "../CountResult/11Constant.random"
    by 
        P  [changeConstant] 
end function

% 主函数到这里结束
% ---------------------------------------------------------------


% ---------------------------------------------------------------
% 第 11 种情况完成对常量的修改操作


% 第九种情况，对常量的展开，这里做了对整型，浮点型变量的展开
function changeConstant
    replace [program]
        St [program]
    import RandomPath [stringlit]
    export RandomChange [repeat number]
      _ [readRandomFile RandomPath] 
    export CountConstant [number]
        0
    by
        St [changeIntegerConstant] [changeFloatConstant]
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
        St [replaceFloatConstant each FloatConstant NewFloatConstant]
end function

% 常量的替换操作
function replaceFloatConstant IC [floating_constant] NIC [floating_constant]
    replace *[floating_constant]
        IC
    by
        NIC
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
    construct RICN [repeat floatnumber]
        _ [. F]
    construct NewRandomICS [repeat floatnumber]
        RICN [write "../Txl/number.txt"]
        [system "python ../Txl/RandomNumberFloat.py"]
        [read "../Txl/number.txt"]
        [system "rm -rf ../Txl/number.txt"]
    construct oneNumber[repeat floatnumber]
        NewRandomICS [select 1 1] %[print]
    construct twoNumber[repeat floatnumber]
        NewRandomICS [select 2 2] %[print]
    deconstruct oneNumber
        one [floatnumber]
    deconstruct twoNumber
        two [floatnumber]
    construct NewRandomFC [floating_constant]
        '( one '- two ') 
    construct outFloat[floating_constant]
        NewRandomFC %[print]
    %construct NewFC [floating_constant]
    %    '( F '+ 3 '* 4 '+ 0.0 '- 12 ')
    import CountConstant [number]
    export CountConstant 
        CountConstant [+ 1]
    import CountConstant
    import RandomChange [repeat number]
    construct ChangeNum [repeat number]
        RandomChange [select CountConstant CountConstant]
    deconstruct ChangeNum 
        Changed [number] 
    construct outChangNum[number]
        Changed %[print]
    construct ChangedFC [floating_constant]
        FC [isFNddeChanged NewRandomFC Changed] %[print]
    by 
        ChangedFC
end function

% 这里判断是否需要改变
function isFNddeChanged NewFC [floating_constant] Changed [number]
    replace [floating_constant]
        FC [floating_constant]
    where
        Changed [= 1]
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
        St [replaceIntConstant each IntConstant NewIntConstant]
end function

% 常量的替换操作
function replaceIntConstant IC [integer_constant] NIC [integer_constant]
    replace *[integer_constant]
        IC
    by
        NIC
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
    construct RICN [repeat number]
        _ [. ICN]
    construct NewRandomICS [repeat number]
        RICN [write "../Txl/number.txt"]
        [system "python ../Txl/RandomNumberInt.py"]
        [read "../Txl/number.txt"]
        [system "rm -rf ../Txl/number.txt"]
    construct oneNumber[repeat number]
        NewRandomICS [select 1 1]  
    construct twoNumber[repeat number]
        NewRandomICS [select 2 2]  
    deconstruct oneNumber
        one[number]
    deconstruct twoNumber
        two[number]
    construct NewRandomIc [integer_constant]
        '( one '- two ')
    construct ICSubTen [number]
        ICN [- 10] %[print]
    construct ICDic2 [number]
        ICSubTen [- 2]
    %construct NewIC [integer_constant]
    %    '( ICDic2 '+ '10 '+ '2 ')
    import CountConstant [number]
    export CountConstant 
        CountConstant [+ 1]
    import CountConstant
    import RandomChange [repeat number]
    construct ChangeNum [repeat number]
        RandomChange [select CountConstant CountConstant]
    deconstruct ChangeNum 
        Changed [number]
    construct ChangedIC [integer_constant]
        IC [isINddeChanged NewRandomIc Changed] 
    by 
        ChangedIC
end function

% 这里判断是否需要改变
function isINddeChanged NewIC [integer_constant] Changed [number]
    replace [integer_constant]
        IC [integer_constant]
    where
        Changed [= 1]
    by 
        NewIC
end function
% 这里完成常量的修改操作
% ----------------------------------------------------------------