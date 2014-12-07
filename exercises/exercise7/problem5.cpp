#include <iostream>

using namespace std;

int main()
{
    int arr[100];
    int x, n;

    cin >> n >> x;

    for(int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int maxElem = arr[0];
    for(int i = 1; i < n ; ++i)
    {
        if(arr[i] > maxElem)
        {
            maxElem = arr[i];
        }
    }

    cout << maxElem << endl;

    return 0;
}
