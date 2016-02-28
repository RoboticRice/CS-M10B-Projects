using namespace std;
#include <iostream>
#include "Date.cpp"
/*
* Project: HW#5
* Version: 1.0 (History: 0.1)
* Class:   CS M10B
* Student: Rice, Sammuel D.
* Date:    20160227
* gitHub:  https://github.com/RoboticRice/CS-M10B-Projects.git
*/

/* 
* Instructions:
* This program takes 3 integer values for Day Month and Year, and converts them
* into formatted Dates for the report. It also does minor error handeling for
* Month and Day.
*//*
* Notes:
* This was intended for use with Date.cpp (V1.0), and Date.h(V1.0)
* This program assumes the user inputs integer values only, and does NOT handel
* inproper input datatypes. Do NOT input text or symbols, including "." and " "
*/

int main() {
    //Main class
    Date myDate;
    int input;
    
    /*
    Begin Input
    */
    
/**/enterMonth:
    cout << "Enter the integer for the month: ";
    try {
        cin >> input;
        myDate.setMont(input);
    }
    catch (InvalidMonth &e){
        cout << "ERROR: " << e.getWhat() << " Try again." << endl;
        goto enterMonth;
    }
    input = 0; //This prevents leftover text from the last cin
/**/enterDay:
    cout << "Enter the integer for the day: ";
    try {
        cin >> input;
        myDate.setDate(input);
    }
    catch (InvalidDay &e){
        cout << "ERROR: " << e.getWhat() << " Try again." << endl;
        goto enterDay;
    }
////enterYear:
    cout << "Enter the integer for the year: ";
    cin >> input;
    myDate.setYear(input);
    
    /*
    Begin Report
    */
    
////reportMM/DD/YYYY
    cout << myDate.getDate(1) << endl;
////reportMonthDDYYYY
    cout << myDate.getDate(2) << endl;
////reportDDMonthYYYY
    cout << myDate.getDate(3) << endl;
    
    //End of Program.
    return 0;
}