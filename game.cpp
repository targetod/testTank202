#include "game.h"

Game::Game() : m_isContinue(true)
{
    //m_pTanks = createTanks(NUM_TANKS);
    m_tankList.insertData( Tank(100,30,"T1") );
    m_tankList.insertData( Tank(100,20,"T2") );
    m_tankList.insertData( Tank(100,20,"T3") );
}

Game::~Game()
{
   //deleteTanks(m_pTanks);
}

void Game::start()
{

    while(m_isContinue)
    {
        int N = m_tankList.size();
        for(int i = 0; i< N  ; ++i){
            // m_pTanks[i].move();
            // m_tankList
        }

        m_painter.draw(m_pTanks, NUM_TANKS);

        m_pTanks[0].show();
        m_pTanks[0] = m_pTanks[0] + 20;
       // m_pTanks[0] += 20;
       // m_pTanks[0].show();
    }
}


void Game::stop()
{
    m_isContinue = false;
}
