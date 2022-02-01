#pragma once
#include<string>
using namespace std;
class Calculator
{
public:
	double Calculate(double x, char oper, double y);
	double trig( string func, double t);
	double logs(double base, double arg);
	double factorial(int term);
	double combination(int n, int k);
	double permutation(int n, int k);
};

