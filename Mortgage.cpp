#include "Mortgage.h"
#include <iostream>
#include <cmath>
using namespace std;
/*
* Project: Homework #2
* Class:   CS M10B
* Student: Rice, Sammuel D.
* Date:    20160125
* gitHub:  https://github.com/RoboticRice/CS-M10B-Projects.git
*/

/* 
* Notes:
* This was intended for use with HW2.cpp, and Mortgage.h
*/

// Constructor not required.
// //************************
// //*** The constructors ***
// //************************
// Mortgage::Mortgage()
// {
//     //Set all values to default 0 in case of error.
//     pymt = 0;
//     loan = 0;
//     intR = 0;
//     year = 0;
// }

//*****************************
//*** The Mutators (Public) ***
//*****************************
void Mortgage::setLoan()
{
    cout << "What is the current amount of dollars you have on your loan: $";
    cin >> loan;
    while (loan <= 0) 
    {
        cout << "ERROR: Loan must be greater than 0." << endl;
        cout << "What is the current amount of dollars you have on your loan: $";
        cin >> loan;
    }
}

void Mortgage::setIntR()
{
    cout << "What is your annual interest rate on your loan: %";
    cin >> intR;
    while (loan <= 0) 
    {
        cout << "ERROR: Interest must be greater than 0." << endl;
        cout << "What is your annual interest rate on your loan: %";
        cin >> intR;
    }
    intR = intR/100;
}

void Mortgage::setYear()
{
    cout << "How many years do you have left on your loan: ";
    cin >> year;
    while (loan <= 0) 
    {
        cout << "ERROR: Years must be greater than 0." << endl;
        cout << "How many years do you have left on your loan: ";
        cin >> year;
    }
}

//******************************
//*** The Accessors (Public) ***
//******************************
void Mortgage::getPymt() const
{
    cout << "Your monthly payment will be: $" << (loan * (intR/12) * getTerm() / (getTerm()-1.0)) << endl;
}

void Mortgage::getTotl() const
{
    cout << "Total paid after the loan has been paid off: $" << (((loan * (intR/12) * getTerm()) / (getTerm()-1.0)) * 12 * year) << endl;
}

//*******************************
//*** The Accessors (Private) ***
//*******************************
float Mortgage::getTerm() const
{
    return pow((1 + (intR/12)), (12 * year));
}