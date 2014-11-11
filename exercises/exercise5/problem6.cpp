#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int number, k;

    cin >> number >> k;

    int shiftDigit = 1;

    for(int i = 1; i < k; ++i)
    {
        shiftDigit *= 10;
    }

    int newNumber = number / (shiftDigit * 10) * shiftDigit  + number % shiftDigit;

    cout << newNumber << endl;

    return 0;
}
