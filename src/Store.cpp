#include <string>
#include "..\includes\Good.h"
#include "..\includes\Store.h"




Store::Store()
{
	//populate shop with all items
	
	for (int i = 0; i < 8; i++)
	{
		Good* temp = new Good;
		Store::Goods[i] = temp;
	}
	//choose a name for the shop
	

}

Store::~Store()
{


}



void Store::Display()
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

