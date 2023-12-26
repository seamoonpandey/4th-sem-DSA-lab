#include <iostream>
#include "stack.h"


int main()
{
    // Example usage
    Stack<int> myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.push(40);
    myStack.push(50);
    cout << myStack.peek() << endl;
    myStack.pop();
    cout << myStack.peek() << endl;
    myStack.pop();
    cout << myStack.peek() << endl;
    myStack.pop();
    cout << myStack.peek() << endl;

    cout << "Is the stack full? " << (myStack.isFull() ? "Yes" : "No") << endl;
    cout << "Is the stack empty? " << (myStack.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}