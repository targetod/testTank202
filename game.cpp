#include "game.h"



#include <iostream>


Game::Game() : m_isContinue(true)
{
    //cout << global <<endl;
    //m_pTanks = createTanks(NUM_TANKS);
   // m_tankList.insertData( Tank(100,30,"T1") );
   // m_tankList.insertData( Tank(100,20,"T2") );
    //std::cout << Tank::m_numOfTanks << std::endl;
    //m_tankList.insertData( Tank(100,20,"T3") );
    //std::cout << Tank::m_numOfTanks << std::endl;

    m_vTanks.push_back(Tank(100,30,"T1"));
    m_vTanks.push_back(Tank(100,20,"T2"));
    m_vTanks.push_back(Tank(100,20,"T3"));


    m_painter = new DavinciSFML();
    //m_painter = new DavinciConsole();
}

Game::~Game()
{
   //deleteTanks(m_pTanks);
    delete m_painter;
}

void Game::start()
{
    m_painter->drawBoard();

    while(m_isContinue)
    {
        int N = m_vTanks.size();
        for(int i = 0; i< N  ; ++i){
            m_vTanks[i].move();
        }
        m_painter->draw(m_vTanks);


        // other way
        //std::vector<Tank>::iterator iter = m_vTanks.begin();
        /*
        auto iter = m_vTanks.begin();
        for ( ; iter != m_vTanks.end() ; ++iter )
        {
            iter->move();
        }

        for (auto tnk : m_vTanks) {
            tnk.move();
        }
        */

        //int N = m_tankList.size();
        //for(int i = 0; i< N  ; ++i){
            // m_pTanks[i].move();
            // m_tankList
        //}


     //   Tank* pCurTank = m_tankList.getNextTank(nullptr);
     //   while (pCurTank != nullptr)
     //   {
     //       pCurTank ->move();
     //       pCurTank = m_tankList.getNextTank(pCurTank);
     //   }

       // m_painter->draw(m_pTanks, NUM_TANKS);
       // m_painter->draw(m_tankList);

       // m_pTanks[0].show();
       // m_pTanks[0] = m_pTanks[0] + 20;
       // m_pTanks[0] += 20;
       // m_pTanks[0].show();
    }
}


void Game::stop()
{
    m_isContinue = false;
}
