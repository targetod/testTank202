#ifndef GAME_H
#define GAME_H

#include "tank.h"
#include "davinci.h"
#include "list.h"
#include <vector>
const int NUM_TANKS = 20;
const int N =10; // static


class Game
{
    bool m_isContinue;  // start game
    //Tank* m_pTanks; // pointer to tank's array
    //List m_tankList;
    std::vector<Tank> m_vTanks;
    Davinci * m_painter;

    static int val;

public:
    void start();
    void stop();

    static Game& getInstance(){
        static Game game;
        return game;
    }

private:
    Game();
    ~Game();
    Game& operator=(const Game & obj);
    Game(const Game & obj);
};




#endif // GAME_H
