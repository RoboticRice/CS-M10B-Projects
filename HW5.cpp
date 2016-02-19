using namespace std;
#include <iostream>
//#include <string>
#include "Maximum.h"
/*
* Project: Template
* Version: 0.1 (History: 0.1)
* Class:   CS M10B
* Student: Rice, Sammuel D.
* Date:    201601##
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
    int val1, val2;
    double val3;
    cout << "Input 3 integers:";
    cin >> val1 >> val2 >> val3;
    cout << "Maximum is:" << maximum(val1, val2, val3);
    return 0;
}