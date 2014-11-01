#include <iostream>
#include <cmath> // библиотеката, от която се нуждаем, за да използваме функцията abs()

using namespace std;

int main()
{
    int a, b;

    // въвеждаме променливите
    cin >> a >> b;

    int minNumber = (a + b - abs(a - b) ) / 2;

    int maxNumber = (a + b + abs(a - b) ) / 2;
    //За да докажете тези формули просто разкрийте модула.

    // извеждаме резултата
    cout << "the bigger is " << maxNumber << endl;
    cout << "the smaller is " << minNumber << endl;

    return 0;
}
