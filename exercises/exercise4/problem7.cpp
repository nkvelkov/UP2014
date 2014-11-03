#include <iostream>

using namespace std;

int main()
{
	int n;
	int k;

	cin >> n >> k;

	int pn = 1;

	for (int i = k+1; i <= n; ++i)
	{
		pn *= i;
	}
	cout << pn << endl;

	return 0;
}