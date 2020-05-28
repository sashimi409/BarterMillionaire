#ifndef PARSER_H
#define PARSER_H

#include <unordered_map>
#include <string>
#include <vector>

#include "../src/Noun.h"
#include "../src/Verb.h"

class Parser {

	std::unordered_map<std::string, Noun> Nouns;
	std::unordered_map<std::string, Verb> Verbs;

	void Tokenize(std::string, std::vector<std::string>);
	void BuildCommand(std::vector<std::string>, std::vector<Word>);
	void RunCommand(std::vector<Word>);
	

public:
		Parser();
		void Parse(std::string);
			



};


#endif // !PARSER_H


