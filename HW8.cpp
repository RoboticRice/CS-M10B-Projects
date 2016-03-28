#include "NumDays.cpp"
#include <iostream>
using namespace std;
/*
* Project: Homework #8, NumDays
* Class:   CS M10B
* Student: Rice, Sammuel D.
* Edited:  20160327
* Due on:  20160327
* Version: 1.0 (History: 0.1)
* gitHub:  https://github.com/RoboticRice/CS-M10B-Projects.git
*/

/* 
* Instructions:
* Design a class called NumDays that stores a value which represents a number of
* work hours and converts it to a number of days. 
** 8 hours would be converted to 1 day
** 12 hours would be converted to 1.5 days
** 18 hours would be converted to 2.25 days
* The class should have a constructor that accepts a member of hours, as well as
* member functions for storing and retrieving the hours and days. The class 
* should also have the following overloaded operators:
** + Addition operator. When two NumDays objects are added together, the 
   overloaded + operator should return the sum of the two objects’ hours members.
** - Subtraction operator. When one NumDays object is subtracted from another, 
   the overloaded – operator should return the difference of the two objects’  
   hours members.
** ++ Prefix and postfix increment operators. These operators should increment 
   the number of hours stored in the object. When incremented, the number of 
   days should be automatically recalculated.
*** -- Prefix and postfix decrement operators. These operators should decrement 
   the number of hours stored in the object. When decremented, the number of 
   days should be automatically recalculated.
*//*
* Notes:
* This program does NOT impliment any error handling.
* This program does NOT call for any main class code, only code for the NumDays
  class itself. The int main() only is for testing the operators.
* The instructions only call for the variable hours inside NumDays, so when
  incremented, the hours goes up by 1, but there is not auto-calulation of the
  days since days is calculated every time getDays() is called. The only way to
  get around this flaw is to include a second variable (double days), and 
  everytime something is changed, have it also update the days double. To do that
  would create a far less efficient code though, so the way it is set up here is
  the way I'm submitting it.
* This program is designed to work with NumDays.cpp (Version 1.0) 
                                        & NumDays.h (Version 1.0)
*/

int main() {
    //Main class
    cout << "PLEASE READ THE NOTES BEFORE RUNNING PROGRAM!" << endl << endl;
    NumDays Amber(12), Sammuel, Total;
    cout << "How many hours has Sammuel worked: ";
    double amount = 0;
    cin >> amount;
    Sammuel.setHour(amount);
    cout << "Amber has " << Amber.getHour() << " hours, or " << Amber.getDays() << " days." << endl;
    cout << "Sammuel has " << Sammuel.getHour() << " hours, or " << Sammuel.getDays() << " days." << endl;
    Total = Amber + Sammuel;
    cout << "Totals hours: " << Total.getHour() << ", Days: " << Total.getDays() << endl;
    cout << "---------------------------------------------" << endl;
    cout << "How many days has Amber worked: ";
    cin >> amount;
    Amber.setDays(amount);
    cout << "Amber has " << Amber.getHour() << " hours, or " << Amber.getDays() << " days." << endl;
    Total = Amber;
    Sammuel.setDays(1);
    cout << "Total::" << Total.getHour() << endl;
    Amber = Sammuel + Total++;
    cout << "Total::" << Total.getHour() << endl;
    cout << "8 Hours + Amber++ = " << Amber.getHour() << " hours & " << Amber.getDays() << " days." << endl;
    ++Amber;
    cout << "++Amber = " << Amber.getHour() << " hours & " << Amber.getDays() << " days." << endl;
    cout << "---------------------------------------------" << endl;
    Amber.setHour(18.5);
    Sammuel.setDays(3.8);
    cout << "Amber has " << Amber.getHour() << " hours, or " << Amber.getDays() << " days." << endl;
    cout << "Sammuel has " << Sammuel.getHour() << " hours, or " << Sammuel.getDays() << " days." << endl;
    Total = Sammuel - Amber;
    cout << "Sammuel has worked " << Total.getHour() << " hours, or " << Total.getDays() << " days more than Amber.";
    return 0;
}