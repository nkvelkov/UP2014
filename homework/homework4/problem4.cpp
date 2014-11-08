#include <iostream>

using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;

    int twoN = 1;
    for(int i=0; i<n; ++i)
    {
        sum += 2*i + twoN;
        twoN *= 2;
    }

    cout << sum  << endl;
            //an = 2*n + n^2;
    cout << "an = " << 2*n + twoN << endl;

    return 0;
}
