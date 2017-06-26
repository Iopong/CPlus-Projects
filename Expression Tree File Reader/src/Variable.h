/*
 * Variable.h
 *
 *  Created on: May 7, 2017
 *      Author: Kofi
 */

#ifndef VARIABLE_H_
#define VARIABLE_H_
#include <iostream>
#include <string>
#include "Operand.h"
using namespace std;

class Variable: public Operand
{
public:
    Variable(string name)
    {
        this->name = name;
    }
    int evaluate();
private:
    string name;
};

#endif /* VARIABLE_H_ */
