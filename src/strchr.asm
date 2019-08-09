BITS 64

SECTION .text
GLOBAL strchr:function

strchr:
    mov rcx, 0
    jmp .L1
    RET

.L1:
    cmp rdi, 0
    je returnNull
    cmp byte [rdi + rcx], sil
    je return

    cmp byte [rdi + rcx], 0
    je returnNull
    add rcx, 1
    jne .L1

    return:
        mov rax, rdi
        add rax, rcx
        RET
    returnNull:
        mov rax, 0
        RET