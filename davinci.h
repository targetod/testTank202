#ifndef DAVINCI_H
#define DAVINCI_H

#include "tank.h"
#include "list.h"
#include <SFML/Graphics.hpp>


class Davinci
{
public:

    virtual void drawBoard() = 0;
    virtual void draw(const Tank* const pTanks, const int N)=0;
    virtual void draw(const List & lstTank)=0;    //  draw(Obj);
    virtual void draw(const std::vector<Tank> & vTank) = 0;
    virtual ~Davinci() {}
};

class DavinciConsole : public Davinci
{
public:

    void drawBoard() {/*empty*/}
    void draw(const Tank* const pTanks, const int N);
    void draw(const List & lstTank);    //  draw(Obj);
    void draw(const std::vector<Tank> & vTank)
    {
        // todo
    }

    //void draw(const List * lstTank);  //  draw(&Obj);
private:
    void gotoxy(int x, int y);
};


class DavinciSFML : public Davinci
{
    // create the window
    sf::RenderWindow m_window;

public:
    DavinciSFML() : m_window(sf::VideoMode(800, 600), "Tanks") {    }
    ~DavinciSFML();

    void drawBoard();
    void draw(const Tank* const pTanks, const int N);
    void draw(const List & lstTank);    //  draw(Obj);
    void draw(const std::vector<Tank> & vTank);

    //void draw(const List * lstTank);  //  draw(&Obj);
private:

};


#endif // DAVINCI_H
