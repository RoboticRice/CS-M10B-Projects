using namespace std;
/*
* Project: Homework #7, Complex Numbers
* Due on:  20160319
* Version: 0.1 (History: 0.1)
* Class:   CS M10B
* Student: Rice, Sammuel D.
* Date:    20160317
* gitHub:  https://github.com/RoboticRice/CS-M10B-Projects.git
*/

#ifndef COMPLEX_H
#define COMPLEX_H

/* 
* Notes:
* This was intended for use with HW7.cpp (Version 1.0), 
* and Complex.cpp (Version 1.0)
*/

class Complex
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