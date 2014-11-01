#include <iostream>
using namespace std;

int main()
{
    int n, counter = 0;
    cin >> n;

    while( n != 0 )
    {
        if( n % 2 == 0 )
            ++counter;

        n /= 10;
    }

    return 0;
}
