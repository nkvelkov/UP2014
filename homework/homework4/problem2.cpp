#include <iostream>
using namespace std;
int main()
{
	int number, temp, counter;
	bool b = true;
	do
	{
		counter = 0;
		cin >> number;

		if (number < 0)
            b = false;

		temp = number;

		while (temp != 0 && b)
		{
			if (temp % 10 == 1) counter++;
			temp /= 10;
		}

		cout << counter << endl;
	} while (number > 0 );

	return 0;
}
