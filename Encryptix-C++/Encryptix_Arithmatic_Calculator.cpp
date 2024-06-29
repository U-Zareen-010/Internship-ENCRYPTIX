#include<bits/stdc++.h>
using namespace std;

double addition(double a, double b) {
	double sum;
	sum = a + b;
	return sum;
}

double subtraction(double a, double b) {
	double sub;
	if (a > b) {
		sub = a - b;
	} else if (b > a) {
		sub = -(b - a);
	} else {
		sub = b - a;
	}
	return sub;
}

double multiplication(double a, double b) {
	double mul;
	mul = a * b;
	return mul;
}

double division(double a, double b) {
	double div;
	if (b == 0) {
		cout << "Invalid." << endl;
		exit(0);
	} else {
		div = a / b;
	}
	return div;
}

int main() {

	while (1) {

		cout << "Welcome to Simple Calculator!!" << endl << endl;

		double a, b;
		cout << "Enter the two numbers for calculation below:" << endl;
		cout << "First Number: ";
		cin >> a;
		cout << endl;
		cout << "Second Number: ";
		cin >> b;

		cout << endl << endl;

		cout << "Choose the number to select the operation to be performed on two numbers: " << endl;
		cout << "1. Addition" << endl;
		cout << "2. Subtraction" << endl;
		cout << "3. Multiplication" << endl;
		cout << "4. Division" << endl;

		cout << "Enter Here: ";

		int n;
		cin >> n;
		cout << endl << endl;

		while (n > 4 || n < 1) {
			cout << "Invalid Input. Choose one operation between [1-4]." << endl;
			cin >> n;
		}

		cout << endl;
		if (n == 1) {
			cout << "Addition Result: " << addition(a, b) << endl;
		} else if (n == 2) {
			cout << "Subtraction Result: " << subtraction(a, b) << endl;
		} else if (n == 3) {
			cout << "Multiplication Result: " << multiplication(a, b) << endl;
		} else if (n == 4) {
			cout << "Division Result: " << division(a, b) << endl;
		}

		cout << endl;
		cout << "Do you want to continue with another operation? [y/n]" << endl << endl;
		char s;
		cin >> s;
		if (s == 'n') {
			exit(0);
		}
	}

}