#ifndef GAME_H
#define GAME_H

#include "tank.h"
#include "davinci.h"

const int NUM_TANKS = 20;

class Game
{
    bool m_isContinue;  // start game

    Tank* m_pTanks; // pointer to tank's array

    Davinci m_painter;

public:
    void start();
    void stop();
    Game();
    ~Game();
};

#endif // GAME_H
