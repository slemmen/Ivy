#include "VirtualMachine.h"
#include "../Compiler/AssignCompilerToken.h"
#include "../Compiler/ConditionCompilerToken.h"
#include "../Compiler/FunctionCompilerToken.h"
#include "../Compiler/ReturnValueCompilerToken.h"
#include "../Compiler/SubConditionCompilerToken.h"

VirtualMachine::VirtualMachine()
{
}

VirtualMachine::~VirtualMachine()
{
}

void VirtualMachine::run(Action *firstAction)
{
	Action *action = firstAction;

	while (action != nullptr)
	{
		try
		{
			//TODO: set the currentsymboltable from the information from the current action
			//TODO: donothingaction

			//action = executeAction(action->getCompilerToken());
		}
		catch (exception e)
		{
			//TODO: runtime error handling
		}
	}
}


void VirtualMachine::updateVariable(string name, boost::any value)
{
	currentSymbolTable.updateExistingSymbol(name, value);
}

Action* VirtualMachine::executeAction(AssignCompilerToken compilerToken)
{
	//TODO: write this method
	return nullptr;
}

Action* VirtualMachine::executeAction(ConditionCompilerToken compilerToken)
{
	//TODO: write this method
	return nullptr;
}

Action* VirtualMachine::executeAction(FunctionCompilerToken compilerToken)
{
	//TODO: write this method
	return nullptr;
}

Action* VirtualMachine::executeAction(SubConditionCompilerToken compilerToken)
{
	//TODO: write this method
	return nullptr;
}

Action* VirtualMachine::executeAction(ReturnValueCompilerToken compilerToken)
{
	//TODO: write this methods
	return nullptr;
}

//
//bool MathOperatorCompilerToken::execute(VirtualMachine *vm)
//{
//	boost::any leftValue;
//	boost::any rightValue;
//
//	if (left.type() == typeid(CompilerToken))
//	{
//		CompilerToken leftCompilerToken = boost::any_cast<CompilerToken>(left);
//		leftCompilerToken.execute(vm);
//		leftValue = leftCompilerToken.getResult();
//	}
//	else
//	{
//		leftValue = left;
//	}
//
//	if (right.type() == typeid(CompilerToken))
//	{
//		CompilerToken rightCompilerToken = boost::any_cast<CompilerToken>(right);
//		rightCompilerToken.execute(vm);
//		rightValue = rightCompilerToken.getResult();
//	}
//	else
//	{
//		rightValue = left;
//	}
//
//	//Add may be used by strings and ints, the rest only by ints
//	if ((leftValue.type() == typeid(int) && rightValue.type() == typeid(int)) || (operatorType == ADD && leftValue.type() == typeid(string) && rightValue.type() == typeid(string)))
//	{
//		performOperation(leftValue, rightValue);
//	}
//	else
//	{
//		//TODO: better exception handling
//		throw new exception; //the left and rightvalue must be ints or strings and both need to be the same type. If this point is reached then that is NOT the case.
//	}
//
//	return true;
//}
//
//void MathOperatorCompilerToken::performOperation(boost::any leftValue, boost::any rightValue)
//{
//	switch (operatorType)
//	{
//	case ADD:
//		if (leftValue.type() == typeid(string))
//		{
//			result = boost::any_cast<string>(leftValue)+boost::any_cast<string>(rightValue);
//		}
//		else
//		{
//			result = boost::any_cast<int>(leftValue)+boost::any_cast<int>(rightValue);
//		}
//		break;
//
//	case SUBSTRACT:
//		result = boost::any_cast<int>(leftValue)-boost::any_cast<int>(rightValue);
//		break;
//
//	case MULTIPLY:
//		result = boost::any_cast<int>(leftValue)* boost::any_cast<int>(rightValue);
//		break;
//
//	case MODULO:
//		result = boost::any_cast<int>(leftValue) % boost::any_cast<int>(rightValue);
//		break;
//
//	case DIVIDE:
//		result = boost::any_cast<int>(leftValue) / boost::any_cast<int>(rightValue);
//		break;
//	}
//}

//bool AssignCompilerToken::execute(VirtualMachine *vm)
//{
//	//the left hand of an assign is always a variable name
//	std::string name = boost::any_cast<std::string>(left);
//
//	if (right.type() == typeid(CompilerToken))
//	{
//		CompilerToken rightCompilerToken = boost::any_cast<CompilerToken>(right);
//		rightCompilerToken.execute(vm);
//		vm->updateVariable(name, rightCompilerToken.getResult());
//	}
//	else
//	{
//		vm->updateVariable(name, right);
//	}
//
//	return true;
//}