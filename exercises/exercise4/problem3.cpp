#include <iostream>

using namespace std;

int main()
{
    int n;
	int sum = 0;

	cin >> n;

	for (int i = 2; i <= 2 * n; i += 2)
	{
		sum += i;
	}

	cout << sum << endl;

	return 0;
}