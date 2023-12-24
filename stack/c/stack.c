#include <stdio.h>
#include <stdlib.h>
#define MAX 4
int stack_arr[MAX];
int top = -1;

void push(int data)
{
	if (top == MAX - 1)
	{
		printf("Stack overflow\n");
		return;
	}
	top = top + 1;
	stack_arr[top] = data;
}
int pop()
{
	if (top == -1)
	{
		printf("Stack underflow\n");
		exit(1); // abnormal termination of program
	}
	int value;
	value = stack_arr[top];
	top = top - 1;
	return value;
}
int topElement()
{
	if (top == -1)
	{
		printf("Empty stack");
		return 0;
	}
	printf("%d\n", stack_arr[top]);
	return stack_arr[top];
}
void print()
{
	if (top == -1)
	{
		printf("Stack underflow\n");
		return;
	}
	for (int i = top; i >= 0; i--)
		printf("%d ", stack_arr[i]);

	printf("\n");
}

int main()
{
	int data;
	push(1);
	topElement();
	push(2);
	topElement();
	push(3);
	topElement();
	print();
	push(4);
	print();
	pop();
	print();
	pop();
	print();
	return 0;
}
