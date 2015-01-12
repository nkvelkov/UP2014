// Execise13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

typedef int(*type) (int, int);
typedef int Integer;
void(*func(int, int)) (int*, int);

void map(int* arr, int n, int(*f)(int))
{
	for (int i = 0; i < n; ++i)
	{
		arr[i] = f(arr[i]);
	}
}
typedef int(*funcType)(int);
void map2(int* arr, int n, funcType f)
{
	for (int i = 0; i < n; ++i)
	{
		arr[i] = f(arr[i]);
	}
}

int func(int);
int func2(int);
void printArr(int* arr, int n)
{
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	} cout << endl;
}

int _tmain(int argc, _TCHAR* argv[])
{
	int arr[] = { 1, 2, 3 };
	int n = 3;
	printArr(arr, n);
	map(arr, n, func);
	printArr(arr, n);
	map(arr, n, func2);
	printArr(arr, n);

	return 0;
}

int func2(int n)
{
	return n * 2;
}

int func(int n)
{
	return n + 1;
}

