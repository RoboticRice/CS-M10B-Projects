// #include "Mortgage.h" B/c .cpp is included, and .h is included within the .cpp, this line is not required.
#include "Mortgage.cpp"
using namespace std;
/*
* Project: Homework #2
* Version: 1.2 (History: 1.1, 1.0)
* Class:   CS M10B
* Student: Rice, Sammuel D.
* Date:    20160128
* gitHub:  https://github.com/RoboticRice/CS-M10B-Projects.git
*/

/* This does not work anymore, because Mortgage.cpp and Mortgage.h have changed */

int main() {
    //Main class
    Mortgage User;
    User.setLoan();
    User.setIntR();
    User.setTerm();
    User.getPymt();
    User.getTotl();
    return 0;
}