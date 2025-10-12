#include <iostream>
#include "stack.h"
using namespace std;

int main()
{
    Stack<int> myStack;
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    
    myStack.pop();
    
    cout << "The top element of the stack is: " << myStack.top() << endl;
    cout << "The entire stack: ";

    size_t stackSize = myStack.size();
    cout << "Size: " << stackSize << endl;

    for (size_t i = 0; i < stackSize; i++)
    {
        cout << myStack.top() << endl;
        myStack.pop();
    }

    return 0;
}