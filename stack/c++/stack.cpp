#include <iostream>
using namespace std;
class Stack
{
private:
    int *arr;
    int top;
    int capacity;

public:
    Stack(int initialCapacity = 5)
    {
        arr = new int[initialCapacity];
        top = -1;
        capacity = initialCapacity;
    }

    ~Stack()
    {
        delete[] arr;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    bool isFull()
    {
        return top == capacity - 1;
    }

    void push(int value)
    {
        if (isFull())
        {
            cout << "Stack overflow" << endl;
            return;
        }
        arr[++top] = value;
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack underflow" << endl;
            return;
        }
        top--;
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return 0;
        }
        return arr[top];
    }
};

int main()
{
    // Example usage
    Stack myStack;

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