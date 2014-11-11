#include <iostream>

using namespace std;

int main()
{
    int n;
    double x, product = 1;

    cin >> n >> x;

    double sine = sin(x);

    for(int i = 0; i < n; ++i)
    {
        product *= sine;
    }

    cout << product << endl;

    return 0;
}
