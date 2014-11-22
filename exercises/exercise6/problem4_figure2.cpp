#include <iostream>

using namespace std;

int maind()
{
    int n;

    cout << "Enter a whole positive number: ";
    cin >> n;

    for (int i = 0; i <= n; ++i)
    {
        for (int t = 0; t <= i - 1; ++t)
        {
            cout << "  ";
        }

        for (int j = 0; j <= n - i; ++j)
        {
            cout << (char)('a' + j) << " ";
        }

        cout << endl;
    }

    return 0;
}
