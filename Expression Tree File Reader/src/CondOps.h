/*
 * CondOps.h
 *
 *  Created on: May 7, 2017
 *      Author: Kofi
 */

class CondOps: public SubExpression
{
public:
	CondOps(char opr, Expression* left, Expression* right): SubExpression(opr, left, right)
    {
    }
    int evaluate()
    {
    	if(opr == '?'){
    		if(right->evaluate() == 0 || right->evaluate() < 0){
    			return 0;
    		}else if(right->evaluate() == 1){
    			return left->evaluate();
    		}
    	}else if(opr == ':'){
    		if(right->evaluate() == 0){
    			return left->evaluate();
    		}else if(right->evaluate() != 0){
    			return right->evaluate();
    		}
    	}
    }
};
