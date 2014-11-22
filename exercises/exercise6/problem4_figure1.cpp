#include <iostream>

using namespace std;

int maine()
{
    int n;

    cout << "Enter a whole positive number: ";
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < i; ++j)
        {
            cout << (char)('a' + j) << " ";
        }

        cout << endl;
    }

    //system ("pause");
    return 0;
}
