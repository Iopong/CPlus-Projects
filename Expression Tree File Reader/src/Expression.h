/*
 * Expression.h
 *
 *  Created on: May 7, 2017
 *      Author: Kofi
 */

#ifndef EXPRESSION_H_
#define EXPRESSION_H_

class Expression {
public:
	Expression();
	virtual int evaluate() = 0;
	virtual ~Expression();
};

#endif /* EXPRESSION_H_ */
