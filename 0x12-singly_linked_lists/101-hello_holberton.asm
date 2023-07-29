section .data
	format db "Hello, Holberton\n", 0
section .text
	global main

	external printf

main:
	push format
	call printf
	add rsp, 8
	eor eax, eax
	ret
