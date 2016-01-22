#include <iostream>
using namespace std;
/*
* Project: Homework #2
* Class:   CS M10B
* Student: Rice, Sammuel D.
* Date:    20160121
* gitHub:  https://github.com/RoboticRice/CS-M10B-Projects.git
*/

/* 
* Instructions:
*
*//*
* Notes:
* 
*/

class Animal
{
    private:
    int Age;
    
    public:
    int Length;
    
    void setAge(int years) //Mutators
    {
        Age = years;
    }
    
    int getAge() const; //Accessors
    
    Length = 4;
};

int Animal::getAge() const
{
    return Age;//*inDays;
}

int main() {
    //Main class
    Animal Tiger;
    // cout << "Tiger Length: ";
    // cin >> Tiger.Length;
    int temp = 0;
    cout << "Tiger Age: ";
    cin >> temp;
    Tiger.setAge(temp);
    cout << "Length = " << Tiger.Length << " :: Age = " << Tiger.getAge() << endl;
    return 0;
}