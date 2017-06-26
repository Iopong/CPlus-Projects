/*
 * LogicalOps.h
 *
 *  Created on: May 7, 2017
 *      Author: Kofi
 */

class LogicalOps: public SubExpression
{
public:
	LogicalOps(char opr, Expression* left, Expression* right): SubExpression(opr, left, right)
    {
    }
    int evaluate()
    {
    	if(opr == '&'){
    		return left->evaluate() && right->evaluate();
    	}else if(opr == '|'){
    		return left->evaluate() || right->evaluate();
    	}
    }
};
