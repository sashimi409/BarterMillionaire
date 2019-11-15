#ifndef PARSER_H
#define PARSER_H

#include <unordered_map>
#include <string>

#include "../src/Noun.h"
#include "../src/Verb.h"

class Parser {

	std::unordered_map<std::string, Noun> Nouns;
	std::unordered_map<std::string, Verb> Verbs;



};


#endif // !PARSER_H


