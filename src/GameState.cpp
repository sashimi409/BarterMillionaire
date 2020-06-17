#include "../includes/GameState.h"
#include "../includes/Store.h"
GameState::GameState()
{
	//Add store to the list

}

void GameState::NewDay()
{

}

void GameState::AddStore(Store* ToAdd)
{
    GeneralStore.push_back(ToAdd);
}

void GameState::SetPlayer(Player NewUser)
{
   this->User = NewUser; 
}
