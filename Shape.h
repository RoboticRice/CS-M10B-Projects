#include <string>
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
                                        & Shape.cpp (Version 1.0)
*/

#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
    public:
    //Virtual Functions
    virtual const string printShapeName() = 0;
    virtual const string print() = 0;
    virtual const double area();
    virtual const double volume();
};

class Point: public Shape
{
    protected:
    //Variables
    int x;
    int y;
    
    public:
    //Constructors
    Point();
    Point(int Xval, int Yval);
    
    //Mutators (public)
    void setX(int value);
    void setY(int value);
    
    //Accessors (public)
    int getX() const;
    int getY() const;
    
    //Virtual Functions
    virtual const string printShapeName();
    virtual const string print();
};

class Circle: public Point
{
    protected:
    //Variables
    int radius;
    
    public:
    //Constructors
    Circle();
    Circle(int Xval, int Yval, int Rval);
    
    //Mutators (public)
    void setRadius(int value);
    
    //Accessors (public)
    int getRadius() const;
    
    //Virtual Functions
    virtual const string printShapeName();
    virtual const string print();
    virtual const double area();
};

class Cylinder: public Circle
{
    private:
    //Variables
    int height;
    
    public:
    //Constructors
    Cylinder();
    Cylinder(int Xval, int Yval, int Rval, int Hval);
    
    //Mutators (public)
    void setHeight(int value);
    
    //Accessors (public)
    int getHeight() const;
    
    //Virtual Functions
    virtual const string printShapeName();
    virtual const string print();
    virtual const double area();
    virtual const double volume();
};

#endif