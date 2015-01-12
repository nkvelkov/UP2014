// Execise13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


void elems(int * arr, int n)
{
	cout << arr[n - 1] << " ";

	if (n == 1) return;

	elems(arr, n - 1);
}

void arrElems(int* arr, int n)
{
	cout << arr[0] << " ";

	if (n == 1) return;

	arrElems(arr + 1, n - 1);
}
int _tmain(int argc, _TCHAR* argv[])
{
	int arr[] = { 1, 2, 3, 4 };
	int n = 4;

	arrElems(arr, n);
	cout << endl;


	return 0;
}



