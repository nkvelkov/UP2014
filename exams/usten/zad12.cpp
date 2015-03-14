#include <iostream>
using namespace std;

bool sorted (int a[], int n)
{
     if (n == 1 || n == 0) return true;
     return a[0] <= a[1] && sorted (a + 1, n - 1);
}

bool isThereSorted (int a[][50], int m, int n)
{
     for (int i = 0; i < m; i++)
         {for (int j = 0; j < n; j++) cout << a[i][j] << " "; cout << endl; }
     
     for (int i = 0; i < m; i++)
     {
         if (sorted (a[i], n)) return true;
     }
     
     return false;
}

int main ()
{
    int a[50][50];
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) cin >> a[i][j];
    cout << boolalpha << isThereSorted (a, m, n) << endl;
    
    system ("pause");
    return 0;
}
