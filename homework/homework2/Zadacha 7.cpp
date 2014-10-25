#include<iostream>
using namespace std;
int main ()
{
    int x,y;

    cout << "Insert the coordinates of a point on the plane: ";
    cin >> x >> y;
    //Circumference with center (5, 3) and radius 2.
    //Equation: (x-5)^2 + (y-3)^2 = 2^2

    if ((x-5)*(x-5) + (y-3)*(y-3) > 4)
    {
        cout<<"The point is outside the circle.\n";
    }

    if ((x-5)*(x-5) + (y-3)*(y-3) == 4)
    {
        cout<<"The point lies on the circle.\n";
    }

    if ((x-5)*(x-5) + (y-3)*(y-3) < 4)
    {
        cout<<"The point is inside the circle.\n";
    }

    return 0;
}
