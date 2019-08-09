BITS 64

SECTION .text
GLOBAL strcmp:function

strcmp:
    mov rcx, 0
    jmp .L1
    RET

.L1:

    cmp rdi, rsi
    je returnEqual
    cmp rdi, rsi
    jl returnLess
    cmp rdi, rsi
    jg returnGreater

    returnLess:
        mov rax, -1
        RET
    returnEqual:
        mov rax, 0
        RET
    returnGreater:
        mov rax, 1
        RET