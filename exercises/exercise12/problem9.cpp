// Execise13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

bool isDigitHere(int n, int k)
{
	if (n == 0) return false;
	if (n % 10 == k) return true;

	return isDigitHere(n / 10, k);
}

int _tmain(int argc, _TCHAR* argv[])
{
	cout << boolalpha << isDigitHere(123, 4);
	cout << endl;


	return 0;
}



