#include <iostream>

using namespace std;

int main()
{
    double xCoord, yCoord, radius, xCenter, yCenter;

    cin >> xCenter >> yCenter;
    cin >> radius;
    cin >> xCoord >> yCoord;

    bool answer = (xCoord - xCenter) * (xCoord - xCenter) + (yCoord - yCenter) * (yCoord - yCenter) <= radius * radius;

    cout << boolalpha << answer << endl;

    return 0;
}

