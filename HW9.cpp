#include "Shape.cpp"
#include <iostream>
using namespace std;
/*
* Project: Homework #9 - Class Shape Inheritance
* Class:   CS M10B
* Student: Rice, Sammuel D.
* Edited:  20160417
* Due on:  20160417
* Version: 1.0 (History: 0.1)
* gitHub:  https://github.com/RoboticRice/CS-M10B-Projects.git
*/

/* 
* Instructions:
* Design a class named Shape which is an abstract base class. Shape has two pure 
* virtual functions,  printShapeName and print; and two other virtual functions, 
* area and volume, each of which has a default implementation that returns a 
* value of zero.
*
* Design Point class which inherits these implementations (both area and volume
* of a point are zero) from Shape. A Point has x and y coordinate private members.
*
* Design Class Circle as derived from Point with public inheritance. A Circle has
* a volume of 0.0, so base-class member function volume is not overridden. A 
* Circle has nonzero area, so the area function is overridden in this class. 
* Write get and set functions to return and to assign a new radius to a Circle.
*
* Design Class Cylinder as derived from Circle with public inheritance. A Cylinder
* has area and volume different from those of Circle, so the area and volume
* functions are both overridden in this class. Write get and set functions to 
* return height and assign new height.
*
* Create one point, one circle, and one Cylinder then print the results.
*//*
* Notes:
* This program assumes 3.14159265358979323846 for PI, rather than including the 
  ENITRE math or cmath library.
* This program does NOT impliment any error handling.
* This program is designed to work with Shape.cpp (Version 1.0) 
                                        & Shape.h (Version 1.0)
*/

int main() {
    //Main class
    Point D1(5, 6);
    Circle D2(4, 2, 5);
    Cylinder D3(2, 5, 8, 2);
    cout << D1.print() << endl
         << D2.print() << endl
         << D3.print();
    return 0;
}