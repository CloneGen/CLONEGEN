include "c.grm"


redefine while_statement
    ... |[expression] ';[NL] 'while '( [condition] ') [sub_statement] 
    % 这条规则会出现冲突
    | '{ '; [NL] [IN] [opt non_null_declaration]   'while '( [opt expression_list] ') [sub_statement] [NL] [EX] '} [NL]

end redefine



function main
    replace [program]
        P [program]
    by 
        P
end function 