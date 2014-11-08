#include <iostream>

using namespace std;

int main()
{
	int n;

	cin >> n;

	double bounds = sqrt(n);

	bool flag = true;

	for (int i = 2; i <= bounds && flag; ++i)
	{
		if (n % i == 0)
		{
			flag = false;
		}
	}

	cout << boolalpha << flag << endl;

	return 0;
}