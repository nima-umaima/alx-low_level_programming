global 	main
global 	main
global 	main
main:
mov	rdi, message
mov	rax, 0
call	printf
mov	rax, 0
ret
format:
db "Hello, Holberton", 10, 0
