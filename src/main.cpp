#include <iostream>
#include "../includes/Store.h"
#include "../includes/Setup.h"
#include "../includes/GameState.h"

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

	std::cout <<"Welcome" << std::endl << std::endl;


	while (Running)
	{
		system("CLS"); //Clear screen
		
		//Display text to user
		//Get input from user


		quit(Running);
	}


}


