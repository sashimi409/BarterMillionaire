#ifndef STORE_H
#define STORE_H

#include <string>
#include <memory>
#include "../includes/Good.h"


class Store
{
private:
	std::string name;
	void Refresh();
	std::unique_ptr<Good> Goods[8];
	//Functions
public:
	Store();
	~Store();
	void Display();
	bool buy(Good);
	
	
};

#endif