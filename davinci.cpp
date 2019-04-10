#include "davinci.h"

#include <windows.h>
#include <iostream>

using namespace  std;

Davinci::Davinci()
{

}


void Davinci::gotoxy(int x, int y)
{
  HANDLE hndl = GetStdHandle(STD_OUTPUT_HANDLE);

  COORD coord;
  coord.X = static_cast<SHORT>(x);
  coord.Y = (SHORT)y;
  SetConsoleCursorPosition(hndl,coord);
}

void Davinci::draw(const Tank* const pTanks,const int N)
{
    system("cls");
    for (int i =0; i < N; ++i)
    {
        Point coord = pTanks[i].getCoord();
        gotoxy(coord.x, coord.y);
        cout << '#';
    }
    Sleep(1000);
}

void Davinci::draw(const List & lstTank)
{
    system("cls");
    Tank* pCurTank = lstTank.getNextTank(nullptr); // get first tank
    while (pCurTank != nullptr)
    {
        Point coord = pCurTank ->getCoord();
        gotoxy(coord.x, coord.y);
        cout << '#';

        pCurTank = lstTank.getNextTank(pCurTank); // get next tank
    }
    Sleep(1000);
}






