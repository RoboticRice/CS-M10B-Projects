using namespace std;
#include <string>
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
    double real; //The Real Part
    double imag; //The Imaginary Part
    
    public:
    //Constructors
    Complex();
    
    //Mutators (public)
    void setReal(double amount);
    void setImag(double amount);
    
    void setAdd(double rNum, double iNum); //Add to this another complex number
    void setSub(double rNum, double iNum); //Subtract to this another complex number
    
    //Accessors (public)
    double getReal() const; //Get the Real Part
    double getImag() const; //Get the Imaginary Part
    
    string getPrint() const; //Get the printout of the complex number
};

#endif