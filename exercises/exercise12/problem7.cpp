// Execise13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int numDigits(int n)
{
	if (n == 0)	return 0;

	return 1 + numDigits(n / 10);
}

int sumDigits(int n)
{
	if (n == 0) return 0;

	return n % 10 + sumDigits(n / 10);
}

int _tmain(int argc, _TCHAR* argv[])
{
	cout << sumDigits(123);
	cout << endl;


	return 0;
}



