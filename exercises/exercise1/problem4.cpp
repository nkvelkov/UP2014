#include <iostream>

using namespace std;

int main()
{
    // Действието на тези манипулатори остава в сила,
    // докато не бъде отменено от други манипулатори.

    cout << 10.0 << endl;               // -> 10
    cout << showpoint << 10.0 << endl;   // -> 10.0
    cout << noshowpoint << 10 << endl;    // -> 10

    cout << 9 << endl;               // -> 9
    cout << showpos << 9 << endl;    // -> +9
    cout << -9 << endl;              // -> -9
    cout << noshowpos << -9 << endl;   // -> -9

    cout << 9.87654321 << endl;                 // -> 9.87654
    cout << fixed << 9.87654321 << endl;        // -> 9.876543
    cout << scientific << 98.7654321 << endl;   // -> 9.876543e+001

    cout << setprecision(3) << 9.87654321 << endl;                 // -> 9.88
    cout << setprecision(3) << fixed << 9.87654321 << endl;        // -> 9.877
    cout << setprecision(3) << scientific << 98.7654321 << endl;   // -> 9.877e+001

    return 0;
}
