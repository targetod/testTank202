#include "moderntank.h"
#include <iostream>

using namespace  std;

HeavyTank::HeavyTank() :
    Tank(100, 75, "heavyTank"),
    m_additionalArmor(20)
{
    cout << "HeavyTank constr" << endl;
}

void HeavyTank::shoot(Tank & otherTank)
{
    int hp = otherTank.getHP();
    hp -= this->m_demage;
    otherTank.changeHP(hp);
}

void HeavyTank::show() const
{
    Tank::show();
    cout << "additional armor = " << m_additionalArmor << endl;
}




HeavyTank::~HeavyTank()
{
    cout << "HeavyTank destructor" << endl;
}

