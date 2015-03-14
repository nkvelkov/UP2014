#include <iostream>
using namespace std;

int main ()
{
    int n, a[50];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    int max = a[0] + a[n - 1];
    for (int i = 1; i < n/2; i++)
        if (a[i] + a[n - i - 1] > max) max = a[i] + a[n - i - 1];
    cout << max << endl;

    //system ("pause");
    return 0;
}
