using namespace std;
/*
* Project: Homework #2
* Version: 1.2 (History: 1.1, 1.0)
* Class:   CS M10B
* Student: Rice, Sammuel D.
* Date:    20160128
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
    int   term; //Months
    
    public:
    //Mutators (public)
    void setLoan();
    void setIntR();
    void setTerm();
    
    //Accessors (public)
    void getPymt() const; //Get the Monthly Payment
    void getTotl() const; //Get the Payment Total
};

#endif