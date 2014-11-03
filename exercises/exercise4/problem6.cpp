#include <iostream>

using namespace std;

int main()
{
	int n;
	int p = 1;

	cin >> n;
	
	for (int i = 0; i < n; ++i)
	{
		p *= 2;
	}
	
	cout << p << endl;

	return 0;
}

