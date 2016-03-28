#include "NumDays.h"
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

/* 
* Notes:
* This program does NOT impliment any error handling.
* This program is designed to work with HW8.cpp (Version 1.0) 
                                        & NumDays.h (Version 1.0)
*/

//***********************
//*** The Constructor ***
//***********************
NumDays::NumDays()
{
    hour = 0;
}
NumDays::NumDays(double amount)
{
    hour = amount;
}
    
//*****************************
//*** The Mutators (Public) ***
//*****************************
void NumDays::setHour(double amount)
{
    hour = amount;
}
void NumDays::setDays(double amount)
{
    hour = amount*8;
}

//******************************
//*** The Accessors (Public) ***
//******************************
double NumDays::getHour() const
{
    return hour;
}
double NumDays::getDays() const
{
    return hour/8; //Days
}

//****************************
//*** Operator Overloading ***
//****************************
//Member Unary Arithmetic Operators
//Prefix
NumDays& NumDays::operator ++ ()
{
    ++hour;
    return *this;
}
NumDays& NumDays::operator -- ()
{
    --hour;
    return *this;
}
//Postfix
NumDays NumDays::operator ++ (int)
{
    NumDays temp(hour);
    ++hour;
    return temp;
}
NumDays NumDays::operator -- (int)
{
    NumDays temp(hour);
    --hour;
    return temp;
}
//Non-Member Binary Arithmetic Operators
NumDays operator + (NumDays x, NumDays y)
{
    NumDays result;
    result.hour = x.hour + y.hour;
    return result;
}
NumDays operator - (NumDays x, NumDays y)
{
    NumDays result;
    result.hour = x.hour - y.hour;
    return result;
}