#include <iostream>

using namespace std;

int main()
{
    double xCoord, yCoord, radius;

    cin >> radius;
    cin >> xCoord >> yCoord;

    bool answer = xCoord * xCoord + yCoord * yCoord <= radius * radius;

    cout << boolalpha << answer << endl;

    return 0;
}

