// Exercise.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int Ack(int m, int n)
{
	if (m == 0) return n + 1;
	if (n == 0) return Ack(m - 1, 1);
	return Ack(m - 1, Ack(m, n - 1));
}

bool isSecondPower(int n)
{
	if (n == 1) return true;
	if (n % 2 == 1) return false;
	return isSecondPower(n / 2);
}

int mult(int m, int n)
{
	if (n == 1) return m;
	return m + mult(m, n - 1);
}

double power(double x, int y)
{
	if (y == 0) return 1;
	return x * power(x, y - 1);
}

double fastPower(double x, int y)
{
	if (y == 0) return 1;
	if (y % 2 == 1) return x * fastPower(x, y - 1);
	double p = fastPower(x, y / 2);
	return p * p;
}

int product3(int n)
{
	if (n == 1) return 1;
	if (n % 3 == 1) return n * product3(n - 3);
	return product3(n - 1);
}

int productK(int n, int k)
{
	if (n == 1) return 1;
	if (n % k == 1) return n * productK(n - k, k);
	return productK(n - 1, k);
}

double func(double x, double y, int i)
{
	if (i > 11) return y;
	return func(x, y*x + i, i + 1);
}

int maxSufix(int n, int m)
{
	if (n % 10 != m % 10 || n == 0)
		return 0;
	return n % 10 + 10 * maxSufix(n / 10, m / 10);
}

int _tmain(int argc, _TCHAR* argv[])
{
	cout << maxSufix(1234, 23234) << endl;;
	//cout << productK(1, 1) << endl; 
	//cout << productK(4, 3) << endl;
	//cout << productK(7, 2) << endl;
	//cout << mult(2, 2) << endl;
	//cout << mult(3, 2) << endl;
	//cout << fastPower(2, 0) << endl;
	//cout << fastPower(2, 1) << endl;
	//cout << fastPower(2, 2) << endl;
	int x = 1;
	int y = 1;
	for (int i = 2; i <= 11; ++i)
	{
		y = y*x + i;
	}
	cout << y << endl;
	cout << func(x, 1, 2) << endl;
	return 0;
}

