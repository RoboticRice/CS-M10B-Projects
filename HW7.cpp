using namespace std;
#include "Complex.cpp"
#include <iostream>
//#include <string>
/*
* Project: Homework #7, Complex Numbers
* Due on:  20160319
* Version: 0.1 (History: 0.1)
* Class:   CS M10B
* Student: Rice, Sammuel D.
* Date:    20160317
* gitHub:  https://github.com/RoboticRice/CS-M10B-Projects.git
*/

/* 
* Instructions:
* Create a class called Complex for performing arithmetic with complex numbers. 
* Complex numbers have the form:
** realPart + imaginaryPart * i //real + imag * i
* Where i is sqrt(-1).
*
* Use double variables to represent the private data of the class. Provide a
* constructor that enables an object of this class to be initialized when it is
* declared. The constructor should contain default values in case no initializers
* are provided. Provide public member functions that perform the following tasks:
** Adding two complex numbers: The real parts added together and the imaginary 
   parts are added together.
** Subtracting two complex numbers: The real parts subtracted together and the 
   imaginary parts are subtracted together.
** Printing Complex numbers in the form (a , b), where a is the real part and b 
   is the imaginary part.
*
*Do not use operator overloading for this assignment!
*
*//*
* Notes:
* This program assumes the user will input correct value, no error correction is
* implimented, do not mess this up!
* This was intended for use with Complex.cpp (Version 1.0), 
* and Complex.h (Version 1.0)
*/

int main() {
    //Main class
    Complex alpha, bravo;
    double input;
    cout << "This program will take two Complex numbers, add them together, then" <<
            "subtract them, while printing the values of the complex numbers at" <<
            "each step. If everything works correctly, the end value should be" <<
            "the same as the starting value." << endl << endl;
    cout << "What is the REAL part of the 1st Complex Number: ";
    cin >> input;
    alpha.setReal(input);
    cout << "What is the IMAGINARY part of the 1st Complex Number: ";
    cin >> input;
    alpha.setImag(input);
    cout << "What is the REAL part of the 2nd Complex Number: ";
    cin >> input;
    alpha.setReal(input);
    cout << "What is the IMAGINARY part of the 2nd Complex Number: ";
    cin >> input;
    alpha.setImag(input);
    cout << endl;
    cout << "You 1st complex number is: " << alpha.getPrint() << endl;
    cout << "You 2nd complex number is: " << bravo.getPrint() << endl;
    cout << endl;
    //Begin addition
    alpha.setAdd(bravo.getReal(), bravo.getImag());
    cout << "(" << alpha.getPrint() << ") + (" << bravo.getPrint() << ") = " << endl; //This does not work, change later.
    return 0;
}