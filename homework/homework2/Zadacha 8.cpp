#include <iostream>

using namespace std;

int main()
{
    int x, y;

    cin >> x >> y;

    if( (x + y ) % 2 == 0)
    {
        cout << "white" << endl;
    }else
    {
        cout << "black" << endl;
    }

    return 0;
}
