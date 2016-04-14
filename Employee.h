#include <string>
using namespace std;
/*
* Project: Activity #1
* Class:   CS M10B
* Student: Rice, Sammuel D.
* Edited:  20160407
* Due on:  20160414
* Version: 1.0 (History: 0.2, 0.1)
* gitHub:  https://github.com/RoboticRice/CS-M10B-Projects.git
*/

/* 
* Notes:
* This program does NOT impliment any error handling.
* This program is designed to work with Activity1.cpp (Version 1.0) 
                                        & Employee.cpp (Version 1.0)
*/

#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee
{
    protected: //Used for inheritance
    //Variables
    string name; //Employee Name
    int    numb; //Employee Number
    int    date; //Hire Date (YYYY/MM/DD)
    
    public:
    //Constructors
    Employee();
    Employee(string nam, int num, int dat);
    
    //Mutators (public)
    void setName(string value);
    void setNumb(int value);
    void setDate(int value);
    
    //Accessors (public)
    string getName() const;
    int getNumb() const;
    int getDate() const;
};

class ProductionWorker : public Employee
{
    private:
    //Variables
    int    shift; //Hourly Shift
    double payRt; //Pay Rate
    
    public:
    //Constructors
    ProductionWorker();
    ProductionWorker(string nam, int num, int dat, int sft, double prt);
    
    //Mutators (public)
    void setShift(int value);
    void setPayRt(double value);
    
    //Accessors (public)
    string getShift() const;
    double getPayRt() const;
};

#endif