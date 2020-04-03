            segment .data
voltage     dq  0               ;the value to calculate
amperage    dq  10              ;the amperage input
resistance  dq  5               ;the resistance input

            segment .text
            global main         ;Tell linker about main
main:
                                ;move variables to registers
            mov rax, amperage
            mov rbx, resistance
    
            imul rax, rbx       ;do computation
                        
            mov [voltage], rax ;store answer in the voltage variable
            
            mov rbx, 0          ;untrash everything
            mov rax, 0
