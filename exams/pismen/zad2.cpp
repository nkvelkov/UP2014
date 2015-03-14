#include <iostream>
using namespace std;

int main()
{
    int n, a[100][100];
    cin >> n;
    for (int i = 0; i < n*n; i++)
        for (int j = 0; j < n*n; j++) cin >> a[i][j];

    bool flag = true;

    for (int i = 0; i < n*n; i++)
    {
        for (int j = 0; j < n*n; j++)
            for (int k = j + 1; k < n*n; k++)
                if (a[i][j] == a[i][k]) flag = false;
    }

    for (int j = 0; j < n*n; j++)
    {
        for (int i = 0; i < n*n; i++)
            for (int k = i + 1; k < n*n; k++)
                if (a[i][j] == a[k][j]) flag = false;
    }

    for (int ii = 0; ii < n*n; ii += n)
        for (int jj = 0; jj < n*n; jj += n)
        {
            for (int i = ii; i < ii + n; i++)
                for (int j = jj; j < jj + n; j++)
                    for (int k = ii; k < ii + n; k++)
                        for (int l = jj; l < jj + n; l++)
                            if (a[i][j] == a[k][l] && (i != k || j != l)) flag = false;
        }

    cout << boolalpha << flag << endl;
    //system ("pause");
    return 0;
}
