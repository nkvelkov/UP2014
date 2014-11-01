#include <iostream>

using namespace std;

int main()
{
    double xCoord, yCoord;

    cin >> xCoord >> yCoord;

    bool answer = xCoord >= 1 && xCoord <= 5 && yCoord >= 1 && yCoord <= 3;

    cout << boolalpha << answer << endl;

    return 0;
}

