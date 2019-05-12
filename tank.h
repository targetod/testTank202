#ifndef TANK_H
#define TANK_H

#include <string>

class Bullet
{
    std::string m_material;
public:
    Bullet(): m_material("wooden") { }
};


struct Point
{
    int x;
    int y;
};

class Tank
{
protected:
    int m_hp;
    int m_demage;
    Point m_position;
    std::string  m_name;
    //char * m_pWeapon;

    static char* m_pClassName; // Tank
public:
    static int m_numOfTanks;

 // name
public:
    Tank(int hp = 100, int dmg = 50, std::string name = "tank 0"  );
    Tank(const Tank & otherTank);
    virtual ~Tank();

    Tank& operator= (const Tank & otherTank);
    Tank operator+ (int hp);

    void shoot(Tank & otherTank);
    virtual void show() const;
    void showPosition() const;
    void move();

    Point getCoord() const;

    void changeHP(int hp) { m_hp = hp; }
    int getHP() { return m_hp; }

};

Tank* createTanks(int N);
void deleteTanks(Tank* pTanks);


#endif // TANK_H
