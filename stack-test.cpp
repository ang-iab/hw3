#include "stack.h"
using namespace std;

int main()
{
    Stack<int> myStack = Stack();
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    
    myStack.pop();
    
    cout << "The top element of the stack is: " << myStack.top() << endl;
    cout << "The entire stack: ";

    for (int i: myStack)
    {
        cout << myStack.top() << endl;
        myStack.pop();
    }

    return 0;
}