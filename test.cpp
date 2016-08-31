#include <iostream>
using namespace std;
/*
* Project: Template
* Class:   CS M10B
* Student: Rice, Sammuel D.
* Edited:  20160###
* Due on:  20160###
* Version: 0.1 (History: 0.1)
* gitHub:  https://github.com/RoboticRice/CS-M10B-Projects.git
*/

/*
* Instructions:
*
*//*
* Notes:
* This program does NOT impliment any error handling.
* This program is designed to work with TemplateClass.cpp (Version 0.1)
& TemplateClass.h (Version 0.1)
*/
// template<class ItemType>
// bool swap(ItemType aList[], int *i, int *j) {
// 	//Assume i and j do NOT always exist in the list (?)
// 	//aList = list of items
// 	//i = positions of item 1
// 	//j = positions of item 2
// 	//Purpose: Take the item in position i and move it to position j, 
// 	//while taking the item in position j and move it to position i.
// 	cout << "aList[*i]=" << aList[*i] << endl;
// 	cout << "aList[*j]=" << aList[*j] << endl;
// 	cout << "&aList[*i]=" << &aList[*i] << endl;
// 	cout << "&aList[*j]=" << &aList[*j] << endl;
// 	if (aList[*i] && aList[*j]) {
// 		//if there is something at position i and if there is something at position j
// 		int *tempPtr = aList[*i];
// 		cout << "*tempPTr=" << *tempPtr << endl;
// 		cout << "tempPTr=" << tempPtr << endl;
// 		cout << "&tempPTr=" << &tempPtr << endl;
// 		aList[*i] = aList[*j];
// 		cout << "*tempPTr=" << *tempPtr << endl;
// 		cout << "tempPTr=" << tempPtr << endl;
// 		cout << "&tempPTr=" << &tempPtr << endl;
// 		aList[*j] = *tempPtr;
// 		//destroy tempPtr;
// 		cout << "aList[*i]=" << aList[*i] << endl;
//         cout << "aList[*j]=" << aList[*j] << endl;
//         cout << "&aList[*i]=" << &aList[*i] << endl;
//         cout << "&aList[*j]=" << &aList[*j] << endl;
// 		return true;
// 	}
// 	else {
// 		return false;
// 	}
// 	//tempPtr point to the address of i
// 	//list pointer at i point to the address of j
// 	//list pointer at j point to the address of tempPtr
// }
template<class ItemType>
bool swap2(ItemType aList[], int *i, int *j) {
	//Assume i and j do NOT always exist in the list (?)
	//aList = list of items
	//i = positions of item 1
	//j = positions of item 2
	//Purpose: Take the item in position i and move it to position j, 
	//while taking the item in position j and move it to position i.
	if (aList[*i] && aList[*j]) {
		//if there is something at position i and if there is something at position j
		ItemType tempItem = aList[*j];
		aList[*j] = aList[*i];
		aList[*i] = tempItem;
		return true;
	}
	else {
		return false;
	}
	//More efficient method (which I couldn't get working):
	//tempPtr point to the address of i
	//list pointer at i point to the address of j
	//list pointer at j point to the address of tempPtr
}

int main() {
	//Main class
	int list[5] = {1, 2, 3, 4, 5};
	cout << "list[1-5]=" << list[0] << list[1] << list[2] << list[3] << list[4] << list[5] << endl;
	int i = 2;
	int j = 3;
	cout << swap2(list, &i, &j);
	cout << "list[1-5]=" << list[0] << list[1] << list[2] << list[3] << list[4] << list[5] << endl;
	return 0;
}