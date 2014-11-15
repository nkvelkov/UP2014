#include <iostream>

using namespace std;

int main()
{
    int n, swapNumber;
    cin >> n;

    int number1, number2;
    cin >> number1;

    for(int i = 0; i < n - 1; ++i)
    {
        cin >> number2;

        while(number2 != 0)
        {
            swapNumber = number2;
            number2 = number1 % number2;
            number1 = swapNumber;
        }
    }

    cout << number1 << endl;

    return 0;
}
