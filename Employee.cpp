#include "Employee.h"
using namespace std;
/*
* Project: Activity #1
* Class:   CS M10B
* Student: Rice, Sammuel D.
* Edited:  20160407
* Due on:  20160414
* Version: 1.0 (History: 0.1)
* gitHub:  https://github.com/RoboticRice/CS-M10B-Projects.git
*/

/* 
* Notes:
* This program does NOT impliment any error handling.
* This program is designed to work with Activity1.cpp (Version 1.0) 
                                        & Employee.h (Version 1.0)
*/
//**********************
//***********************
//*** Employee Class *****
//***********************
//**********************

//***********************
//*** The Constructor ***
//***********************
Employee::Employee()
{
    name = "N/A";
    numb = 0;
    date = 00000000;
}
Employee::Employee(string nam, int num, int dat)
{
    name = nam;
    numb = num;
    date = dat;
}

//*****************************
//*** The Mutators (Public) ***
//*****************************
void Employee::setName(string value)
{
    name = value;
}
void Employee::setNumb(int value)
{
    numb = value;
}
void Employee::setDate(int value)
{
    date = value;
}

//******************************
//*** The Accessors (Public) ***
//******************************
string Employee::getName() const
{
    return name;
}
int Employee::getNumb() const
{
    return numb;
}
int Employee::getDate() const
{
    return date;
}

//******************************
//*******************************
//*** ProductionWorker Class *****
//*******************************
//******************************

//***********************
//*** The Constructor ***
//***********************
ProductionWorker::ProductionWorker():Employee()
{
    shift = 0;
    payRt = 0.0;
}
ProductionWorker::ProductionWorker(string nam, int num, int dat, int sft, double prt):Employee(nam, num, dat)
{
    shift = sft;
    payRt = prt;
}

//*****************************
//*** The Mutators (Public) ***
//*****************************
void ProductionWorker::setShift(int value)
{
    shift = value;
}
void ProductionWorker::setPayRt(double value)
{
    payRt = value;
}

//******************************
//*** The Accessors (Public) ***
//******************************
string ProductionWorker::getShift() const
{
    if (shift==1) return "Day";
    else if (shift==2) return "Night";
    else return "Error";
}
double ProductionWorker::getPayRt() const
{
    return payRt;
}