#include <cstdlib>
#include <iostream>
#include <string>

#include "../../../includes/DisplayInterface.h"


void DisplayInterface::DisplayText(std::string input)
{
    std::cout << input << std::endl;

}

void DisplayInterface::ClearScreen()
{

    std::system("clear");
}


void DisplayInterface::GetInput(std::string& result, std::string message)
{
    std::cout << message;
    std::cin >> result;
}
