#include <iostream>

using namespace std;
int main()
{
	int n, p = 1;
    cin >> n;

	while (n != 52341)
	{

		if (n > 0) p *= n;
		cin >> n;
	}

	cout << "the product=" << p << endl;

	return 0;
}
