#include "stack.h"

int main() {
    struct Stack myStack;
    initialize(&myStack);

    push(&myStack, 10);
    push(&myStack, 20);
    push(&myStack, 30);
	pop(&myStack);

    printf("Top element: %d\n", peek(&myStack));

    printf("Popped element: %d\n", pop(&myStack));
    printf("Popped element: %d\n", pop(&myStack));

    printf("Is the stack empty? %s\n", isEmpty(&myStack) ? "Yes" : "No");

    destroy(&myStack);

    return 0;
}
