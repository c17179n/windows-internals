global _start

section .text
_start:
    jmp MESSAGE      ; 

GOBACK:
    mov rax, 0x1
    mov rdi, 0x1
    pop rsi          ; 
                     ; 
    mov rdx, 0xd
    syscall

    mov rax, 0x3c
    mov rdi, 0x0
    syscall

MESSAGE:
    call GOBACK       ; 
                      ; 
                      ; 
    db "с17179т, Rocks!", 0dh, 0ah
