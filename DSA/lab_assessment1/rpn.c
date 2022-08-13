#include "stdio.h"
#include "stdlib.h"
typedef struct
{
    char stack[200];
    int top;
    int size;
} Stack;

int new_stack(Stack *stack, int size)
{
    stack->size = size;
    stack->top = -1;
}
int disp(Stack *stack)
{
    for (int i = stack->top; i >= 0; i--)
    {
        printf("%c ", stack->stack[i]);
    }
    printf("\n");
}

int push(Stack *stack, char val)
{
    stack->top++;
    stack->stack[stack->top] = val;
}
int pop(Stack *stack)
{
    if (stack->top < 0)
    {
        printf("Stack Underflow!");
        exit(1);
    }
    int idx=stack->top--;
    return stack->stack[idx];
}

int main(){
    Stack stack;
    new_stack(&stack, 20);
    char expr[200]="23+";
    for (int i = 0; expr[i] != '\0'; i++)
    {
        if (expr[i]=='+')
        {
            int sum=(pop(&stack)-'0')+(pop(&stack)-'0');
            push(&stack,sum);
        }
        else{
            push(&stack,expr[i]);
        }
        
    }
    disp(&stack);
    printf("Result: %d\n",pop(&stack));
}