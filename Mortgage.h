using namespace std;
/*
* Project: Homework #2
* Class:   CS M10B
* Student: Rice, Sammuel D.
* Date:    20160125
* gitHub:  https://github.com/RoboticRice/CS-M10B-Projects.git
*/

#ifndef MORTGAGE_H
#define MORTGAGE_H

/* 
* Notes:
* This was intended for use with HW2.cpp, and Mortgage.cpp
*/

class Mortgage
{
    private:
    //Variables
    float pymt; //Payment
    float loan; //Loan Amount
    float intR; //Interest Rate
    int   year; //Years
    
    //Accessors (private)
    float getTerm() const; //Get the value for the Term
    
    
    public:
    // Constructor not required.
    // //Constructors
    // Mortgage();
    
    //Mutators (public)
    void setLoan();
    void setIntR();
    void setYear();
    
    //Accessors (public)
    void getPymt() const; //Get the Monthly Payment
    void getTotl() const; //Get the Payment Total
};

#endif