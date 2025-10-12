#include "stack.h"

Stack::Stack()
{

}

Stack::~Stack()
{

}

template <typename T>
bool Stack::empty()
{
    return std::vector<T>::empty();
}

template <typename T>
size_t Stack::empty()
{
    return std::vector<T>::size();
}

template <typename T>
void Stack::push(const T& item)
{
    stack_.push_back(item);
}

void Stack::pop()
{
    if (stack_.empty()) throw std::underflow_error("Popping an empty stack");
    stack_.pop_back();
}

template <typename T>
const T& Stack::top()
{
    if (stack.empty()) throw std::underflow_error("Stack is empty")
    return stack_.back();
}