#ifndef LIST_H
#define LIST_H

#include "tank.h"

class List
{
    struct Node
    {
        Tank val;
        Node * pNext;
        Node(Tank value): val(value), pNext(nullptr) {}
    };

    Node* m_pBegin;
    Node* m_pEnd;
    Node* m_pTemp;
    Node* m_pCur;

    uint32_t m_size;

public:
    List();
    ~List();
    void insertData(Tank val);
    void showData();
    uint32_t size();
};

#endif // LIST_H
