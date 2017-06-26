/*
 * SymbolTable.h

 *
 *  Created on: May 7, 2017
 *      Author: Kofi
 */

#ifndef SYMBOLTABLE_H_
#define SYMBOLTABLE_H_
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class SymbolTable
{
public:
    SymbolTable() {}
    void insert(string variable, double value);
    double lookUp(string variable) const;
private:
    struct Symbol
    {
        Symbol(string variable, double value)
        {
            this->variable = variable;
            this->value = value;
        }
        string variable;
        double value;
    };
    vector<Symbol> elements;
};

#endif /* SYMBOLTABLE_H_ */
