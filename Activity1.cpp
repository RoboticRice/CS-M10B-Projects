#include "Employee.cpp"
#include <string>
#include <iostream>
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
* Instructions:
* Design a class named Employee . The class should keep the following information:
** Employee name
** Employee number
** Hire date
* Write one or more constructors and the appropriate accessor and mutator functions
* for the class. Next, write a class named ProductionWorker that is derived from
* the Employee class. The ProductionWorker class should have member variables to
* hold the following information:
** Shift (an integer)
** Hourly pay rate (a double )
* The workday is divided into two shifts: day and night. The shift variable will
* hold an integer value representing the shift that the employee works. The day 
* shift is shift 1, and the night shift is shift 2. Write one or more constructors
* and the appropriate accessor and mutator functions for the class. Demonstrate 
* the classes by writing a program that uses a ProductionWorker object.
*//*
* Notes:
* This program does NOT impliment any error handling.
* This program is designed to work with Employee.cpp (Version 1.0) 
                                        & Employee.h (Version 1.0)
*/

int main() {
    //Main class
    ProductionWorker cashier("Bob", 3245, 20160214, 2, 15.5);
    cout << cashier.getName() << " is the Cashier." << endl
         << "His employee # is: " << cashier.getNumb() << endl
         << "He was hired on (YYYYMMDD): " << cashier.getDate() << endl
         << "He works the " << cashier.getShift() << " shift." << endl
         << "He gets paid $" << cashier.getPayRt() << " per hour." << endl
         << endl;
    ProductionWorker supervisor;
    string name;
    int number;
    double decimal;
    cout << "You just hired a new male supervisor. Please input his information:" << endl;
    cout << "What is his name: ";
    cin >> name;
    supervisor.setName(name);
    cout << "What is his number (####): ";
    cin >> number;
    supervisor.setNumb(number);
    cout << "When was he hired (YYYYMMDD): ";
    cin >> number;
    supervisor.setDate(number);
    cout << "Which shift does he work? (1=Day, 2=Night): ";
    cin >> number;
    supervisor.setShift(number);
    cout << "What is his hourly wage (##.##): $";
    cin >> decimal;
    supervisor.setPayRt(decimal);
    cout << endl
         << supervisor.getName() << " is the supervisor." << endl
         << "His employee # is: " << supervisor.getNumb() << endl
         << "He was hired on (YYYYMMDD): " << supervisor.getDate() << endl
         << "He works the " << supervisor.getShift() << " shift." << endl
         << "He gets paid $" << supervisor.getPayRt() << " per hour." << endl
         << endl;
    return 0;
}