#include "game.h"

Game::Game() : m_isContinue(true)
{
    m_pTanks = createTanks(NUM_TANKS);
}

Game::~Game()
{
   deleteTanks(m_pTanks);
}

void Game::start()
{

    while(m_isContinue)
    {
        for(int i = 0; i<NUM_TANKS; ++i){
            m_pTanks[i].move();
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
