#include <iostream>

using namespace std;

int main()
{
    int n, k;

    cin >> n >> k;

    long long product = 1, productK = 1;

    k = k < n - k ? k : n - k;

    for(int i = 1; i <= n; ++i)
    {
        if(i <= k)
        {
            productK *= i;
        }else if( i >= n-k+1 )
        {
            product *= i;
        }
    }

    int result = product / productK;

    cout << result << endl;

    return 0;
}
