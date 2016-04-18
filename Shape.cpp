#include "Shape.h"
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
* Notes:
* This program does NOT impliment any error handling.
* This program is designed to work with HW9.cpp (Version 1.0) 
                                        & Shape.h (Version 1.0)
*/

//*******************
//*** Shape Class ***
//*******************
//*** The Virtual Functions ***
const double Shape::area()
{
    return 0;
}
const double Shape::volume()
{
    return 0;
}

//*******************
//*** Point Class ***
//*******************
//*** The Constructors ***
Point::Point()
{
    setX(0);
    setY(0);
}
Point::Point(int Xval, int Yval)
{
    setX(Xval);
    setY(Yval);
}

//*** The Mutators (Public) ***
void Point::setX(int value)
{
    x = value;
}
void Point::setY(int value)
{
    y = value;
}

//*** The Accessors (Public) ***
int Point::getX() const
{
    return x;
}
int Point::getY() const
{
    return y;
}

//*** The Virtual Functions ***
const string Point::printShapeName()
{
    return "Point";
}
const string Point::print()
{
    return "This shape is a " + printShapeName() + "\n"
         + "The X value is: " + to_string(getX()) + "\n"
         + "The Y value is: " + to_string(getY()) + "\n";
}

//********************
//*** Circle Class ***
//********************
//*** The Constructors ***
Circle::Circle():Point()
{
    setRadius(0);
}
Circle::Circle(int Xval, int Yval, int Rval):Point(Xval, Yval)
{
    setRadius(Rval);
}

//*** The Mutators (Public) ***
void Circle::setRadius(int value)
{
    radius = value;
}

//*** The Accessors (Public) ***
int Circle::getRadius() const
{
    return radius;
}

//*** The Virtual Functions ***
const string Circle::printShapeName()
{
    return "Circle";
}
const string Circle::print()
{
    return "This shape is a " + printShapeName() + "\n"
         + "The X value is: " + to_string(getX()) + "\n"
         + "The Y value is: " + to_string(getY()) + "\n"
         + "The Radius is:  " + to_string(getRadius()) + "\n"
         + "The 2D Area is: " + to_string(area()) + "\n";
}
const double Circle::area()
{
    return 3.14159265358979323846*getRadius()*getRadius();
}

//**********************
//*** Cylinder Class ***
//**********************
//*** The Constructors ***
Cylinder::Cylinder():Circle()
{
    setHeight(0);
}
Cylinder::Cylinder(int Xval, int Yval, int Rval, int Hval):Circle(Xval, Yval, Rval)
{
    setHeight(Hval);
}

//*** The Mutators (Public) ***
void Cylinder::setHeight(int value)
{
    height = value;
}

//*** The Accessors (Public) ***
int Cylinder::getHeight() const
{
    return height;
}

//*** The Virtual Functions ***
const string Cylinder::printShapeName()
{
    return "Cylinder";
}
const string Cylinder::print()
{
    return "This shape is a " + printShapeName() + "\n"
         + "The X value is: " + to_string(getX()) + "\n"
         + "The Y value is: " + to_string(getY()) + "\n"
         + "The Radius is:  " + to_string(getRadius()) + "\n"
         + "The Height is:  " + to_string(getHeight()) + "\n"
         + "The 2D Area is: " + to_string(area()) + "\n"
         + "The Volume is:  " + to_string(volume()) + "\n";
}
const double Cylinder::area()
{
    return 3.14159265358979323846*getRadius()*getRadius();
}
const double Cylinder::volume()
{
    return 3.14159265358979323846*getRadius()*getRadius()*getHeight();
}
