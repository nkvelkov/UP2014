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

bool isReachable(int arr[][4], int n, int i, int j)
{
	if (i < 0) return false;
	if (j < 0) return false;
	if (i > n) return false;
	if (j > n) return false;
	if (arr[i][j] == 3) return true;
	if (arr[i][j] != 0) return false;

	arr[i][j] = 1;

	return isReachable(arr, n, i + 1, j) || isReachable(arr, n, i - 1, j) || isReachable(arr, n, i, j + 1) || isReachable(arr, n, i, j - 1);
}

int _tmain(int argc, _TCHAR* argv[])
{
	int maze[4][4] =
	{ { 0, 0, 0, 0 },
	{ 1, 0, 1, 0 },
	{ 1, 1, 1, 1 },
	{ 1, 0, 3, 0 } };

	cout << boolalpha << isReachable(maze, 4, 0, 0);
	cout << endl;


	return 0;
}



