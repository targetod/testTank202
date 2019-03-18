#ifndef TANK_H
#define TANK_H

#include <string>

struct Point
{
    int x;
    int y;
};

class Tank
{
    int m_hp;
    int m_demage;
    Point m_position;
    std::string  m_name;
    //char * m_pWeapon;

 // name
public:
    Tank(int hp = 100, int dmg = 50, std::string name = "tank 0"  );
    Tank(const Tank & otherTank);
    ~Tank();

    Tank& operator= (const Tank & otherTank);
    Tank operator+ (int hp);

    void shoot(Tank & otherTank);
    void show() const;
    void showPosition() const;
    void move();

    Point getCoord() const;

};

Tank* createTanks(int N);
void deleteTanks(Tank* pTanks);


#endif // TANK_H
