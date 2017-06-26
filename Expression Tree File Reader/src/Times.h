/*
 * Times.h
 *
 *  Created on: May 7, 2017
 *      Author: Kofi
 */

#ifndef TIMES_H_
#define TIMES_H_
#include "expression.h"
#include "subexpression.h"

using namespace std;

class Times: public SubExpression
{
public:
    Times(Expression* left, Expression* right): SubExpression(left, right)
    {
    }

    int evaluate()
     {
           return left->evaluate() * right->evaluate();
     }
};




#endif /* TIMES_H_ */
