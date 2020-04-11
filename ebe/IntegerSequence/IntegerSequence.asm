segment     .data
start       dq 1
end         dq 10
sum         dq 0
incrementor dq 1

segment     .text

global      main
main:
            mov rax, [start]
            mov rbx, [end]
            mov rcx, [sum]
            mov rdx, [incrementor]
    


start_loop:
cmp         rax, rbx
jne         increment_loop
jge         end_loop

increment_loop:
add         rcx, rax
add         rax, rdx
jmp         start_loop




end_loop:
mov         rax, 0
