using namespace std;
#include <string>
#include <stdexcept>
/*
* Project: Homework #5
* Version: 1.0 (History: 0.1)
* Class:   CS M10B
* Student: Rice, Sammuel D.
* Date:    20160227
* gitHub:  https://github.com/RoboticRice/CS-M10B-Projects.git
*/

#ifndef DATE_H
#define DATE_H

/* 
* Notes:
* This was intended for use with HW5.cpp (V1.0), and Date.cpp(V1.0)
* This file includes 2 extra classes: InvalidMonth and InvalidDay
*/

class Date
{
    private:
    //Variables
    int mont; //Month
    int date; //Day
    int year; //Year
    
    public:
    //Mutators (public)
    void setMont(int amount);
    void setDate(int amount);
    void setYear(int amount);
    
    //Accessors (public)
    string getDate(int form) const; 
    //Get the Date, in forms:
    //1--MM/DD/YYYY
    //2--Month DD, YYYY
    //3--DD Month YYYY
};

class InvalidMonth
{
    private:
    string message;
    public:
    // constructor specifies default error message
    InvalidMonth() {message = "Month must be between 1 and 12.";}
    string getWhat() {return message;}
};

class InvalidDay
{
    private:
    string message;
    public:
    // constructor specifies default error message
    InvalidDay() {message = "Day must be between 1 and 31.";}
    string getWhat() {return message;}
};

#endif