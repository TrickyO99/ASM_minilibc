BITS 64

SECTION .text
GLOBAL strlen:function

strlen:
	mov rcx, 0
	jmp .C1
	ret

.C1:
	cmp rdi, 0
	je return
	cmp byte [rdi + rcx], 0
	je return
	add rcx, 1
	jne .C1

	return:
		mov rax,rcx
		ret