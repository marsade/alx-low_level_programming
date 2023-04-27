section .data
	message db 'Hello, Holberton', 10, 0
	format db '%s', 10, 0

section .text
	global main
	extern printf

main:
	mov rdi, format
	mov rsi, message
	xor eax, eax
	call printf

	xor edi, edi
	mov eax, 60
	syscall
