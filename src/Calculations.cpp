#include <iostream>

#include "Header.h"

using namespace std;

int sumNumbers(int n) {

	int test = 0;

	for (int i = 1; i <= n; i++) {
		test += i;
		cout << test << endl;
	}

	cout << "Result is:" << test <<endl;

	return 0;

}