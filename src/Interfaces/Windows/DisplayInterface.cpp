#include <iostream>
#include <string>

#include "../../../includes/DisplayInterface.h"



//This is the windows interface file

void DisplayInterface::DisplayText(std::string input)
{
    std::cout << input << std::endl;

}


void DisplayInterface::ClearScreen()
{
    std::system("CLS");
}

void DisplayInterface::GetInput(std::string & result, std::string message)
{
    std::cout << message;
    std::cin >> result;
}
