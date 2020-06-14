#ifndef DISPLAYINTERFACE
#define DISPLAYINTERFACE

#include <string>


class DisplayInterface
{
    private:

    public:
    void DisplayText(std::string);
    void ClearScreen();
    void GetInput(std::string& , std::string = "");    

};



#endif
