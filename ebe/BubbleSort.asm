=section .data

    ListToSort dd 68, 54, 78, 66, 32, 26, 54
    ListSize dd 7
    

    rax=1   ;counter for array position to compare
    rbx=rax+1 ;counter for adjacent position to compare
    rcx=0   ;OUTERLOOP counter
    rdx=6   ;OUTERLOOP counter max
    
                   ;OUTERLOOP    
 cmp ListToSort[rax], ListToSort[rbx]
 jle EqualToIncrement
 
 jge 
 
 
 
 
 EqualToIncrement
 inc rax
 inc rcx
 cmp rcx, rdx
 if equal
 jmp OUTERLOOP
 
                        ;compare ListToSort[rax} to ListToSort[rbx}
                       ;if rax < rbx------ inc rax, inc rcx
                        ;cmp rcx with rdx, if equal jmp to OUTERLOOP, dec rdx, reset rax=1
                                            ;not equal, jmp OUTERLOOP
                       ;if rnx > rmx------ jmp swap, inc rnx
                        ;jmp OUTERLOOP
    
