section .data
    hello db "Hello, Holberton", 0x0a, 0

section .text
    global main

    extern printf

main:
    push rbp
    mov rbp, rsp

    mov rdi, hello
    xor eax, eax
    call printf

    mov rsp, rbp
    pop rbp
    xor eax, eax
    ret

format: db `Hello, Holberton\n`,0
