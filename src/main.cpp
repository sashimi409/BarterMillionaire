#include <iostream>
#include "../includes/Store.h"

void quit(bool &Running)
{
	Running = false;

}


struct Settings
{


};


int main() {
	
	bool Running = true;
	

	//introduction text

	std::cout <<"Welcome" << std::endl << std::endl;


	system("Pause"); 

	Store GeneralStore;




	while (Running)
	{
		system("CLS"); //Clear screen
		GeneralStore.Display();
		//Display text to user
		//Get input from user


		quit(Running);
	}


}


