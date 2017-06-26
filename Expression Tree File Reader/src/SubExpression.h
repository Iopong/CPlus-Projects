/*
 * SubExpression.h
 *
 *  Created on: May 7, 2017
 *      Author: Kofi
 */

#ifndef SUBEXPRESSION_H_
#define SUBEXPRESSION_H_
#include "Expression.h"

class SubExpression: public Expression
{
public:
	SubExpression(char opr, Expression* left);
	SubExpression(char opr, Expression* left, Expression* right);
    SubExpression(Expression* left, Expression* right);
    static Expression* parse();
protected:
    char opr;
    Expression* left;
    Expression* right;
};

#endif /* SUBEXPRESSION_H_ */
