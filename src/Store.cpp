#include <string>
#include <memory>
#include "../includes/Good.h"
#include "../includes/Store.h"




Store::Store()
{
	//populate shop with all items
	
	for (int i = 0; i < 8; i++)
	{

		Store::Goods[i] = std::make_unique<Good>();
	}
	//choose a name for the shop
	

}

Store::~Store()
{


}



void Store::Display(DisplayInterface& Interface)
{
	//will only display the first 5 items in the array for sale. 

}

bool Store::buy(Good)
{
	//returns true if you were able to buy the item
	return false;
}



void Store::Refresh()
{


}

void Store::Random()
{

}
