#pragma once

class Data
{
public:
    int data;
    Data* link;
};

void HeadIntoLinkList(Data*& Initptr, int data);//头插入链表
void MiddleIntoLinkList(Data*& Initptr, int Pos, int data);//中间插入链表
void DeleteTheMiddleLinkeList(Data*& Initptr, int Pos);//中间删除链表