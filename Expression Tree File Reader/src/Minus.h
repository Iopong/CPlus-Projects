/*
 * Minus.h
 *
 *  Created on: May 7, 2017
 *      Author: Kofi
 */

#ifndef MINUS_H_
#define MINUS_H_
using namespace std;
#include "expression.h"
#include "subexpression.h"

class Minus: public SubExpression
{
public:
    Minus(Expression* left, Expression* right): SubExpression(left, right)
    {
    }
    int evaluate()
    {
       return left->evaluate() - right->evaluate();
    }
};





#endif /* MINUS_H_ */
