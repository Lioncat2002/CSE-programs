#include "stdio.h"
#include "stdlib.h"
typedef struct
{
    int stack[200];
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
        printf("%d ", stack->stack[i]);
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
        printf("Stack Underflow!\n");
        exit(1);
    }
    int idx=stack->top--;
    return stack->stack[idx];
}