; int strlen(string msg)
; calculates length of the string
strlen:
    push ebx ; push value of ebx in stack
    mov ebx, eax
nextchar:
    cmp byte [eax],0 ; compare the value of eax with 0 at the end of string
    jz finished
    inc eax ; increment eax
    jmp nextchar ; jump to nextchar(loop)
finished:
    sub eax,ebx ; subtract eax with ebx
    pop ebx ; pop value to ebx from stack
    ret ; return to the caller

; void sprint(String msg)
; prints the string
sprint:
    push edx
    push ecx
    push ebx
    push eax
    call strlen

    mov edx, eax
    pop eax

    mov ecx, eax
    mov ebx, 1
    mov eax, 4
    int 80h

    pop ebx
    pop ecx
    pop edx
    ret

; void sprintln(String msg)
; prints the string with line feed function

sprintln:
    call sprint

    push eax ; push value of eax in stack to save it 
    mov eax,0Ah ; mov 0Ah to eax - 0Ah is line feed
    push eax ; push value of eax in stack to get the address
    mov eax,esp ; move address of current stack pointer to get the address
    call sprint ; call sprint function
    pop eax ; remove line feed
    pop eax ; restore original value of eax to before our function was called
    ret

; void exit()
; exits the program
quit:
    mov ebx, 0
    mov eax, 1
    int 80h
    ret
