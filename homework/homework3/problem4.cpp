#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int xCoord, yCoord, horseXCoord, horseYCoord;

    cin >> horseXCoord >> horseYCoord;
    cin >> xCoord >> yCoord;

    bool flag = (abs(horseXCoord - xCoord) == 2 && abs(horseYCoord - yCoord) == 1 ||
                abs(horseXCoord - xCoord) == 1 && abs(horseYCoord - yCoord) == 2)

    cout << boolalpha << flag << endl;

	return 0;
}

