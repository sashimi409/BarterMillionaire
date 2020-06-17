#include "../includes/GameState.h"
#include "../includes/Setup.h"
#include "../BasicParse/includes/Parser.h"
#include "../includes/Player.h"


void SetupGame(GameState& Current, Parser& TextParser)
{
    //begin creating objects to populate the world

    Player NewPlayer;

    Current.SetPlayer(NewPlayer);
    

    for(int i = 0; i<5; i++)
    {
        Store NewStore;
        NewStore.Random();
        Current.AddStore(&NewStore);
    }


	//Set initial values for the game

	//Adds Stuff to lists for the parser


}
