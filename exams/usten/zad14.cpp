#include <iostream>
using namespace std;

double expr (double* a, int n)
{
       if (n == 1) return a[0];
       return a[0] + 1/expr (a + 1, n - 1);
}

int main ()
{
    int n;
    double a[50];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];

    cout << expr (a, n) << endl;

    //system ("pause");
    return 0;
}
