#include "../includes/GameState.h"
#include "../includes/Store.h"
#include <cstdlib>
#include <memory>
#include <math.h>

GameState::GameState(DisplayInterface theInterface, int NumStores)
{
    Interface = theInterface;
	//Add store to the list

    for(int i = 0; i < NumStores ; i++)
    {
        Stores.push_back(std::make_unique<Store>());
    }
}

void GameState::NewDay()
{
    //choose new store to be displayed
    
    CurrentStore = rand() % Stores.size();
    Stores[CurrentStore]->Display(Interface);
}


void GameState::SetPlayer(Player NewUser)
{
   this->User = NewUser; 
}
