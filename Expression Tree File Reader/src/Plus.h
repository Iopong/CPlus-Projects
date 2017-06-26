/*
 * Plus.h
 *
 *  Created on: May 7, 2017
 *      Author: Kofi
 */

#ifndef PLUS_H_
#define PLUS_H_

using namespace std;

#include "expression.h"
#include "subexpression.h"

class Plus: public SubExpression
{
public:
    Plus(Expression* left, Expression* right): SubExpression(left, right)
    {
    }
    int evaluate()
    {
       return left->evaluate() + right->evaluate();
    }
};




#endif /* PLUS_H_ */
