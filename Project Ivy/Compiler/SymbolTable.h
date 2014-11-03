#pragma once
#include <string>
#include <vector>

#include "Symbol.h"


class SymbolTable
{
public:
	SymbolTable();
	~SymbolTable();

	void addSymbolToTable(std::string name);
	void updateExistingSymbol(std::string name, boost::any value);

	bool hasSymbol(std::string);

	int getLevel();

private:
	int level;
	std::vector<Symbol*> symbols;
};

