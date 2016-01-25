// #include "Mortgage.h" B/c .cpp is included, and .h is included within the .cpp, this line is not required.
#include "Mortgage.cpp"
using namespace std;
/*
* Project: Homework #2
* Class:   CS M10B
* Student: Rice, Sammuel D.
* Date:    20160125
* gitHub:  https://github.com/RoboticRice/CS-M10B-Projects.git
*/

int main() {
    //Main class
    Mortgage User;
    User.setLoan();
    User.setIntR();
    User.setYear();
    User.getPymt();
    User.getTotl();
    return 0;
}