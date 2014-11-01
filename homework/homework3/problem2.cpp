#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int units = n % 10;
    int tens = n / 10 % 10;
    int hundreds = n / 100;

    bool flag = (tens + units + hundreds) > 9 ;

    if(flag)
    {
        cout << "Yes" << endl;
    }else
    {
        cout << "No" << endl;

    }

	return 0;
}

