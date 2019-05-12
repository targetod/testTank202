#ifndef MODERNTANK_H
#define MODERNTANK_H

#include "tank.h"


class HeavyTank : public Tank
{
    int m_additionalArmor;

public:
    HeavyTank();
    ~HeavyTank();

    void show() const;
    void shoot(Tank & otherTank);
};

#endif // MODERNTANK_H
