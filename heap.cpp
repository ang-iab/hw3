#include "heap.h"

template <typename T, typename PComparator>
Heap<T, PComparator>::Heap(int m, PComparator c)
{
    m_ = m;
    comp_ = c;
}

template <typename T, typename PComparator>
Heap<T, PComparator>::~Heap()
{

}

template <typename T, typename PComparator>
void Heap<T, PComparator>::push(const T& item)
{
    data_.push_back(item);
    std::size_t idx = data_.size() - 1;
    
    while (idx != 0)
    {
        std::size_t parent = (idx - 1) / m_;

        if (!comp_(data_[idx], data_[parent])) break;

        // swap the current node with the parent node
        T temp = data_[parent];
        data_[parent] = data_[idx];
        data_[idx] = temp;
        idx = parent;
    }
}

template <typename T, typename PComparator>
bool Heap<T, PComparator>::empty() const
{
    return data_.size() == 0;
}

template <typename T, typename PComparator>
size_t Heap<T, PComparator>::size() const
{
    return data_.size();
}

template class Heap<int>; //remember to delete
template class Heap<Event*, EventLess>;