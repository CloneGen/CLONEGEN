% version 20200924 这个文件的作用是给所有的变量重命名
% 提取处所有的变量名和函数名并实现重命名操作

% 这里定义id 之间的映射关系
define id_map 
    [id] '- [id]
end define



include "c.grm"

redefine upper_macro_name
  ... | [id]
end redefine 

function main
  replace [program] 
    P [program]
  % 这里设置全局路径,使用的时候需要修改这个路径，这里表示随机变换的文件名
  export RandomPath [stringlit]
    "../CountResult/1Rename.random"
  by
    P [extractVarandFuncNameAndRename]  
end function 

function extractVarandFuncNameAndRename
    replace [program]
      P [program]
    % 提取全局定义的变量 , 变量的提取情况1，变量是declarator
    construct AllVarGlobal [repeat declarator]
      _ [^ P] 
    construct PureAllVarGlobal [repeat id]
      _ [^ AllVarGlobal]% [message "THE PUREALLVARGLOBAL"][print]
    
    % 提取定义的局部变量， 变量的提取情况2,变量是simple_type_name
    construct AllVarLocal [repeat typedef_name]
      _ [^ P] %[print]
    construct PureAllVarLocal [repeat id]
      _ [^ AllVarLocal] %[print]
    
    % 全部变变量
    construct AllVar [repeat id]
    _[. PureAllVarGlobal] [. PureAllVarLocal] [sortId]  

    % 变量去重操作，获取独一无二的变量
    construct UniqueAllVar [repeat id]
      AllVar [select 1 1] [deduplication AllVar] % [message "ALL UNIQUE ID IS:"][print]
    import RandomPath [stringlit]
    construct RandomChange [repeat number]
      _ [readRandomFile RandomPath] 
    construct RandomName[repeat id]
      UniqueAllVar [write "../Txl/id.txt"]
      [system "python ../Txl/RandomName.py"]
      [read "../Txl/id.txt"]
      [system "rm -rf ../Txl/id.txt"]
      %[message "random id is:"]%[print]
    construct IdMapChangedId [repeat id_map]
        _ [createMapId each UniqueAllVar RandomName] %[message "THE ID_MAP IS:"][print]
    %construct ChangedUniqueAllVar [repeat id]
    %    _ [changedId each UniqueAllVar RandomChange]  %[message "ALL NEW ID IS:"][print]
    construct ChangedUniqueAllVar [repeat id]
        _ [changedIdByMap each IdMapChangedId RandomChange]  %[message "ALL NEW ID IS:"][print]
    export IdMapChangedId
    construct UID [repeat upper_macro_name]
      _ [^ P]%[print]
    export UniqueUID [repeat upper_macro_name]
      UID [select 1 1][deduplicationUID UID] %[print]
    % 这里提取出当前函数中所有变化的id 
    %construct AllId [repeat id]
    %    _ [^ P] 
    %export UniqueAllVar 
    %construct NAllId [repeat id]
    %    _ [intersectionId each AllId] [message "ALL CHANGED ID IS:"][print]
    % 这里读取对应的随机变换的内容
      %[message "THE RANDOM CHANGED IS:"][print]
    %construct ChangedNAllId [repeat id]
    %    _ [fromIdMapFindIdChanged each NAllId RandomChange] [message "ALL CHANGED ID IS:"][print]
    % 替换变量名 
    by 
      P  [replaceRename each UniqueAllVar ChangedUniqueAllVar]
end function

% 这里进行id的变换
function changedId Id [id] Changed [number]
    replace [repeat id]
      RID [repeat id]
    construct NId [id]
      Id[!]
    construct ChangedId [id]
      Id [isIdNeedChanged NId Changed]
    by
      RID [. ChangedId]
end function 

% 这里使用id_map 进行函数替换
function changedIdByMap IdMap [id_map] Changed [number]
    replace [repeat id]
      RID [repeat id]
    deconstruct IdMap
      Id [id] '- NId [id]
    construct ChangedId [id]
      Id [isIdNeedChanged NId Changed]
    by 
      RID [. ChangedId]
