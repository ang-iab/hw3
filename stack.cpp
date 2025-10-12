#include "stack.h"

template <typename T>
Stack<T>::Stack()
{

}

template <typename T>
Stack<T>::~Stack()
{

}

template <typename T>
bool Stack<T>::empty()
{
    return std::vector<T>::empty();
}

template <typename T>
size_t Stack<T>::empty()
{
    return std::vector<T>::size();
}

template <typename T>
void Stack<T>::push(const T& item)
{
    stack_.push_back(item);
}

template <typename T>
void Stack<T>::pop()
{
    if (std::vector<T>::empty()) throw std::underflow_error("Popping an empty stack");
    stack_.pop_back();
}

template <typename T>
const T& Stack<T>::top()
{
    if (std::vector<T>::empty()) throw std::underflow_error("Stack is empty")
    return stack_.back();
}