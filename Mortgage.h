using namespace std;
/*
* Project: Homework #2
* Version: 2.0 (History: 1.2, 1.1, 1.0)
* Class:   CS M10B
* Student: Rice, Sammuel D.
* Date:    20160204
* gitHub:  https://github.com/RoboticRice/CS-M10B-Projects.git
*/

#ifndef MORTGAGE_H
#define MORTGAGE_H

/* 
* Notes:
* This was intended for use with HW3.cpp and Mortgage.cpp
* This will NOT work with HW2.cpp anymore!
*/

class Mortgage
{
    private:
    //Variables
    double loan; //Loan Amount
    double intR; //Interest Rate
    double term; //Months
    
    public:
    //Mutators (public)
    void setLoan(double amount);
    void setIntR(double amount);
    void setTerm(double amount);
    
    //Accessors (public)
    double getPymt() const; //Get the Monthly Payment
    double getTotl() const; //Get the Payment Total
};

#endif