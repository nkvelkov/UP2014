#include<iostream>
using namespace std;
int main ()
{
    int x,y;

    cout << "Insert the coordinates of a point on the plane: ";
    cin >> x >> y;

    if( y >= 0 && 4 * x + y <= 24 && -8 * x + y <= 24 )
    {
        cout << "true" << endl;
    }else
    {
        cout << "false" << endl;
    }
    return 0;
}
