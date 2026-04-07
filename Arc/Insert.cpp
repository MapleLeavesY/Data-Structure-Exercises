#include "Insert.h"

void HeadIntoLinkList(Data*& Initptr, int data)
{//头插入链表
    Data* nextNode(new Data{data, nullptr});
    if(Initptr != nullptr)
    {
        nextNode->link = Initptr;
        Initptr = nextNode;
    }
    else
    {
        Initptr = nextNode;
    }
}
void MiddleIntoLinkList(Data*& Initptr, int Pos, int data)
{//中间插入链表
    if(Pos < 1) return;//计数错误判断
    if(Pos == 1)
    {//头插入
        Initptr = new Data{data, Initptr};
        return;
    }
    Data* temp = Initptr;
    for(int i = 0; i < Pos - 2; i++)
    {//中间插入
        if(temp == nullptr) return;
            temp = temp->link;
    }
    if(temp == nullptr) return;
    Data* nextNode(new Data{data, nullptr});
    nextNode->link = temp->link;
    temp->link = nextNode;
}
void DeleteTheMiddleLinkeList(Data*& Initptr, int Pos)
{
    if(Initptr == nullptr || Pos < 1) return;
    if(Pos == 1)
    {
        Data* temp = Initptr;
        Initptr = Initptr->link;
        delete temp;
        return;
    }
    Data* temp = Initptr;
    for(int i = 0; i < Pos - 2; i++)
    {
        if(temp->link == nullptr) return;
        temp = temp->link;
    }
    Data* temp01;
    temp01 = temp->link;
    if(temp01 == nullptr) return;
    temp->link = temp01->link;
    delete temp01;
}
void ModifyValuesAsLinkedList(Data* Initptr, int Pos, int data)
{
    if(Pos < 1) return;
    Data* temp = Initptr;
    for(int i = 0; i < Pos - 1 && temp != nullptr; i++)
    {
        if(temp == nullptr) return;
        temp = temp->link;
    }
    if(temp == nullptr) return;
    temp->data = data;
}
