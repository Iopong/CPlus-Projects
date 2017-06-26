/*
 * Variable.cpp
 *
 *  Created on: May 7, 2017
 *      Author: Kofi
 */

#include <strstream>
#include <vector>
using namespace std;

#include "expression.h"
#include "operand.h"
#include "variable.h"
#include "symboltable.h"

extern SymbolTable symbolTable;

int Variable::evaluate()
{
    return symbolTable.lookUp(name);
}

