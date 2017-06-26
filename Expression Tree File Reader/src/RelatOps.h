/*
 * RelatOps.h
 *
 *  Created on: May 7, 2017
 *      Author: Kofi
 */

class RelatOps: public SubExpression
{
public:
	RelatOps(char opr, Expression* left, Expression* right): SubExpression(opr, left, right)
    {
    }
    int evaluate()
    {
    	if(opr == '>'){
    		return left->evaluate() > right->evaluate();
    	}else if(opr == '<'){
    		return left->evaluate() < right->evaluate();
    	}else if(opr == '='){
    		return left->evaluate() == right->evaluate();
    	}
    }
};
