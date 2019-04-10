

#include <iostream>
#include "fileworker.h"

#include "game.h"

#include <crtdbg.h>
#define _CRTDBG_MAP_ALLOC

using namespace std;

//string arr[10]= {"t1", "t2", "t3"};

#include "list.h"

void showGlobal ()
{
    static int global = 0;
    cout << global <<endl;
    global ++;
}

int main()
{


   Game game;
   game.start();


   // commit to master
   // branch has been created

   //cout << "branch" <<endl;

   if ( _CrtDumpMemoryLeaks() )
   {
       cout << "mem leaks" << endl;
   }

   return 0;
}



