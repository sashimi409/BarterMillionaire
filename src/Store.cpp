#include <string>
#include "../includes/Good.h"

class Store
{
private:
	std::string name = "";
	void Refresh();
	Good Goods[5];


public:
	Store();
	~Store();
	void Display();
	


};


Store::Store()
{
	//choose 5 random items to sell
	//choose a name for the shop
	Goods[5];

}

Store::~Store()
{


}



void Store::Display()
{


}


void Store::Refresh()
{


}

