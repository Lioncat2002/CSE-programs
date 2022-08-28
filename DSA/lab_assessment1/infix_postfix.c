// C program to convert infix expression to postfix
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Stack type
typedef struct 
{
	int top;
	int stack[200];
}Stack;

// Stack Operations
int new_stack( Stack *stack )
{
	stack->top = -1;
}
int empty(Stack* stack)
{
	return stack->top == -1 ;
}
char peek(Stack* stack)
{
	return stack->stack[stack->top];
}
char pop(Stack* stack)
{
	if (!empty(stack))
		return stack->stack[stack->top--] ;
	printf("Stack underflow!");
}
void push(Stack* stack, char op)
{
	stack->stack[++stack->top] = op;
}

int is_operand(char ch)
{
	return '0'<=ch && ch<='9';
}

int precedence(char ch)
{
	switch (ch)
	{
	case '+':
	case '-':
		return 1;

	case '*':
	case '/':
		return 2;

	case '^':
		return 3;
	}
	return -1;
}

int main()
{
	char exp[200];
		int i, k;
	Stack stack; 
    new_stack(&stack);
	
	printf("Enter the expression : ");
	fgets(exp, 200, stdin);
	for (i = 0, k = -1; exp[i]; ++i)
	{
		if (is_operand(exp[i]))
			exp[++k] = exp[i];
		else if (exp[i] == '(')
			push(&stack, exp[i]);
	
		else if (exp[i] == ')')
		{
			while (!empty(&stack) && peek(&stack) != '(')
				exp[++k] = pop(&stack);
			if (!empty(&stack) && peek(&stack) != '(')
				return -1; 			
			else
				pop(&stack);
		}
		else
		{
			while (!empty(&stack) &&
				precedence(exp[i]) <= precedence(peek(&stack)))
				exp[++k] = pop(&stack);
			push(&stack, exp[i]);
		}

	}
	while (!empty(&stack))
		exp[++k] = pop(&stack );

	exp[++k] = '\0';
	printf( "Postfix form: %s\n", exp );

	return 0;
}
