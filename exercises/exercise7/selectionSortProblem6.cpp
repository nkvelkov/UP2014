#include <iostream>

using namespace std;

int main()
{
    int arr[100];
    int x, n;

    cin >> n; // >> x;

    for(int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < n - 1; ++i)
    {
        int index = i;

        for(int j = i + 1; j < n; ++j)
        {
            if(arr[j] > arr[index])
            {
                index = j;
            }
        }

        if(index != i)
        {
            int temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
            // swap (arr[i], arr[index]);
        }
    }

    for(int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }cout << endl;

    return 0;
}
