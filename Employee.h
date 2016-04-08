#include <cstring>
using namespace std;
/*
* Project: Activity #1
* Class:   CS M10B
* Student: Rice, Sammuel D.
* Edited:  20160407
* Due on:  20160414
* Version: 0.2 (History: 0.1)
* gitHub:  https://github.com/RoboticRice/CS-M10B-Projects.git
*/

/* 
* Notes:
* This program does NOT impliment any error handling.
* This program is designed to work with Activity1.cpp (Version 0.1) 
                                        & Employee.cpp (Version 0.1)
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
    Employee()
    {
        name = "N/A";
        numb = 0;
        date = 00000000;
    }
    Employee(string nam, int num, int dat)
    {
        name = nam;
        numb = num;
        date = dat;
    }
    
    //Mutators (public)
    void setName(string value)
    {
        name = value;
    }
    void setNumb(int value)
    {
        numb = value;
    }
    void setDate(int value)
    {
        date = value;
    }
    
    //Accessors (public)
    string getName() const
    {
        return name;
    }
    int getNumb() const
    {
        return numb;
    }
    int getDate() const
    {
        return date;
    }
};

class ProductionWorker : public Employee
{
    private:
    //Variables
    int    shift; //Hourly Shift
    double payRt; //Pay Rate
    
    public:
    //Constructors
    ProductionWorker():Employee()
    {
        shift = 0;
        payRt = 0.0;
    }
    ProductionWorker(string nam, int num, int dat, int sft, double prt):Employee(nam, num, dat)
    {
        shift = sft;
        payRt = prt;
    }
    
    //Mutators (public)
    void setShift(int value)
    {
        shift = value;
    }
    void setPayRt(double value)
    {
        payRt = value;
    }
    
    //Accessors (public)
    string getShift() const
    {
        if (shift==1) return "Day";
        else if (shift==2) return "Night";
        else return "Error";
    }
    double getPayRt() const
    {
        return payRt;
    }
};

#endif