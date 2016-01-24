#include "Mortgage.h"
#include "Mortgage.cpp"
#include <iostream>
using namespace std;
/*
* Project: Homework #2
* Class:   CS M10B
* Student: Rice, Sammuel D.
* Date:    20160123
* gitHub:  https://github.com/RoboticRice/CS-M10B-Projects.git
*/

/* 
* Instructions:
* 
*//*
* Notes:
* 
*/

int main() {
    //Main class
    Mortgage User;
    User.setLoan();
    User.setIntR();
    User.setYear();
    cout << endl;
    cout << "Your monthly payment will be: $" << User.getPymt() << endl;
    cout << "Total paid after the loan has been paid off: $" << User.getTotl();
    return 0;
}