#include <iostream>

using namespace std;

int main()
{
    int b;
    double a;

    cin >> a >> b;

    int product = 1;
    for(; b != 0; --b)
    {
        product *= a;
    }

    cout << product << endl;
    return 0;
}
