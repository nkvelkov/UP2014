// Execise13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int fib(int n)
{
	if (n == 0) return 0;
	if (n == 1) return 1;

	return fib(n - 1) + fib(n - 2);
}

int fact(int n)
{
	if (n == 0)
		return 1;

	return n * fact(n - 1);
}


int _tmain(int argc, _TCHAR* argv[])
{
	int arr[] = { 1, 2, 3, 4 };
	int n = 4;

	for (int i = 0; i < 10; ++i)
		cout << fact(i) << endl;


	return 0;
}



