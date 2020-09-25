#include<iostream>

using namespace std;

bool isFactorial(int n) {
	int control = 1;
	while (1) {
		if (n % control != 0) {
			return 0;
		}
		else {
			n = n / control;
			if (n == 1) {
				return 1;
			}
		}
		control++;
	}
}

int main() {
	int number = 0;
	while (number <= 0) {
		cout << "Enter a positive number : ";
		cin >> number;
	}
	if (isFactorial(number)) {
		cout << "\nA factorial number :) ";
	}
	else {
		cout << "Not a factorial number :( ";
	}
	return 0;
}