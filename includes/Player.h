#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include <vector>
#include "../includes/Good.h"
#include "../includes/Item.h"
#include "../BasicParse/includes/Object.h"


class Player : public Object
{
public:
	bool sell(Item);


private:
	float Wallet; //Will be the amount of currency you have
	std::vector<Good> Inventory;
	void Register();
	void HandleCommand(std::vector<std::string> Command, std::vector<std::string> arguments);

};

#endif // !PLAYER_H


