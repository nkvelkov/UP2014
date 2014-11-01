#include <iostream>

using namespace std;

int main()
{
    int number;

    cin >> number;

    number = abs(number);

    int units = number % 10;
    int tens = number / 10 % 10;
    int hundreds = number / 100;

    bool unitsCheck = units % 2 != 0;
    bool tensCheck = tens % 2 != 0;
    bool hundredsCheck = hundreds % 2 != 0;

    cout << unitsCheck + tensCheck + hundredsCheck << endl;

    return 0;
}

