using namespace std;
#include <iostream>
#include <string>
/*
* Project: Homework #4
* Version: 0.1 (History: 0.1)
* Class:   CS M10B
* Student: Rice, Sammuel D.
* Date:    20160207
* gitHub:  https://github.com/RoboticRice/CS-M10B-Projects.git
*/

/* 
* Instructions:
* This program checks a user input string to see if it is a palindrome. A palindrome is a word, phrase, number, or other sequence of characters which reads the same backward or forward.
*//*
* Notes:
* This program has built in mechanics to remove capitalization and gramar. 
*/

bool Palindrome(string phrase);
bool Palindrome(string phrase, int location);

int main() {
    //Main class
    string input;
    cout << "This program checks for Palindromes." << endl;
    cout << "Please enter what you would like checked: ";
    cin >> input;
    if (Palindrome(input)) cout << "That is a palindrome." << endl;
    else cout << "That is NOT a palindrome." << endl;
    return 0;
}

bool Palindrome(string phrase)
{
    cout << phrase << endl;
    return true;
}

bool Palindrome(string phrase, int location)
{
    cout << phrase << " " << location << endl;
    return true;
}