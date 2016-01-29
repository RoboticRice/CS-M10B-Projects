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
    while ((!(cin >> loan)) || (loan <= 0)) //If cin does NOT accept input for loan, OR, loan <= 0, then:
    {
        cin.clear(); //Clear any warning
        cin.ignore(); //Ingore everything that is in the buffer
        cout << "ERROR: Loan must be a number greater than 0." << endl;
        cout << "What is the current amount of dollars you have on your loan: $"; //Try again
    }
    cin.ignore(); //This removes any excess i.e. 10h would be accepted as 10, then the next cin would have h. This gets rid of the h.
}

void Mortgage::setIntR()
{
    cout << "What is your annual interest rate on your loan: %";
    while ((!(cin >> intR)) || (intR <= 0))
    {
        cin.clear();
        cin.ignore();
        cout << "ERROR: Interest must be a number greater than 0." << endl;
        cout << "What is your annual interest rate on your loan: %";
    }
    cin.ignore();
    intR = intR/1200; //Divide rate by months, and divide by 100 to turn into %
}

void Mortgage::setTerm()
{
    cout << "How many years do you have left on your loan: ";
    while ((!(cin >> term)) || (term <= 0)) 
    {
        cin.clear();
        cin.ignore();
        cout << "ERROR: Years must be a number greater than 0." << endl;
        cout << "How many years do you have left on your loan: ";
    }
    cin.ignore();
    term = term*12; //Turn years into Months
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