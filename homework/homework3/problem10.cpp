#include <iostream>

using namespace std;

int main()
{
    int n, counter = 0;

    cin >> n;

    while( n != 0 )
    {
        int p = n % 10;
        if( p % 3 == 1)
            ++counter;

        n /= 10;
    }

    cout << counter << endl;
	return 0;
}

