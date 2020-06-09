#include <iostream>
#include <string>

#include "../../includes/Store.h"
#include "../../includes/Setup.h"
#include "../../includes/GameState.h"

void quit(bool &Running)
{
	Running = false;

}


struct Settings
{


};


int main() {
	
	bool Running = true;
	
	GameState Game;
	Parser TextParser;
	SetupGame(Game, TextParser); //Sets up game and Starts The Parser


	//introduction text
    system("clear");

	std::cout <<"Welcome To Barter Millionaire" << std::endl << std::endl;
	std::cout << "Press any key to continue" << std::endl << std::endl;
    
    std::cin.get();



	while (Running)
	{
		system("clear"); //Clear screen
		
		//Display text to user
		//Get input from user


		quit(Running);
	}


}


