#include <string>

class Store
{
private:
	std::string name;
	void Refresh();
	//Functions
public:
	Store();
	~Store();
	void Display();
	
};