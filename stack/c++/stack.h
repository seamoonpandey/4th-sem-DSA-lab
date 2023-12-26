#include <iostream>
using namespace std;

template <typename T>
class Stack
{
private:
    T *arr;
    int top;
    int capacity;

public:
    Stack(int initialCapacity = 5)
    {
        arr = new T[initialCapacity];
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

    void push(T value)
    {
        if (isFull())
        {
            cout << "Stack overflow" << endl;
            return;
        }
        arr[++top] = value;
    }

    T pop()
    {
        if (isEmpty())
        {
            throw "Stack underflow";
        }
        return arr[top--];
    }

    T peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return T(); 
        }
        return arr[top];
    }
};
