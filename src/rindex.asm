BITS 64

SECTION .text
GLOBAL rindex:function

rindex:
    mov rcx, 0
    jmp .L1
    RET

.L1:
    cmp rdi, 0
    je _return_null
    cmp byte [rdi + rcx], sil
    je _return_good

    cmp byte [rdi + rcx], 0
    je _return_null
    add rcx, 1
    jne .L1

    _return_good:
        mov rax, rdi
        sub rax, rcx
        RET
    _return_null:
        mov rax, 0
        RET