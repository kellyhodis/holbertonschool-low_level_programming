section .data
	print db "Hello, Holberton",10

section .print
	global main
main:
	mov rax, 1
	mov rdi, 1
	mov rsi, print
	mov rdx, 17
	syscall

	mov rax, 60
	mov rdi, 0
	syscall
