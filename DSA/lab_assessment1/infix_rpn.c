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

int is_operand(char ch){
    return '0'<=ch && ch<='9';
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
        return 0;
    }
    int idx = stack->top--;
    return stack->stack[idx];
}

int main(){
    char rpn[200];
    Stack stack;
    new_stack(&stack,50);
    printf("Enter the expression : ");
	fgets(rpn, 200, stdin);
    for (int i = 0; rpn[i]; i++)
    {
        if (is_operand(rpn[i]))
        {
            push(&stack,rpn[i]-'0');
        }
        else{
            int a;
            switch (rpn[i])
            {
            case '+':
                a=pop(&stack)+pop(&stack);
                push(&stack,a); 
                break;
            case '-':
            a=pop(&stack)-pop(&stack);
                push(&stack,a); 
                break;
            case '*':
            a=pop(&stack)*pop(&stack);
                push(&stack,a); 
                break;
            case '/':
            a=pop(&stack)/pop(&stack);
                push(&stack,a); 
                break;
            default:
                break;
            }
                       
        } 
    }
    printf("Solution is: %d\n",pop(&stack));
}