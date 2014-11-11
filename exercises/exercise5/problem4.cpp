#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int number;

    cin >> number;

    for(int i = 2; i <= number; ++i)
    {
        if( number % i == 0)
        {
            bool b = true;

            for(int j = 2; j <= sqrt(i) && b; ++j)
            {
                if( i % j == 0)
                    b = false;
            }

            if(b)
                cout << i << " ";
        }
    }


    return 0;
}
