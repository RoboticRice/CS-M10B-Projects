#include "Mortgage.h"
#include <iostream>
#include <cmath>
using namespace std;
/*
* Project: Homework #2
* Version: 1.2 (History: 1.1, 1.0)
* Class:   CS M10B
* Student: Rice, Sammuel D.
* Date:    20160128
* gitHub:  https://github.com/RoboticRice/CS-M10B-Projects.git
*/

/* 
* Notes:
* This was intended for use with HW2.cpp, and Mortgage.h
*/

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
    intR = intR/1200;
}

void Mortgage::setTerm()
{
    cout << "How many years do you have left on your loan: ";
    cin >> term;
    while (loan <= 0) 
    {
        cout << "ERROR: Years must be greater than 0." << endl;
        cout << "How many years do you have left on your loan: ";
        cin >> term;
    }
    term = term*12;
}

//******************************
//*** The Accessors (Public) ***
//******************************
void Mortgage::getPymt() const
{
    cout << "Your monthly payment will be: $" << (loan * intR / (1.0 - pow(intR+1, -term))) << endl;
}

void Mortgage::getTotl() const
{
    cout << "Total paid after the loan has been paid off: $" << ((loan * intR / (1.0 - pow(intR+1, -term))) * term) << endl;
}