#include "davinci.h"

#include <windows.h>
#include <iostream>

using namespace  std;



void DavinciConsole::gotoxy(int x, int y)
{
  HANDLE hndl = GetStdHandle(STD_OUTPUT_HANDLE);

  COORD coord;
  coord.X = static_cast<SHORT>(x);
  coord.Y = (SHORT)y;
  SetConsoleCursorPosition(hndl,coord);
}

void DavinciConsole::draw(const Tank* const pTanks,const int N)
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

void DavinciConsole::draw(const List & lstTank)
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

//=================================  sfml

void DavinciSFML::drawBoard()
{
    // clear the window with black color
    m_window.clear(sf::Color::Black);
    m_window.display();
}

void DavinciSFML::draw(const Tank* const pTanks,const int N)
{
// TODO
}

void DavinciSFML::draw(const List & lstTank)
{
    m_window.clear();
    Tank* pCurTank = lstTank.getNextTank(nullptr); // get first tank
    while (pCurTank != nullptr)
    {
        Point coord = pCurTank ->getCoord();

        sf::CircleShape shape(10.f);  // tank form
        // set the shape color to green
        shape.setFillColor(sf::Color(100, 250, 50));

        // set the absolute position of the entity
        shape.setPosition(coord.x, coord.y);

        // move the entity relatively to its current position
        //shape.move(5.f, 5.f);
        m_window.draw(shape);

        pCurTank = lstTank.getNextTank(pCurTank); // get next tank
    }

    m_window.display();

    Sleep(1000);
}


DavinciSFML::~DavinciSFML(){
   m_window.close();
}



