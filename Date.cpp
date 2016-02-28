using namespace std;
#include <string>
#include "Date.h"
/*
* Project: HW#5
* Version: 1.0 (History: 0.1)
* Class:   CS M10B
* Student: Rice, Sammuel D.
* Date:    20160227
* gitHub:  https://github.com/RoboticRice/CS-M10B-Projects.git
*/

/* 
* Notes:
* This was intended for use with HW5.cpp (V1.0), and Date.h(V1.0)
*/

//*****************************
//*** The Mutators (Public) ***
//*****************************
void Date::setMont(int amount)
{
    if (amount >= 1 && amount <= 12) mont = amount;
    else throw InvalidMonth();
}
void Date::setDate(int amount)
{
    if (amount >=1 && amount <= 31) date = amount;
    else throw InvalidDay();
}
void Date::setYear(int amount)
{
    year = amount;
}
    
//******************************
//*** The Accessors (Public) ***
//******************************
string Date::getDate(int form) const
{
    //Get the Date, in forms:
    //1--MM/DD/YYYY
    //2--Month DD, YYYY
    //3--DD Month YYYY
    if (form==1) return (to_string(mont) + "/" + to_string(date) + "/" + to_string(year));
    else if (form==2 || form==3)
    {
        //Convert month from int to string
        string month;
        if (mont==1) month = "January";
        else if (mont==2) month = "Febuary";
        else if (mont==3) month = "March";
        else if (mont==4) month = "April";
        else if (mont==5) month = "May";
        else if (mont==6) month = "June";
        else if (mont==7) month = "July";
        else if (mont==8) month = "August";
        else if (mont==9) month = "September";
        else if (mont==10) month = "October";
        else if (mont==11) month = "November";
        else if (mont==12) month = "December";
        else return "Error 1.";
        //Print the forms for 2 or 3
        if (form==2) return (month + " " + to_string(date) + ", " + to_string(year));
        else if (form==3) return (to_string(date) + " " + month + " " + to_string(year));
        else return "Error 2.";
    }
    else return "Error 3.";
}
