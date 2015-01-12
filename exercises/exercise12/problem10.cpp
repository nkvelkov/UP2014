// Execise13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int change(int n, int k, int m)
{
	if (n == 0) return 0;

	int p = n % 10;

	if (p == k)
		p = m;

	return p + 10 * change(n / 10, k, m);
}

int _tmain(int argc, _TCHAR* argv[])
{
	cout << change(123, 2, 9);
	cout << endl;


	return 0;
}



