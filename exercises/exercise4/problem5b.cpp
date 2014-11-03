#include <iostream>
using namespace std;

int main()
{
	int n;
	double sum = 1;

	cin >> n;

	int a;

	for (int i = 2; i <= n; ++i)
	{
	    if( i % 3 == 0)
        {
            a = -2;
        }else
        {
            a = 1;
        }
		sum += (double)a/i;
	}

	cout << sum << endl;

	return 0;
}
