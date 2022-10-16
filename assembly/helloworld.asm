; Compile instructions: 
; nasm -f elf helloworld.asm
; ld -m elf_i386 -s -o helloworld helloworld.o
; Run: ./helloworld

%include 'functions.asm'

section .data
    msg1 db 'hellow',0h ; assign "hellow" and 0Ah to msg1 where 0Ah is a new line
    msg2 db 'world',0h ; assign "world" and 0Ah to msg2 where 0Ah is a new line
section .text
    global _start ; entry point

_start:
    mov eax,msg1
    call sprintln

    mov eax,msg2
    call sprintln

    call quit