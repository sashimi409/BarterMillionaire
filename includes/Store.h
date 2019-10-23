#ifndef STORE_H
#define STORE_H

#include <string>
#include "../includes/Good.h"

class Store
{
private:
	std::string name;
	void Refresh();
	Good* Goods[8];
	//Functions
public:
	Store();
	~Store();
	void Display();
	bool buy(Good);
	
};

#endif