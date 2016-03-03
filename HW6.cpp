using namespace std;
#include <iostream>
#include <algorithm>
/*
* Project: Homework #6 - Median Function
* Due on:  20160306
* Version: 1.0 (History: 0.1)
* Class:   CS M10B
* Student: Rice, Sammuel D.
* Date:    20160302
* gitHub:  https://github.com/RoboticRice/CS-M10B-Projects.git
*/

/* 
* Instructions:
* In statistics, when a set of values is sorted in ascending or descending order,
* its median is the middle value (for odd number of values). If the set contains
* an even number of values, the median is the average, of the two middle values.
***
* This program must contain:
* * An array of integers
* * An integer that indicates the number of elements in the array
***
* The function should determine the median of the array. This value should be
* returned as a double. (Assume the values in the array are already sorted.)
* Demonstrate your pointer prowess by using pointer notation instead of array 
* notation in this function.
*//*
* Notes:
* This program has no error correction implimented -- please only input int's
*/

double GetMedian(int array[], int *size);

int main() {
    //Main class
    int count;
    //Explain to the user what the program will do
    cout << "This program will take any number of integers you provide" << endl
         << "and return the median value. Please input number of integers" << endl
         << "you will be providing:";
    cin >> count;
    int numbers[count];
    //Array inputs
    cout << "Please input " << count << " integers, one at a time, each followed" << endl
         << "by the enter key." << endl;
    for (int i=0; i<count; i++)
    {
        cout << "Int " << (i+1) << "/" << count << ": ";
        cin >> *(numbers+i);//cin >> numbers[i];
    }
    //Sort the array
    cout << "Your input numbers sorted:" << endl;
    sort(numbers, numbers+sizeof(numbers)/sizeof(int));
    for (int i=0; i<count; i++)
    {
        cout << "Int " << (i+1) << "/" << count << ": " << *(numbers+i) << endl;//numbers[i] << endl;
    }
    cout << "The median is: " << GetMedian(numbers, &count); //this (&) passes the refernce to the addresses of the parameters
    return 0;
}

double GetMedian(int array[], int *size)
{
    if ((*size % 2) == 0) return (*(array+(*size/2)) + *(array+((*size/2) - 1)))/2.0; //If even
    else return *(array+(*size/2)); //else odd
    // if ((*size % 2) == 0) return (array[*size/2] + array[(*size/2) - 1])/2.0; //If even
    // else return array[*size/2]; //else odd
}