#include <iostream>
#include "Insert.h"
#include "MoveOut.h"



int main()
{
    Data* initptr = nullptr;
    //头写入=======
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
    //插入写法=======
    std::cin.get();
}