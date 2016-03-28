using namespace std;
/*
* Project: Homework #8, NumDays
* Class:   CS M10B
* Student: Rice, Sammuel D.
* Edited:  20160327
* Due on:  20160327
* Version: 1.0 (History: 0.1)
* gitHub:  https://github.com/RoboticRice/CS-M10B-Projects.git
*/

#ifndef NUMDAYS_H
#define NUMDAYS_H

/* 
* Notes:
* This program does NOT impliment any error handling.
* This program is designed to work with HW8.cpp (Version 1.0) 
                                        & NumDays.cpp (Version 1.0)
*/

class NumDays
{
    private:
    //Variables
    double hour;
    
    public:
    //Constructors
    NumDays();
    NumDays(double amount);
    
    //Mutators (public)
    void setHour(double amount);
    void setDays(double amount);
    
    //Accessors (public)
    double getHour() const;
    double getDays() const;
    
    //Operator Overloading
    //Member Unary Arithmetic Operators
    NumDays& operator ++ (); //Prefix
    NumDays& operator -- (); //Prefix
    NumDays  operator ++ (int); //Postfix
    NumDays  operator -- (int); //Postfix
    //Non-Member Binary Arithmetic Operators
    friend NumDays operator + (NumDays, NumDays);
    friend NumDays operator - (NumDays, NumDays);
};

/*These are NOT members of the class due to the following rules of thumb:
* If it is a unary operator, implement it as a member function.
* If a binary operator treats both operands equally (it leaves them unchanged),
  implement this operator as a non-member function.
* If a binary operator does not treat both of its operands equally (usually it 
  will change its left operand), it might be useful to make it a member function
  of its left operand’s type, if it has to access the operand's private parts.
*/
NumDays operator + (NumDays x, NumDays y);
NumDays operator - (NumDays x, NumDays y);

#endif