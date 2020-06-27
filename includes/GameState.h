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
    Store* CurrentStore;

public:
	GameState();
	void NewDay();
    void AddStore(Store*);
    void SetPlayer(Player);
    Store* GetCurrent(){return CurrentStore;};

};




#endif // !GAMESTATE_H
