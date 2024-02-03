// Write an object-oriented program to implement a generic Stack.
// Incorporate all the possible operation on Stack in the program.

#include <iostream>
using namespace std;
template <typename t>
class Stack
{
    static const int max = 100;
    t arr[max];
    int top;

public:
    Stack() : top(-1) {}

    void push(t value)
    {
        if (top >= max - 1)
        {
            cout << "Stack is overFlow" << endl;
            return;
        }
        arr[++top] = value;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "stack is underflow";
            return;
        }
        --top;
    }
    t peek()
    {
        if (top == -1)
        {
            cout << "stack is empty";
            return -1;
        }
        return arr[top];
    }
    bool isEmpty()
    {
        return top < 0;
    }

    int size()
    {
        return top + 1;
    }
};
int main()
{
    Stack<char> myStack;

    myStack.push('a');
    myStack.push('b');
    myStack.push('c');

    std::cout << "Top element: " << myStack.peek() << std::endl;

    myStack.pop();

    std::cout << "Top element after pop: " << myStack.peek() << std::endl;

    if (myStack.isEmpty()) {
        std::cout << "Stack is empty." << std::endl;
    } else {
        std::cout << "Stack is not empty." << std::endl;
    }

    std::cout << "Stack size: " << myStack.size() << std::endl;


    return 0;
}