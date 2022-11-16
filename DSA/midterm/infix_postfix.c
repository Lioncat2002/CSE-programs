#include "stdio.h"
#include "ctype.h"

char stack[100];
int top = -1;

void push(char c)
{
    stack[++top] = c;
}

char pop()
{
    if (top == -1)
    {
        return -1;
    }
    return stack[top--];
}

int priority(char x)
{
    if (x == '(')
        return 0;
    else if (x == '+' || x == '-')
        return 1;
    else if (x == '*' || x == '/')
        return 2;
    return 0;
}
int main()
{

    char expr[200];
    char *e, x;
    printf("Enter a expression: ");
    scanf("%s", expr);
    printf("\n");

    e = expr;
    while (*e != '\0')
    {
        if (isalnum(*e))
            printf("%c ", *e);
        else if (*e == '(')
            push(*e);
        else if (*e == ')')
            while ((x = pop()) != '(')
                printf("%c ", x);
        else
        {
            while (priority(stack[top]))
            {
                printf("%c ", pop());
            }
            push(*e);
        }
        e++;
    }
    printf("%c\n",pop());
}