#ifndef GAME_H
#define GAME_H

#include "tank.h"
#include "davinci.h"
#include "list.h"
const int NUM_TANKS = 20;

class Game
{
    bool m_isContinue;  // start game

    //Tank* m_pTanks; // pointer to tank's array
    List m_tankList;

    Davinci m_painter;

public:
    void start();
    void stop();
    Game();
    ~Game();
};

#endif // GAME_H
