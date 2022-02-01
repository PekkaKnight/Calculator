#define _USE_MATH_DEFINES
#include <cmath>
#include "Calculator.h"

double Calculator::Calculate(double x, char oper, double y){
	switch (oper) {
	case '+':
		return x + y;
		break;
	case '-':
		return x - y;
		break;
	case '*':
		return x * y;
		break;
	case '/':
		return x / y;
		break;
	default:
		return 0.0;
	}
}

double Calculator::trig(string func, double t){
	if (func == "sin") {
		return sin(t);
	}
	else if (func == "cos") {
		return cos(t);
	}
	else if (func == "tan") {
		return tan(t);
	}
	else if ( func == "arcsin") {
		return asin(t);
	}
	else if (func == "arccos") {
		return acos(t);
	}
	else if (func == "arctan") {
		return atan(t);
	}
	else {
		return 0.0;
	}
}

double Calculator::logs(double base, double arg){
	return log(arg) / log(base);
}
double Calculator::factorial(int term){
	if (term == 0) {
		return 1;
	}
	else {
		return term * factorial(term - 1);
	}
}
double Calculator::combination(int n, int k) {
	double ret = Calculator::factorial(n);
	double ret2 = Calculator::factorial(k);
	double ret3 = Calculator::factorial(n - k);
	double retType = ret / (ret2 * ret3);
	return retType;
}
double Calculator::permutation(int n, int k) {
	double ret = Calculator::factorial(n);
	double ret2 = Calculator::factorial(n - k);
	double retType = ret / ret2;
	return retType;
}