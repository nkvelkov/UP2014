#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    double x,y;

    cout << "Insert the coordinates of a point on the plane: ";

    cin >> x >> y;

    cout << "The point lies on the line with equation\n";

    if (3*x + 5 == y) //Verification whether the point lies on the line with equation 3x+5=y.
    {
        cout<<"3x+5=y\n";
    }
    if (-5*x + 9 == y) //Verification whether the point lies on the line with equation -5x+9=y.
    {
        cout<<"-5x+9=y\n";
    }
    if ((double)(59/30)*x + (double)(134/60) == y) //Verification whether the point lies on the line with equation 59/30x+134/60=y.
    {
        cout<<"59/30x+134/60=y\n";
    }
    return 0;
}

