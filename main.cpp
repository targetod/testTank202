

#include <iostream>
#include "fileworker.h"
#include "game.h"

using namespace std;



int main()
{

   Game::getInstance().start();
   Game& game = Game::getInstance();
   game.start();



   return 0;
}



