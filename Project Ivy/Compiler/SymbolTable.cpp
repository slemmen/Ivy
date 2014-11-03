#include "SymbolTable.h"

SymbolTable::SymbolTable(int level, string functionName)
{

}

SymbolTable::SymbolTable()
{

}

SymbolTable::~SymbolTable()
{
	for each(Symbol* s in symbols) {
		delete s;
	}
}


void SymbolTable::addSymbolToTable(string name)
{
	//check if there isn't already an existing variable with the same name, in that case an exception is thrown
	for each (Symbol* symbol in symbols)
	{
		if (symbol->getName() == name)
		{
			throw new exception; //TODO: better exception handling
		}
	}

	symbols.push_back(new Symbol(name));
}


void SymbolTable::updateExistingSymbol(string name, boost::any value)
{
	for each (Symbol* symbol in symbols)
	{
		if (symbol->getName() == name)
		{
			symbol->setValue(value);
			return;
		}
	}

	//symbol was not found in the symboltable
	throw new exception; //TODO: better exception handling
}

bool SymbolTable::hasSymbol(string name)
{
	for each (Symbol* symbol in symbols)
	{
		if (symbol->getName() == name)
			return true;
	}
	return false;
}

boost::any SymbolTable::getValue(string name)
{
	for each (Symbol* symbol in symbols)
	{
		if (symbol->getName() == name)
			return symbol->getValue();
	}
	
	throw new exception; //Symbol not found. TODO: better exception handling
}