#include <iostream>

using namespace std;

int main()
{
    int arrN[100];
    int x, n;

    cin >> n >> x;
    for(int i = 0; i < n; ++i)
    {
        cin >> arrN[i];
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

    for(int i = 0; i < n; ++i)
    {
       if(arrN[i] == x)
            cout << i << " ";
    }cout << endl;

    return 0;
}
