#include <iostream>
using namespace std;

void main() {
	
	
	while (true) {
		int iOld = 0;
		int iNew = 0;
		double dPC = 0.0;

		cout << "Old, New ";
		cin >> iOld >> iNew;

		dPC = 100 * (iNew - iOld) / (iOld);
		cout << dPC << endl;
	}
	
	
	/*
	int base = 0;
	int perc = 0;

	while (true) {
		cout << "\nInput base amount: ";
		cin >> base;

		cout << "\nInput percentage change: ";
		cin >> perc;

		double out = base;
		out += perc * base/100;
		
		cout << out << endl;
	}
	*/
}