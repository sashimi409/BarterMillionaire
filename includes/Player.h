#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include "../includes/Good.h"
#include "../includes/Item.h"


class Player
{
public:
	bool sell(Item);


private:
	float Wallet; //Will be the amount of currency you have
	std::vector<Good> Inventory;

};

#endif // !PLAYER_H


