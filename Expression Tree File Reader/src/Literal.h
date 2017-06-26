/*
 * Literal.h
 *
 *  Created on: May 7, 2017
 *      Author: Kofi
 */

#ifndef LITERAL_H_
#define LITERAL_H_
#include <iostream>
using namespace std;

class Literal: public Operand
{
public:
    Literal(double value)
    {
        this->value = value;
    }
    int evaluate()
      {
            return value;
       }
private:
    double value;
};

#endif /* LITERAL_H_ */
