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

    bool b = true;

    for(int i = 0; i < n && b; ++i)
    {
        for(int j = i+1; j < n && b; ++j)
        {
            if(arr[i] == arr[j])
                b = false;
        }
    }

    cout << boolalpha << b << endl;

    return 0;
}
