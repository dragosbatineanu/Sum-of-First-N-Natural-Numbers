#include <iostream>

#include "Header.h"

using namespace std;

int main() {
	int num;

	cout << "Welcome to Sum of First N Natural Numbers" << endl;
	cout << "Enter a number: " << endl;
	cin >> num;

	if (num >= 1) {
		sumNumbers(num);
	}
	else if (num == 0 || num < 0) {
		cout << "Enter a number above 0: " << endl;
		cin >> num;

			while (num <= 0) {
				cout << "Enter a number above 0: " << endl;
				cin >> num;
			}
	}

	else {
		cout << "Error" << endl;
	}

}