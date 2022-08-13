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
    stack->top--;
}

int main()
{
    Stack stack;
    new_stack(&stack, 20);
    char brackets[200];
    printf("Enter brackets: ");
    fgets(brackets,200,stdin);
    for (int i = 0; brackets[i] != '\0'; i++)
    {
        if (stack.top > -1)
        {
            if (stack.stack[stack.top] == '[' && brackets[i] == ']')
                pop(&stack);
            else if (stack.stack[stack.top] == '{' && brackets[i] == '}')
                pop(&stack);
            else if (stack.stack[stack.top] == '(' && brackets[i] == ')')
                pop(&stack);
            continue;
        }

        if (brackets[i] == '(' || brackets[i] == '{' || brackets[i] == '[')
        {
            push(&stack, brackets[i]);
            continue;
        }
        if (stack.top == -1)
        {

            if (brackets[i] == ')' || brackets[i] == '}' || brackets[i] == ']')
            {
                printf("Un Balanced\n");
                return 0;
            }
        }
    }
    if (stack.top == -1)
    {
        printf("Balanced\n");
    }
    else
    {
        printf("Un Balanced\n");
    }
}