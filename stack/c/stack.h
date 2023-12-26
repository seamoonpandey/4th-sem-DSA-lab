#include<stdlib.h>
#include<stdio.h>

#define INITIAL_CAPACITY 10
 
struct Stack{
		int *arr;
			int top;
				int capacity;
};


void initialize(struct Stack *stack){
		stack -> arr = (int *)malloc(INITIAL_CAPACITY * sizeof(int));
			stack -> top = -1;
				stack -> capacity = INITIAL_CAPACITY;
}

int isEmpty(struct Stack *stack){
		return stack->top == -1;
}

void push(struct Stack *stack, int value)
{
		if(stack->top == stack -> capacity - 1){
					stack->capacity *= 2;
							stack->arr = (int *)realloc(stack->arr, stack->capacity * sizeof(int));
								}
			stack->arr[++stack->top] = value;
}

int pop(struct Stack *stack)
{
		if(isEmpty(stack))
				{
							printf("Stack underflow\n");
									exit(1);
										}
			return stack->arr[stack->top--];
}

int peek(struct Stack *stack){
		if(isEmpty(stack)){
					printf("Stack is empty\n");
							exit(1);
								}
			return stack -> arr[stack->top];
}

void destroy(struct Stack *stack){
		free(stack->arr);
}

