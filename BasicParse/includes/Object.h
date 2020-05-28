#ifndef OBJECT_H
#define OBJECT_H

#include <vector>
#include "../src/Word.h"


//Base class target application will extend from
class Object {

public: 
	void Register();
	void HandleCommand(std::vector<Word> Command, std::vector<Word> arguments);

};

#endif // !OBJECT_H