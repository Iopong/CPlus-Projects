/*
 * Divide.h
 *
 *  Created on: May 7, 2017
 *      Author: Kofi
 */

#ifndef DIVIDE_H_
#define DIVIDE_H_
#include "expression.h"
#include "subexpression.h"

using namespace std;

class Divide: public SubExpression
{
public:
    Divide(Expression* left, Expression* right): SubExpression(left, right)
    {
    }
    int evaluate()
    {
       return left->evaluate() / right->evaluate();
    }
};




#endif /* DIVIDE_H_ */
