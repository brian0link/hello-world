// Unreal lecture 95
// http://bit.ly/UnrealSlides

#include <iostream>
using namespace std;

int val1 = 1;
int val2 = 2;
int* valPtr = &val1;
int& valRef = val1;

void printVals() {
	cout << "Values:" << endl;
	cout << "val1: " << val1 << "\tval2: " << val2 << "\tvalPtr: " << *valPtr << "\tvalRef: " << valRef << endl;
	cout << "Addresses:" << endl;
	cout << "val1: " << &val1 << "\tval2: " << &val2 << "\tvalPtr: " << valPtr << "\tvalRef: " << &valRef << endl;
}

void main() {
	printVals();
	valPtr = &val2;
	printVals();
	*valPtr = 3;
	printVals();
	valRef = 4;
	printVals();
}