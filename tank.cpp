#include "tank.h"
#include <iostream>
#include <cstring>
using namespace  std;

void Tank::move()
{
    int moveVectorX = rand()%3 -1;
    int moveVectorY = rand()%3 -1;
    m_position.x += moveVectorX;  // +1  +0  -1
    m_position.y += moveVectorY;
}

Tank::Tank(int hp, int dmg, std::string  name) :
    m_hp(hp), m_demage(dmg), m_name(name)
{
    m_position.x = rand()%50;
    m_position.y = rand()%50;


   // m_pWeapon = new char[50];
   // strcpy(m_pWeapon, "miniGun");

}

Tank::Tank(const Tank & otherTank)
{
    this->m_hp = otherTank.m_hp;
    this->m_demage = otherTank.m_demage;
    this->m_name = otherTank.m_name; // ???
    this->m_position = otherTank.m_position;

    cout << "Copy Constructor" << endl;
}

Tank::~Tank()
{
    cout << "Destuctor for T, x = ";
    cout << m_position.x<<endl;

    //delete [] m_pWeapon;
}

void Tank::shoot(Tank & otherTank)
{
    otherTank.m_hp -= this->m_demage;
}

void Tank::show() const
{
    cout << "Name = " << m_name<<endl;
    cout << "HP = " << m_hp << endl;
    cout << "DMG = " << m_demage << endl;
}

void Tank::showPosition() const
{
    cout << "Pos X = " << m_position.x << endl;
    cout << "Pos Y = " << m_position.y << endl;
}

Point Tank::getCoord() const
{
    return m_position;
}



Tank* createTanks(int N)
{
   Tank * pArrTanks = new Tank[N];
   return pArrTanks;
}

void deleteTanks(Tank* pTanks)
{
    delete[] pTanks; // Destructosrs
}



Tank Tank::operator+ (int hp)
{
    Tank newTank(*this);
    newTank.m_hp += hp;

    return newTank;
}

Tank& Tank::operator= (const Tank & otherTank)
{
    //1   t1=t1;
    if(this == &otherTank){
        return *this;
    }

    // t1 = t2;
    this->m_hp = otherTank.m_hp;
    m_demage = otherTank.m_demage;
    m_position = otherTank.m_position;
    m_name = otherTank.m_name;

    return *this;
}

/*
Tank& operator= ( Tank & otherTank)
{


    // 1 free mem m_pWeapon
    // 2 alloc  new mem
    // 3 copy  mem from other tank to us (this)
    // return this
}
*/








