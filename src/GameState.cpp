#include "../includes/GameState.h"
#include "../includes/Store.h"
#include <memory>


GameState::GameState(DisplayInterface theInterface, int NumStores)
{
    Interface = theInterface;
	//Add store to the list

    for(int i = 0; i < NumStores ; i++)
    {
        Stores[i] = std::make_unique<Store>();
    }
}

void GameState::NewDay()
{
    //choose new store to be displayed
    
    CurrentStore = 0; 
    Stores[CurrentStore]->Display(Interface);
}


void GameState::SetPlayer(Player NewUser)
{
   this->User = NewUser; 
}
