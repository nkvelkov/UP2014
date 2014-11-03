#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;

	cin >> n;

	int product = 1;

	for (int i = n; i >= 1; --i)
	{
		product *= i;
	}

	cout << product << endl;

	product = 1;

	for (int i = 1; i <= n; ++i)
	{
		product *= i;
	}

	cout << product << endl;

	return 0;
}