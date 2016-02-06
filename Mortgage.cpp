#include "Mortgage.h"
#include <cmath>
using namespace std;
/*
* Project: Homework #2
* Version: 2.0 (History: 1.2, 1.1, 1.0)
* Class:   CS M10B
* Student: Rice, Sammuel D.
* Date:    20160204
* gitHub:  https://github.com/RoboticRice/CS-M10B-Projects.git
*/

/* 
* Notes:
* This was intended for use with HW3.cpp, and Mortgage.h
* This will NOT work with HW2.cpp anymore!
*/

//*****************************
//*** The Mutators (Public) ***
//*****************************
void Mortgage::setLoan(double amount)
{
    loan = amount;
}

void Mortgage::setIntR(double amount)
{
    intR = amount;
}

void Mortgage::setTerm(double amount)
{
    term = amount;
}

//******************************
//*** The Accessors (Public) ***
//******************************
double Mortgage::getPymt() const
{
    return (loan * intR / (1.0 - pow(intR+1, -term)));
}

double Mortgage::getTotl() const
{
    return (getPymt() * term);
}