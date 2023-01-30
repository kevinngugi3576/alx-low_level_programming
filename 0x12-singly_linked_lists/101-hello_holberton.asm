section.data

message db 'Hello, Holberton', 0

section .text

global_start

_start:

; call the printf function

mov rdi, message

xor rax, rax

call printf

; exit the program

mov rax, 60

xor rdi, rdi

syscall
