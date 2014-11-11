#include <iostream>

using namespace std;

int main()
{
    int a, b, swapVar;

    cin >> a >> b;

    if( a < b)
        swap(a, b);

    while(b != 0)
    {
        swapVar = b;
        b = a % b;
        a = swapVar;
    }

    cout << a << endl;

    return 0;
}
