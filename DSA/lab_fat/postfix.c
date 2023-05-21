#include "stdio.h"
#include "ctype.h"

int stack[100];
int top = -1;

void push(char c)
{
    stack[++top] = c;
}

int pop()
{
    if (top == -1)
    {
        return -1;
    }
    return stack[top--];
}

int main()
{
    char rpn[200];
    int a;
    printf("Enter the expression:");
    scanf("%s", rpn);
    for (int i = 0; rpn[i]; i++)
    {
        if (isdigit(rpn[i]))
        {
            push(rpn[i]-'0');
        }
        else
        {
            switch (rpn[i])
            {
            case '+':
                a = pop() + pop();
                push(a);
                break;
            case '-':
                a = pop() - pop();
                push(a);
                break;
            case '*':
                a = pop() * pop();
                push(a);
                break;
            case '/':
                a = pop() / pop();
                push(a);
                break;
            default:
                break;
            }
        }
    }
    printf("%d", pop());
}