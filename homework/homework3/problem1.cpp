#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int units = n % 10;
    int tens = n / 10 % 10;
    int hundreds = n / 100;

    bool flag = ((n % units == 0) && (n % tens == 0) && (n % hundreds == 0));

    if(flag)
    {
        cout << "Yes" << endl;
        cout << units + tens + hundreds << endl;
    }else
    {
        cout << "No" << endl;
        cout << units * tens * hundreds << endl;
    }

	return 0;
}

