global main

section .text

main:
	MOV rax, 0x1
	MOV rdi, 0x1
	MOV rsi, txt
	MOV rdx, txtln
	SYSCALL

	MOV rax, 0x3C
	MOV rdi, 0x0
	SYSCALL

section .data
	txt: DB "Hello, Holberton", 0xA
	txtln: EQU $ - txt
