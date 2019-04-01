

#include <iostream>
#include "fileworker.h"

#include "game.h"

#include <crtdbg.h>
#define _CRTDBG_MAP_ALLOC

using namespace std;

//string arr[10]= {"t1", "t2", "t3"};

#include "list.h"

int main()
{
    {
        List lst;
        lst.insertData(1);
        lst.insertData(2);
        lst.insertData(3);
        lst.insertData(20);
        lst.showData();
    }

  // Game game;
  // game.start();

   // commit to master
   // branch has been created

   //cout << "branch" <<endl;

   if ( _CrtDumpMemoryLeaks() )
   {
       cout << "mem leaks" << endl;
   }

   return 0;
}



