#ifndef OBJECT_H
#define OBJECT_H

#include "../src/Word.h"


//Base class target application will extend from
class Object {

	void Register();
	void HandleCommand(std::vector<Word> Command, std::vector<Word> arguments);

};

#endif // !OBJECT_H