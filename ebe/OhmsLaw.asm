            segment .data
voltage     dq  0                   ;the value to calculate
amperage    dq  10                  ;the amperage input
resistance  dq  6                   ;the resistance input

            segment .text
            global main             ;Tell linker about main
main:
                                    ;move variables to registers
            mov rax, [voltage]
            mov rbx, [resistance]
            mov rcx, [amperage]
    
                             
                                    ;if voltage is zero, calculate it
            voltage_section:
            cmp rax, 0              ;compare to zero
            jne resistance_section  ;jump to resistance if not calculating
            imul rbx, rcx           ;multiply resistance and amperage
            mov [voltage], rbx      ;define resistance to rax
            
            jmp end
            
            
                                    ;if resistance is zero, calculate it
            resistance_section:
            cmp rbx, 0
            jne amperage_section
            mov rdx, 0              ;clear rdx
            idiv rcx                ;divide rax by rcx, stores in rax, remainder in rdx
            mov [resistance], rax   ;define resistance to rax
            
            jmp end                                                                                                                       
              
                                                                                                                                                                                                          
                                    ;if amperage is zero, calculate it
            amperage_section:
            mov rdx, 0              ;clear rdx
            idiv rbx                ;divides rax by rbx, stores in rax, remainders in rdx
            mov [amperage], rax     ;define amperage to rax
            
            jmp end
            
                                     
            
            end:
            mov rax, 0

