#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

char stack[MAX], infix[MAX], postfix[MAX];
int top = -1;


int isEmpty(){
    return top == -1;
}

void push(char data)
{
	if (top == MAX - 1)
	{
		printf("Stack overflow\n");
		return;
	}
	stack[++top] = data;
}
char pop()
{
	if (top == -1)
	{
		printf("Stack underflow\n");
		exit(1); 
	}
	char value;
	value = stack[top--];
	return value;
}

int precedence(char symbol)
{
	switch(symbol){
		case '^':
			return 2;
		case '*':
			return 2;
		case '/':
			return 2;
		case '+':
			return 1;
		case '-':
			return 1;
		default:
			return 0;
	}
}

void inToPost()
{
	char symbol, next;
    int j = 0;
	for (int i = 0; i < strlen(infix); i++)
	{
		symbol = infix[i];
		switch (symbol)
		{
		case '(':
			push(symbol);
			break;
		case ')':
			while ((next = pop()) != '(')
				postfix[j++] = next;
			break;
		case '*':
		case '/':
		case '+':
		case '-':
		case '^':
			while(!isEmpty() && precedence(stack[top]) >= precedence(symbol)){
				postfix[j++] = pop();
			}
			push(symbol);
			break;
		default:
			postfix[j++] = symbol;
			break;
		}
	}

	while (!isEmpty()) {
		postfix[j++] = pop();
	}
}


void print()
{
    int i = 0;
	printf("The equivalent postfix is:\t");
	while(postfix[i]){
		printf("%c",postfix[i++]);
	}
	puts("");
}

int main()
{
	printf("Enter the infix expression");
	scanf("%s",infix);

	inToPost();

	print();
	return 0;
}

//input A+(B*C-(D/E^F)*G)*H