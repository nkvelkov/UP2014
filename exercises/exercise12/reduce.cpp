// Execise13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

typedef int(*type) (int, int);
typedef int Integer;
void(*func(int, int)) (int*, int);

void filter(int* arr, int& n, bool(*f)(int))
{
	for (int i = 0; i < n; ++i)
	{
		if (!f(arr[i]))
		{
			for (int j = i; j < n - 1; ++j)
			{
				arr[j] = arr[j + 1];
			}
			--n;
		}
	}
}
int func(int);
bool isEven(int);
bool isOdd(int);
void printArr(int* arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	} cout << endl;
}

int reduce(int* arr, int n, int nul_val, int(*f)(int, int))
{
	int s = nul_val;
	for (int i = 0; i < n; ++i)
	{
		s = f(s, arr[i]);
	}
	return s;
}

int _plus(int x, int y)
{
	return x + y;
}

int _mul(int x, int y)
{
	return x * y;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int arr[] = { 1, 2, 3, 4 };
	int n = 4;
	printArr(arr, n);
	cout << reduce(arr, n, 1, _mul) << endl;
	printArr(arr, n);

	return 0;
}

bool isEven(int n)
{
	return n % 2 == 0;
}

int func2(int n)
{
	return n * 2;
}

int func(int n)
{
	return n + 1;
}

