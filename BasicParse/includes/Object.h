#ifndef OBJECT_H
#define OBJECT_H

#include <vector>
#include <string>

//Base class target application will extend from
class Object {

public: 
	void Register();
	void HandleCommand(std::vector<std::string> Command, std::vector<std::string> arguments);

};

#endif // !OBJECT_H
