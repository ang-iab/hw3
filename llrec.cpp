#include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************

void llpivot(Node *&head, Node *&smaller, Node *&larger, int pivot)
{
    if (head == nullptr)
    {
        smaller = nullptr;
        larger = nullptr;
        return;
    }

    Node* oldHead = head;
    head = head->next;
    oldHead->next = nullptr;

    if (oldHead->val <= pivot) // smaller
    {
        smaller = head;
        llpivot(head, smaller->next, larger, pivot);
    }
    else // larger
    {
        larger = head;
        llpivot(head, smaller, larger->next, pivot);
    }
}

