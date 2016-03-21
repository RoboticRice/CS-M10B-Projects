#include "Complex.h"
using namespace std;
/*
* Project: Homework #7, Complex Numbers
* Due on:  20160319
* Version: 1.0 (History: 1.0)
* Class:   CS M10B
* Student: Rice, Sammuel D.
* Date:    20160317
* gitHub:  https://github.com/RoboticRice/CS-M10B-Projects.git
*/

/* 
* Notes:
* This was intended for use with HW7.cpp (Version 1.1), 
* and Complex.h (Version 1.0)
*/

//Default Values
Complex::Complex():real(0),imag(0){}
//double Complex::imag=0;

//*****************************
//*** The Mutators (Public) ***
//*****************************
void Complex::setReal(double amount)
{
    real=amount;
}
void Complex::setImag(double amount)
{
    imag=amount;
}
void Complex::setAdd(double rNum, double iNum)
{
    real += rNum;
    imag += iNum;
}
void Complex::setSub(double rNum, double iNum)
{
    real -= rNum;
    imag -= iNum;
}

//******************************
//*** The Accessors (Public) ***
//******************************
double Complex::getReal() const
{
    return real;
}
double Complex::getImag() const
{
    return imag;
}
string Complex::getPrint() const
{
    return (to_string(real) + " + " + to_string(imag) + "*i");
}