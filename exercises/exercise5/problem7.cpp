#include <iostream>

using namespace std;

int main()
{
    int number, k;

    cin >> number >> k;

    int len = 0, helpNumber = number;

    while(helpNumber != 0)
    {
        ++len;
        helpNumber /= 10;
    }

    int shiftDigit = 1;

    for(int i = 1; i <= len - k; ++i)
    {
        shiftDigit *= 10;
    }

    int newNumber = number / (shiftDigit * 10) * shiftDigit  + number % shiftDigit;

    cout << newNumber << endl;

    return 0;
}
