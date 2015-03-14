#include <iostream>
using namespace std;

int main ()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int min1 = a;
    if (min1 > b) min1 = b;
    if (min1 > c) min1 = c;
    int max = min1;
    int min2 = a;
    if (min2 > b) min2 = b;
    if (min2 > d) min2 = d;
    if (max < min2) max = min2;
    int min3 = a;
    if (min3 > c) min3 = c;
    if (min3 > d) min3 = d;
    if (max < min3) max = min3;
    int min4 = b;
    if (min4 > c) min4 = c;
    if (min4 > d) min4 = d;
    if (max < min4) max = min4;

    cout << max << endl;
    //system ("pause");
    return 0;
}


