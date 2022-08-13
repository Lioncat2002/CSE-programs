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

int main(){
    Stack stack;
    new_stack(&stack, 20);
    char expr[200];
    printf("Enter Postfix Expression: ");
    fgets(expr,200,stdin);
    float eval;
    for (int i = 0; expr[i] != '\0'; i++)
    {
        switch (expr[i])
        {
        case '+':
            eval=pop(&stack)+pop(&stack);
            push(&stack,eval);
            break;
        case '-':
            eval=pop(&stack)-pop(&stack);
            push(&stack,eval);
            break;
        case '/':
            eval=pop(&stack)/pop(&stack);
            push(&stack,eval);
            break;
        case '*':
            eval=pop(&stack)*pop(&stack);
            push(&stack,eval);
            break;
        default:
            push(&stack,expr[i]-'0');//we need to negate '0' to convert ascii value of the number to a decimal
        }
    }
    printf("Result: %d\n",pop(&stack));
}