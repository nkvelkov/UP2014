#include <iostream>

using namespace std;

int main()
{
    int arrN[100], arrM[100], newArr[201];
    int m, n;

    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        cin >> arrN[i];
    }

    cin >> m;
    for(int i = 0; i < m; ++i)
    {
        cin >> arrM[i];
    }

    for(int i = 0; i < n - 1; ++i)
    {
        int index = i;
        for(int j = i + 1; j < n; ++j)
        {
            if(arrN[j] < arrN[index])
            {
                index = j;
            }
        }
        if(index != i)
        {
            int temp = arrN[i];
            arrN[i] = arrN[index];
            arrN[index] = temp;
            // swap (arr[i], arr[index]);
        }
    }

    for(int i = 0; i < m - 1; ++i)
    {
        int index = i;
        for(int j = i + 1; j < m; ++j)
        {
            if(arrM[j] < arrM[index])
            {
                index = j;
            }
        }

        if(index != i)
        {
            int temp = arrM[i];
            arrM[i] = arrM[index];
            arrM[index] = temp;
            // swap (arr[i], arr[index]);
        }
    }

    int r = 0, j = 0, i = 0;

    while( i < n && j < m)
    {
        if(arrN[i] < arrM[j])
        {
            newArr[r++] = arrN[i++];
        }else
        {
            newArr[r++] = arrM[j++];
        }
    }

    if( i < n )
    {
        for(int k = i; k < n; ++k)
        {
            newArr[r++] = arrN[i];
        }
    }

    if( j < m )
    {
        for(int k = j; k < m; ++k)
        {
            newArr[r++] = arrM[j];
        }
    }
    for(int i = 0; i < r; ++i)
    {
        cout << newArr[i] << " ";
    }cout << endl;

    return 0;
}
