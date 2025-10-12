#include <iostream>
#include "heap.h"
using namespace std;

int main()
{
    Heap<int> myHeap;

    myHeap.push(1);
    myHeap.push(2);
    myHeap.push(3);
    
    cout << "Top: " << myHeap.top() << endl;
    myHeap.pop();
    cout << "Top: " << myHeap.top() << endl;
    return 0;
}