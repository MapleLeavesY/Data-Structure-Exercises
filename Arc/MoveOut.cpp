#include "MoveOut.h"

void LinkListPrint(Data* Initptr)
{
    Data* temp = Initptr;
    while(temp != nullptr)
    {
        std::cout << temp->data << ", ";
        temp = temp->link;
    }
     std::cout << "\n";
}

void QueryValuesAsLinkedList(Data* Initptr, int Pos)
{
    if(Pos < 1) return;
    Data* temp = Initptr;
    for(int i = 0; i < Pos - 1 && temp != nullptr; i++)
    {
        if(temp == nullptr) return;
        temp = temp->link;
    }
    if(temp == nullptr) return;
    std::cout << temp->data << "\n";
}