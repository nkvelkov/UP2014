#include <iostream>
using namespace std;

int main()
{
	int n;
	double sum = 1;

	cin >> n;

	int sign = -1;

	for (int i = 2; i <= n; ++i)
	{
		sum += (double)sign/i;

		sign = - sign;
	}

	cout << sum << endl;

	return 0;
}
