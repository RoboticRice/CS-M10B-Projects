#include <fstream>
#include <iostream>
#include <string>
using namespace std;
/*
* Project: Homework #10, File String Search
* Class:   CS M10B
* Student: Rice, Sammuel D.
* Edited:  20160427
* Due on:  20160503
* Version: 1.0 (History: 0.1)
* gitHub:  https://github.com/RoboticRice/CS-M10B-Projects.git
*/

/* 
* Instructions:
* Write a program that asks the user for a file name and a string to search for.
* The program should search the file for every occurrence of a specified string. 
* When the string is found, the line that contains it should be displayed. After 
* all the occurrences have been located, the program should report the number of
* times the string appeared in the file.
*//*
* Notes:
* This program does NOT impliment any error handling.
* This program is designed to work with HW10.txt, but can work with anyfile
*
* The definition of "line" is vauge in the instructions, so this program assumes
* the 'line' that contains the string is from the start until the newline 
* character, "\n". Since the text file that is included is written in paragrphs,
* each line is one full paragraph.
*/

int main() {
    //Main class
    ifstream file;
    string filename, searchFOR, line;
    int numFound=0, numSearch=0;
    cout << "Please input the filename.extension: ";
    cin >> filename;
    // filename = "HW10.txt";
    file.open(filename, ios::in);
    cout << "Please input what you want to look for: ";
    cin >> searchFOR;
    // searchFOR = "ipsum";
    cout << endl;
    while (file.good()) //while file is good (meaning the file is found and not end of file)
    {
        numSearch++; //add to the number of paragraphs searched
        getline(file, line); //get the paragraph to search
        if (line.find(searchFOR)!=string::npos) //if the position of what searchFOR is NOT equal to "no position"
        {
            numFound++; //add to the found counter
            cout << line << endl << endl; //print the paragraph found
        }
    }
    file.close();
    cout << searchFOR << " was searched in " << numSearch << " paragraphs, and was found in " << numFound << " of them." << endl;
    return 0;
}