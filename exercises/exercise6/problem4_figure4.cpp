#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Enter a whole positive number: ";
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        for (int t = 1; t <= i - 1; ++t)
        {
            cout << "  ";
        }


        for (int j = i; j <= n; ++j)
        {
            cout << (char)('a' + j - 1) << " ";
        }

        cout << endl;
    }

    for (int i = n - 1; i >= 1; --i)
    {
        for (int t = 1; t <= n - 1; ++t)
        {
            cout << "  ";
        }

        for (int j = n; j >= i; --j)
        {
            cout << (char)('a' + j - 1) << " ";
        }

        cout << endl;
    }

    return 0;
}
