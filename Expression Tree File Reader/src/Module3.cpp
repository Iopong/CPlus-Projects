/*
 * Module3.cpp

 *
 *  Created on: May 7, 2017
 *      Author: Kofi
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "expression.h"
#include "subexpression.h"
#include "symboltable.h"
#include "parse.h"
#include <fstream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <istream>
#include <fstream>

SymbolTable symbolTable;

void parseAssignments();

int main()
{
	streambuf *read, *original;
	ifstream fileRead;
    Expression* expression;
    char paren, comma;
    string program;

    original = cin.rdbuf();
    read = fileRead.rdbuf();
    cin.rdbuf(read);

    fileRead.open("ish.txt");
    if(!fileRead){
    	cout<<"Could not open file" <<endl;
    }

    while(!fileRead.eof()){
    	cin >> paren;
    	expression = SubExpression::parse();
    	cin >> comma;
    	parseAssignments();
    	cout << "Value = " << expression->evaluate() << endl;
    	return 0;
    }
    //cout << "Enter expression: ";
    //cin >> paren;
    //expression = SubExpression::parse();
    //cin >> comma;
    //parseAssignments();
    //cout << "Value = " << expression->evaluate() << endl;
    //return 0;
}

void parseAssignments()
{
    char assignop, delimiter;
    string variable;
    double value;
    do
    {
        variable = parseName();
        cin >> ws >> assignop >> value >> delimiter;
        symbolTable.insert(variable, value);
    }
    while (delimiter == ',');
}




