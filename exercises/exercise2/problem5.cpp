#include <iostream>

using namespace std;

int main()
{
    double xCoord, yCoord;

    cin >> xCoord >> yCoord;

    bool answer = 4 * xCoord + yCoord >= 24;

    cout << boolalpha << answer << endl;

    return 0;
}

