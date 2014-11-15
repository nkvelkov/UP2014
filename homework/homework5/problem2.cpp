#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int number1, number2;
    cin >> number1;

    bool flag = false;

    for(int i = 0; i < n-1; ++i)
    {
        cin >> number2;

        if(number1 == number2)
        {
            flag = true;
        }

        number1 = number2;
    }

    if(flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
