/*
 * Negation.h
 *
 *  Created on: May 7, 2017
 *      Author: Kofi
 */

class Negation: public SubExpression
{
public:
	Negation(char opr, Expression* left): SubExpression(opr, left)
    {
    }
    int evaluate()
    {
    	if(opr == '!'){
    		return !left->evaluate() ;
    	}
    }
};
