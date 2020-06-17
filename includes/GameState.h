#ifndef GAMESTATE_H
#define GAMESTATE_H

#include <vector>
#include "../includes/Store.h"
#include "../includes/Player.h"

class GameState
{
private:
	std::vector<Store*> GeneralStore;
    Player User;

public:
	GameState();
	void NewDay();
    void AddStore(Store*);
    void SetPlayer(Player);

};




#endif // !GAMESTATE_H
