using namespace std;
#include "Mortgage.cpp"
#include <iostream>
#include <iomanip>
/*
* Project: Homework #3
* Version: 1.0 (History: 0.1)
* Class:   CS M10B
* Student: Rice, Sammuel D.
* Date:    20160204
* gitHub:  https://github.com/RoboticRice/CS-M10B-Projects.git
*/

/* 
* Instructions:
*
*//*
* Notes:
* This is intended for use with Mortgage.cpp (Version 2.0) and Mortgage.h (Version 2.0)
*/

int main() {
    //Main class
    Mortgage User;
    
    //Set the Loan
    double loan;
    cout << "What is the current amount of dollars you have on your loan : $";
    while ((!(cin >> loan)) || (loan <= 0)) //If cin does NOT accept input for loan, OR, loan <= 0, then:
    {
        cin.clear(); //Clear any warning
        cin.ignore(); //Ingore everything that is in the buffer
        cout << "ERROR: Loan must be a number greater than 0." << endl;
        cout << "What is the current amount of dollars you have on your loan : $"; //Try again
    }
    cin.ignore(); //This removes any excess i.e. 10h would be accepted as 10, then the next cin would have h. This gets rid of the h.
    User.setLoan(loan);
    
    //Set the Interest Rate
    double intR;
    cout << "What is your annual interest rate on your loan              : %";
    while ((!(cin >> intR)) || (intR <= 0))
    {
        cin.clear();
        cin.ignore();
        cout << "ERROR: Interest must be a number greater than 0." << endl;
        cout << "What is your annual interest rate on your loan              : %";
    }
    cin.ignore();
    intR = intR/1200; //Divide rate by months, and divide by 100 to turn into %
    User.setIntR(intR);
    
    //Set the Years remaining
    double term;
    cout << "How many years do you have left on your loan                : ";
    while ((!(cin >> term)) || (term <= 0)) 
    {
        cin.clear();
        cin.ignore();
        cout << "ERROR: Years must be a number greater than 0." << endl;
        cout << "How many years do you have left on your loan                : ";
    }
    cin.ignore();
    term = term*12; //Turn years into Months
    User.setTerm(term);
    
    //Seperate Input from Output
    cout << endl << "-----------------------------------------" << endl << endl;
    
    //Get the payment breakdown
    double blnc = loan; //set Balance = loan
    double mPay = User.getPymt(); //MonthlyPayment = getPymt(); this is done once to prevent having to re-calculate this every line.
    double intP, plPd; 
    double totalIntPaid = 0;
    double totalPrnPaid = 0;
    cout << setw(5) << right << "Month" << " : " << setw(8) << "Interest" << " : " << setw(9) << "Principal" << " : " << setw(10) << "Balance" << endl;
    cout << "-----------------------------------------" << endl;
    cout << fixed << showpoint << setprecision(2); //Used to format the following
    for (int i=1; blnc > 0; i++)
    {
        if ((i % 21) == 0) cin.get();
        intP  = blnc * intR; //InterestPaid = Balance * interestRate
        plPd  = mPay - intP; //PrincipalPaid = MonthlyPayment - InterestPaid
        blnc -= plPd; //Balance = Balance - PrincipalPaid
        totalIntPaid += intP;
        totalPrnPaid += plPd;
        cout << setw(5) << right << i << " : $" << setw(7) << intP << " : $" << setw(8) << plPd << " : $" << setw(9) << blnc << endl;
    }
    cout << "-----------------------------------------" << endl;
    cout << "Total Interest Paid     : $" << totalIntPaid << endl;
    cout << "Total Principal Paid    : $" << totalPrnPaid << endl;
    
    //Get the monthly payment
    cout << "Your monthly payment is : $" << User.getPymt() << endl;
    
    //Get the total paid
    cout << "Total amount paid       : $" << User.getTotl() << endl;
    return 0;
}