#include <iostream>

using namespace std;

int main()
{
    int n, first = 1, second = 1;
    cin >> n;

    if( n <= 2 )
    {
        cout << first << endl;
    }else
    {
        for(int i=1; i<n; ++i)
        {
            second += first;
            first = second - first;
        }

        cout << first << endl;
    }
    return 0;
}
