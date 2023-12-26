#include <iostream>
#include "stack.h"

int precedence(char symbol)
{
    switch(symbol){
        case '^':
        case '*':
        case '/':
            return 2;
        case '+':
        case '-':
            return 1;
        default:
            return 0;
    }
}

string inToPost(string infix)
{
    string postfix;
    Stack<char> stack(infix.length());

    char next;
    int j = 0;
    for(char symbol:infix)
    {
        switch(symbol)
        {
            case '(':
            stack.push(symbol);
            break;
            case ')':
                while ((next = stack.pop()) != '(')
                    postfix += next;
                break;
            case '*':
            case '/':
            case '+':
            case '-':
            case '^':
                while(!stack.isEmpty() && precedence(stack.peek()) >= precedence(symbol)){
                    postfix += stack.pop();
                }
                stack.push(symbol);
                break;
            default:
                postfix += symbol;
                break;
        }
    }
    while (!stack.isEmpty()) {
        postfix += stack.pop();
    }
    return postfix;
}

int main()
{
    string infix, postfix;
    
    cout<<"Enter the infix expresseion"<<" "<<endl;
    cin>>infix;

    postfix = inToPost(infix);
    cout << postfix <<endl;
}