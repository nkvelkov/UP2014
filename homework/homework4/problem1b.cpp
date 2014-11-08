#include <iostream>

using namespace std;

int main()
{
    int n, number, minDigit = 9;

    cin >> n;


    for(int i=1; i<n; ++i)
    {
        cin >> number;

        while(number != 0)
        {
            if( number % 10 < minDigit )
            {
                minDigit = number % 10;
            }
            number /= 10;
        }
    }

    cout << minDigit << endl;

    return 0;
}
