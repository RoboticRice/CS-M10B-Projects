using namespace std;
#include <iostream>
#include <string>
#include <algorithm> //This is for tolower()
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

string RemoveChar(string phrase, int location);
bool   Palindrome(string phrase, int location);

int main() {
    //Main class
    
    string input;
    cout << "This program checks for Palindromes." << endl;
    cout << "Please enter what you would like checked: ";
    getline(cin, input); //This is used instead of a normal cin so spaces can be input
    
    //First, get rid of any capitals
    transform(input.begin(), input.end(), input.begin(), ::tolower);
    
    //Then, remove special characters using
    //RemoveChar(input, 0);
    //And check if what that returns is a Palindrome inline:
    if (Palindrome(RemoveChar(input, 0), 0)) cout << "That is a palindrome." << endl;
    else cout << "That is NOT a palindrome." << endl;
    return 0;
}

string RemoveChar(string phrase, int location)
{
    if (location < phrase.size())
    {
        //If Number or Lower Case Letter:
        if ((phrase[location] >= 48 && phrase[location] <= 57) || (phrase[location] >= 97 && phrase[location] <= 122))
        {
            location++;
        } else {
            phrase.erase(location, 1); //This removes the actual locations of the char, so there's no need to local++
        }
        //For debuging:
        //cout << phrase[location] << " " << location << " " << phrase << " " << phrase.size() << endl;
        return RemoveChar(phrase, location);
    } else {
        return phrase;
    }
}

bool Palindrome(string phrase, int location)
{
    if (phrase[location] == phrase[phrase.size()-location-1])
    {
        //if we have not yet reached the halfway point
        if (phrase.size()/2 > location) 
        {
            location++;
            return Palindrome(phrase, location);
        } else {
            return true;
        }
    } else {
        return false;
    }
}