end function

% 这里进行变换后的函数名替换操作
function replaceRename Old [id] New [id]
    replace [program]
      P [program]
    construct Main [id]
      'main
    where not
      Old [= Main]
    construct Inline [id]
      'inline
    where not
      Old [= Inline]
    construct Gets [id]
      'gets
    where not
      Old [= Gets]
    construct OutOld [id]
      Old %[putp "the old is:%"]
    construct OutNew [id]
      New %[putp "the new is:%"][message ""]
    export OldID [id]
      Old
    export NewID [id]
      New
    import UniqueUID [repeat upper_macro_name]
    construct NewP [program]
      P [replaceUpperID each UniqueUID]
    by 
      NewP [$ Old New]
end function 


function replaceUpperID UID [upper_macro_name]
    replace [program]
      P [program]
    import OldID [id]
    import NewID [id]
    construct NewOld [charlit]
      _ [quote UID]
    construct UOld [id]
      _ [parse NewOld]
    where
      UOld [= OldID]
    construct NewUID [upper_macro_name]
      NewID
    %construct NewIDP [upper_macro_name]
    %  NewUID
    by 
      P [$ UID NewUID] 
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

% 这里从id_map里面找到原来的id和修改之后的id 之间的映射关系
function fromIdMapFindIdChanged Id [id] Changed [number]
    replace [repeat id]
      RID [repeat id]
    import IdMapChangedId [repeat id_map]
    deconstruct *[id_map]IdMapChangedId
      Id '- NId [id]
    construct ChangedId [id]
      Id [isIdNeedChanged NId Changed]
    by 
      RID [. ChangedId]
end function

% 这里来判断当前id 是否需要变换,这里根据生成的随机数进行随机变换
function isIdNeedChanged NId [id] Changed [number]
    replace [id]
      Id [id]
    where 
      Changed [= 1]
    by 
      NId
end function

% 这里创建id_map,创建原始的独一无二的id 和 修改之后的id之间的映射关系
function createMapId Id [id] NId [id]
    replace [repeat id_map]
      RIdMap [repeat id_map]
    construct IdMap [id_map]
      Id '- NId
    construct OutIdMap [id_map]
      IdMap %[print]
    by 
      RIdMap [. IdMap]
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


% 变量去重操作
function deduplicationUID AVar2 [repeat upper_macro_name]
  replace [repeat upper_macro_name]
    AVar1 [repeat upper_macro_name] 
  deconstruct AVar1
    V1 [upper_macro_name] Rest1 [repeat upper_macro_name]
  deconstruct AVar2
    V2 [upper_macro_name]  Rest2 [repeat upper_macro_name] 
  construct V [repeat upper_macro_name]
    _ [. V1] 
  construct VV[repeat upper_macro_name]  
    V [isIdEqualUID V2] [isEqualSuccssUID V]  %
  by
    VV [. AVar1] [deduplicationUID Rest2] 
end function  

% 这里判断替换是否成功，如果没有进行任何替换的话，则将当前数据替换为空，不进行任何操作
function isEqualSuccssUID AVar2 [repeat upper_macro_name]
  replace  [repeat upper_macro_name]
    AVar1 [repeat upper_macro_name]
  deconstruct AVar1
    V1 [upper_macro_name] Rest1 [repeat upper_macro_name]
  deconstruct AVar2
    V2 [upper_macro_name]  Rest2 [repeat upper_macro_name] 
  where
    V1 [= V2]
  %相等表示没有替换成功，表示将其替换为空，不进行任何操作
  by 
    %none
end function

function isIdEqualUID V2 [upper_macro_name] 
  replace [repeat upper_macro_name]
    V [repeat upper_macro_name]
  deconstruct V 
    V1 [upper_macro_name] Rest1 [repeat upper_macro_name]
  where 
    V1[~= V2]
  construct V12 [repeat upper_macro_name]
    _ [. V2]
  by 
    V12
end function