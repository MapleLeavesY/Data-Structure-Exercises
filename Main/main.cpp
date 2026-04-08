#include <iostream>
#include "Insert.h"
#include "MoveOut.h"
#include "Data.h"
#include "Reverse.h"

int main()
{
    Data* initptr = nullptr;
    MiddleIntoLinkList(initptr,1,2);
    MiddleIntoLinkList(initptr,1,3);
    MiddleIntoLinkList(initptr,1,4);
    MiddleIntoLinkList(initptr,1,5);
    MiddleIntoLinkList(initptr,4,0);
    MiddleIntoLinkList(initptr,2,9);
    LinkListPrint(initptr);
    DeleteTheMiddleLinkeList(initptr,2);
    DeleteTheMiddleLinkeList(initptr,1);
    LinkListPrint(initptr);
    QueryValuesAsLinkedList(initptr,2);
    RecursiveImplementationOfLinkedListReversal(initptr,initptr);
    LinkListPrint(initptr);
    IterativeImplementationOfLinkedListReversal(initptr);
    LinkListPrint(initptr);
    std::cin.get();
}