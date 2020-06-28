#ifndef GAMESTATE_H
#define GAMESTATE_H

#include <memory>
#include <vector>
#include "../includes/Store.h"
#include "../includes/Player.h"
#include "DisplayInterface.h"

class GameState
{
private:
    std::vector<std::unique_ptr<Store>> Stores;
    Player User;
    int CurrentStore;
    DisplayInterface Interface;

public:
	GameState(DisplayInterface Interface, int NumStores = 5);
	void NewDay();
    void SetPlayer(Player);

};




#endif // !GAMESTATE_H
