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

int _tmain(int argc, _TCHAR* argv[])
{
	int arr[] = { 1, 2, 3, 4 };
	int n = 4;
	printArr(arr, n);
	filter(arr, n, isOdd);
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

