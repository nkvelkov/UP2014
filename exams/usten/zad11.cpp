#include <iostream>
using namespace std;

void max_col(int a[][50], int m, int n, int* result)
{
     for (int i = 0; i < n; i++)
     {
         result[i] = a[0][i];
         for (int j = 1; j < m; j++)
         {
             int t = a[j][i];
             if (t > result[i]) result[i] = t;
         }
     }
}

int main ()
{
    int a[50][50];
    int result[50];
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) cin >> a[i][j];
    max_col (a, m, n, result);
    for (int i = 0; i < n; i++) cout << result[i] << " ";
    cout << endl;
    //system ("pause");
    return 0;
}
