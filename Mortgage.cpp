#include "Mortgage.h"
#include <iostream>
#include <cmath>
using namespace std;
/*
* Project: Homework #2
* Class:   CS M10B
* Student: Rice, Sammuel D.
* Date:    20160123
* gitHub:  https://github.com/RoboticRice/CS-M10B-Projects.git
*/

/* 
* Notes:
* This was intended for use with HW2.cpp, and Mortgage.h
*/

//************************
//*** The constructors ***
//************************
Mortgage::Mortgage()
{
    //Set all values to default 0 in case of error.
    pymt = 0;
    loan = 0;
    intR = 0;
    year = 0;
}

//******************************
//*** The Accessors (Public) ***
//******************************
// void Mortgage::setLoan(float amount)
// {
//     if (amount >= 0)
//         loan = amount;
//     else
//         cout << "ERROR: Loan must be non-negative." << endl << "ERROR: Loan set to 0." << endl;
// }

// void Mortgage::setIntR(float amount)
// {
//     if (amount != 0)
//         intR = amount/100;
//     else
//         intR = amount;
// }

// void Mortgage::setYear(float amount)
// {
//     year = amount;
// }

void Mortgage::setLoan()
{
    float amount = 0;
    cout << "What is the current amount of dollars you have on your loan: $";
    cin >> amount;
    if (amount >= 0)
        loan = amount;
    else
        cout << "ERROR: Loan must be non-negative." << endl << "ERROR: Loan set to 0." << endl;
}

void Mortgage::setIntR()
{
    float amount = 0;
    cout << "What is your annual interest rate on your loan: %";
    cin >> amount;
    if (amount != 0)
        intR = amount/100;
    else
        intR = amount;
}

void Mortgage::setYear()
{
    cout << "How many years do you have left on your loan: ";
    cin >> year;
}

//*****************************
//*** The Mutators (Public) ***
//*****************************
float Mortgage::getPymt() const
{
    return (loan * (intR/12) * getTerm()) / (getTerm()-1);
}

float Mortgage::getTotl() const
{
    return getPymt() * 12 * year;
}

//*******************************
//*** The Accessors (Private) ***
//*******************************
float Mortgage::getTerm() const
{
    return pow((1 + (intR/12)), (12 * year));
}