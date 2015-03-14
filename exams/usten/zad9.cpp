#include <iostream>
using namespace std;

bool monot(int* a, int n, int k)
{
     //bool flag = true;
     for (int i = 0; i < k*n; i += 2*n)
     {
         for (int j = i + 1; j < i + n; j++)
         {
             if (a[j] <= a[j -1]) return false;
         }
         for (int j = i + n + 1; j < i + 2*n && j < k*n; j++)
         {
             if (a[j] >= a[j - 1]) return false;
         }
     }
     return true;
}

int main ()
{
    int n, k,  a[100];
    cin >> k >> n;
    for (int i = 0; i < k*n; i++) cin >> a[i];

    cout << boolalpha << monot (a, n, k) << endl;
    //system ("pause");
    return 0;
}
