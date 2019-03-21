section .data
	fmt db "%s",10,0
	print db "Hello, Holberton",0

section .print
	extern printf
	global main
main:
	push rbp
	mov rdi, fmt
	mov rsi, print
	mov rax, 0
	call printf

	pop rbp
	mov rax, 0
	ret
