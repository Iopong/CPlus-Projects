#include <iostream>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "operand.h"
#include "plus.h"
#include "minus.h"
#include "times.h"
#include "divide.h"
#include "RelatOps.h"
#include "Negation.h"
#include "CondOps.h"
#include "LogicalOps.h"


SubExpression::SubExpression(char opr, Expression* left)
{
	this->opr = opr;
    this->left = left;
    this->right = right;
}

SubExpression::SubExpression(char opr, Expression* left, Expression* right)
{
	this->opr = opr;
    this->left = left;
    this->right = right;
}

SubExpression::SubExpression(Expression* left, Expression* right)
{
    this->left = left;
    this->right = right;
}

Expression* SubExpression::parse()
{
    Expression* left;
    Expression* right;
    char operation, paren;

    left = Operand::parse();
    cin >> operation;
    right = Operand::parse();
    cin >> paren;
    switch (operation)
    {
        case '+':
            return new Plus(left, right);
        case '-':
            return new Minus(left, right);
        case '*':
            return new Times(left, right);
        case '/':
            return new Divide(left, right);
        case '>':
        	return new RelatOps(operation, left, right);
        case '<':
        	return new RelatOps(operation, left, right);
        case '|':
        	return new LogicalOps(operation, left, right);
        case '&':
        	return new LogicalOps(operation, left, right);
        case '=':
            return new RelatOps(operation, left, right);
        case '!':
        	return new Negation(operation, left);
        case '?':
        	return new CondOps(operation, left, right);
        case ':':
        	return new CondOps(operation, left, right);

    }
    return 0;
}

