#ifndef DAVINCI_H
#define DAVINCI_H

#include "tank.h"
#include "list.h"

class Davinci
{
public:
    Davinci();

    void draw(const Tank* const pTanks, const int N);
    void draw(const List & lstTank);    //  draw(Obj);
    //void draw(const List * lstTank);  //  draw(&Obj);
private:
    void gotoxy(int x, int y);
};

#endif // DAVINCI_H
