#include <iostream>

using namespace std;

int main()
{
    int number, reversedNumber = 0;

    cin >> number;

    int k = number;

    while(number != 0)
    {
        reversedNumber *= 10;
        reversedNumber += number % 10;

        number /= 10;
    }

    cout << boolalpha << (k == reversedNumber) << endl;
    return 0;
}
