#include<iostream>

using namespace std;

int main ()
{
    double radius1, radius2, center1X, center2X, center1Y, center2Y;

    cin >> center1X >> center1Y;
    cin >> radius1;
    cin >> center2X >> center2Y;
    cin >> radius2;

    double pointX, pointY;

    cin >> pointX >> pointY;

    bool isInCircle1 = (pointX - center1X)*(pointX - center1X) + (pointY - center1Y)*(pointY - center1Y) <= radius1 * radius1;
    bool isInCircle2 = (pointX - center2X)*(pointX - center2X) + (pointY - center2Y)*(pointY - center2Y) <= radius2 * radius2;

    cout << boolalpha << (isInCircle1 && isInCircle2) << endl;

    return 0;
}
