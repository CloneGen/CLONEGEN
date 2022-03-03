% 这个文件主要是为了删除compound_statement里面的semicolon

include "c.grm"

function main
    replace [program]
        P [program]
    by
        P [removeSemicolon] 
end function

function removeSemicolon
    replace [program]
        P [program]
    construct CS [repeat compound_statement]
        _[^ P]
    construct NCS [repeat compound_statement]
        _ [deleteSemicolon each CS]
    construct LenCs [number]
        _ [length CS]%[print]
    construct LenNcs [number]
        _[length NCS]%[print]
    by 
        P [replaceCS each CS NCS]
end function

function replaceCS Old [compound_statement] New [compound_statement]
    replace *[compound_statement]
        Old
    by
        New
end function

function deleteSemicolon CS [compound_statement]
    replace [repeat compound_statement]
        RCS [repeat compound_statement]
    construct NCS [compound_statement]
        CS [isNeedChanged]
    by
        RCS [. NCS]
end function

% 这里判断是否需要改变
function isNeedChanged
    replace [compound_statement]
        CS [compound_statement]
    construct OutCs [compound_statement]
        CS %[message "the CS is:"][print][message "--------"] 
    deconstruct CS 
        '{
            CSB [compound_statement_body]
        '}
        Sei [opt ';]
    construct NCS [compound_statement]
        '{
            CSB
        '}
    construct OutNCS [compound_statement]
        NCS %[message "the NCS is:"][print][message "--------"] [message ""]
    by
        NCS
end function 