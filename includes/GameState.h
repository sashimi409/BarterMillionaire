#ifndef GAMESTATE_H
#define GAMESTATE_H

#include <vector>
#include "../includes/Store.h"

class GameState
{
private:
	std::vector<Store> GeneralStore;

public:
	GameState();
	void NewDay();
};




#endif // !GAMESTATE_H
