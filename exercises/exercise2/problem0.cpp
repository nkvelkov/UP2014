#include <iostream>

using namespace std;

int main()
{
    int number, counter = 0;

    cin >> number;

    int helper = number % 10;

    if( helper % 2 != 0 )
    {
        ++counter;
    }

    number /= 10;
    helper = number % 10;

    if( helper % 2 != 0 )
    {
        ++counter;
    }

    number /= 10;
    helper = number % 10;

    if( helper % 2 != 0 )
    {
        ++counter;
    }

    cout << counter << endl;

    return 0;
}
