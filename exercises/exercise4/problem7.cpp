#include <iostream>

using namespace std;

int main()
{
	int n;
	int k;

	cin >> n >> k;

	int product = 1;

	for (int i = k+1; i <= n; ++i)
	{
		product *= i;
	}
	cout << product << endl;

	return 0;
}
