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