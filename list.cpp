#include "list.h"
#include <iostream>
using namespace std;

List::List() :
    m_pBegin (nullptr),
    m_pEnd (nullptr),
    m_pTemp(nullptr),
    m_pCur(nullptr),
    m_size(0)
{
}

void List::insertData(Tank val)
{
    m_size++;
    m_pTemp = new Node(val);
    if (m_pBegin == nullptr)
    {
        // first element
        m_pBegin = m_pEnd = m_pTemp;
    }
    else
    {
        m_pEnd->pNext = m_pTemp; // error
        m_pEnd = m_pTemp;
    }
}

void List::showData()
{
    m_pCur = m_pBegin;
    while(m_pCur != nullptr)
    {
        //cout << m_pCur->val <<endl;
        m_pCur->val.show();
        m_pCur = m_pCur->pNext;
    }
}

List::~List()
{
   m_pCur = m_pBegin;
   while(m_pCur != nullptr)
   {
       m_pTemp = m_pCur->pNext;
       delete m_pCur;
       m_pCur = m_pTemp;
   }
   m_pBegin = m_pEnd = m_pCur = m_pTemp = nullptr;
   m_size = 0;
}

uint32_t List::size()
{
    return m_size;
}
