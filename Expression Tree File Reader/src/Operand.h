/*
 * Operand.h
 *
 *  Created on: May 7, 2017
 *      Author: Kofi
 */

#ifndef OPERAND_H_
#define OPERAND_H_
#include <iostream>
#include "Expression.h"

using namespace std;

class Operand: public Expression
{
public:
    static Expression* parse();
};



#endif /* OPERAND_H_ */
