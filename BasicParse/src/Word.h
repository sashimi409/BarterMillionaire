#ifndef WORD_H
#define WORD_H

#include <iostream>

class Word
{
	//class used for parser inheritance
	std::string Name;

public:
	

	friend std::ostream& operator<<(std::ostream& stream, const Word& data);



};

#endif