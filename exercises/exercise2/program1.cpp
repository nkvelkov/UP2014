#include <iostream>

using namespace std;

int main()
{
    int number;
    bool flag = false;

    cin >> number;

    number = abs(number);

    int units = number % 10;
    int tens = number / 10 % 10;
    int hundreds = number / 100;

    cout << boolalpha << (units == 6 || hundreds == 6 || tens == 6) << endl;

    return 0;
}

