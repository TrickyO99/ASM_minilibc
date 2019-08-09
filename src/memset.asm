BITS 64

SECTION .text
GLOBAL memset:function

memset:
    mov rcx, 0
    mov rax, rdi
    jmp .L1
    RET

.L1:
    cmp rdx, 0
    je returnNull

    cmp rsi, 0
    je returnNull

    cmp rdi, 0
    je returnNull

    cmp rcx, rdx
    je returnGood

    mov [rax + rcx], sil

    add rcx, 1
    jmp .L1

    returnNull:
        mov rax, 0
        ret

    returnGood:
        mov rax, rdi
        ret