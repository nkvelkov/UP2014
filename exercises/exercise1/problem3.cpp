#include <iostream>

using namespace std;

int main()
{
    int number;

    cin >> number;

    int units = number % 10;

    int tens = number / 10 % 10;

    int hundreds = number / 100;

    cout << "Hundreds: " << hundreds << endl;

    cout << "Tens: " << tens << endl;

    cout << "Units: " << units << endl;

    return 0;
}
