#define _USE_MATH_DEFINES
#include<iostream>
#include<string>
#include<cmath>
#include "calculator.h"
using namespace std;
int main() {
	const double pi = M_PI;
	string str;
	double x = 0.0;
	char oper = '+';
	double y = 0.0; 
	double t = 0.0;
	string func = "sin";
	double base = 0.0;
	double arg = 0.0;
	int term = 0;
	int n = 0;
	int k = 0;
	double result = 0;
	Calculator calc;
	while (true) {
		cout << "Enter topic: ";
		cin >> str;
		if (str.compare("Arithmetic") == 0) {
			cout << "Enter Arithmetic Operation: ";
			cin >> x >> oper >> y;
			if (oper == '/' && y == 0) {
				cout << "Division by zero exception" << endl;
			}
			else {
				result = calc.Calculate(x, oper, y);
				cout << result << endl;
			}
		}
		else if (str.compare("Trigonometry") == 0) {
			cout << "Enter trig function to compute value of: ";
			cin >> func >> t;
			if (func == "tan"  && t == pi/2) {
				cout << "Undefined"<<endl;
			}
			else {
				result = calc.trig(func, t);
				cout<<result << endl;
			}
		}
		else if (str.compare("Logarithms") == 0) {
			cout << "Enter the base of the logarithm: ";
			cin >> base;
			cout << "Enter the argument of the logarithm: ";
			cin >> arg;
			if (base <= 0 && arg <= 0) {
				cout << "Undefined: Make your base and arg >= 0" << endl;
			}
			else {
				result = calc.logs(base, arg);
				cout << "Result: " << result << endl;
			}
		}
		else if (str.compare("Factorial") == 0) {
			cout << "Enter number: ";
			cin >> term;
			if (term < 0 || term > 170) {
				cout << "Outside range. Make your number in the range of 0 <= x <= 170"<<endl;
			}
			else {
				result = calc.factorial(term);
				cout << "The factorial of " << term << " is " << result<<endl;
			}
		}
		else if (str.compare("Combination") == 0) {
			cout << "Enter number of items(your n value of nCk): ";
			cin >> n;
			cout << "Enter the number of items taken at a time(your k value of nCk): ";
			cin >> k;
			if (n < 0 || k < 0) {
				cout << "Outside the appropriate range" << endl; 
			}
			else {
				result = calc.combination(n, k);
				cout << n << " choose " << k << " is " << result << endl; 
			}
		}
		else if (str.compare("Permutation") == 0) {
			cout << "Enter number of objects(n value of nPr): ";
			cin >> n;
			cout << "Enter numbers chosen at a time(r value of nPr): ";
			cin >> k;
			if (n < 0 || k < 0) {
				cout << "Outside appropriate range" << endl; 
			}
			else {
				result = calc.permutation(n, k);
				cout << n << " permutation " << k << " is " << result << endl;
			}
		}
		
	}
	return 0;
}

