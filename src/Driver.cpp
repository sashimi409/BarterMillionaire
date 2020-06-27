
#include "../includes/DisplayInterface.h"
#include "../includes/GameState.h"
#include "../includes/Store.h"
#include "../includes/Setup.h"
#include <string>

//going to be the main loop
//will connect to the correct inerface for display
//
int main()
{
    
    bool Running = true;

    DisplayInterface Interface;
    GameState Game(Interface);
    Parser TextParser;
    SetupGame( Game, TextParser);
    std::string Input;

    Interface.DisplayText("Welcome to Barter Millionaire");
    Interface.DisplayText("Press any key to continue");

    Interface.GetInput(Input);

    while(Running)
    {
        Interface.ClearScreen();


        Game.NewDay();
        Interface.GetInput(Input);
        TextParser.Parse(Input);

        Running = false;
    }
    

    return 0;
}
