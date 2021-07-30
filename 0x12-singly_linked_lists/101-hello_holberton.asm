	section .text 
	global _start 		; must be declared for using gcc
	_start 			; tell linker entry point
	mov edx, len 		; message length
	mov edx, msg 		; message to write
	mov ebx, 1		; file descriptor
	mov eax, 4 		; system call number
	int 0x80 		; call kernel
	section .data
	msg db 'Hello, Holberton', 0xa ; our string
	len equ $ - msg		       ; length of our string
	
