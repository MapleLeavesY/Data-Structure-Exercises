#include "Reverse.h"

void IterativeImplementationOfLinkedListReversal(Data*& Initptr)
{
    Data *prev, *current, *next;
    current = Initptr;
    prev = nullptr;
    while(current != nullptr)
    {
        next = current->link;
        current->link = prev;
        prev = current;
        current = next;
    }
    Initptr = prev;
}


void RecursiveImplementationOfLinkedListReversal(Data*& initptr, Data* current)
{
    if(current == nullptr || current->link == nullptr)
    {
        initptr = current;
        return;
    }
    RecursiveImplementationOfLinkedListReversal(initptr,current->link);
    current->link->link = current;
    current->link = nullptr;
}