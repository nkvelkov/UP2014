#include<iostream>
using namespace std;
int main ()
{
    unsigned int a, b, resultNumber1, resultNumber2;

    cin >> a >> b;

    unsigned int unitsA = a % 10, unitsB = b % 10;
    unsigned int tensA = (a / 10) % 10, tensB = (b / 10) % 10;
    unsigned int hundredsA = a / 100, hundredsB = b / 100;

    resultNumber1 = hundredsA * 100 + tensA * 10 + unitsB;
    resultNumber2 = hundredsB * 100 + tensB * 10 + unitsA;
    // za podtochka à
    cout << resultNumber1 << " " << resultNumber2 << endl;

    resultNumber1 = hundredsA * 100 + tensB * 10 + unitsA;
    resultNumber2 = hundredsB * 100 + tensA * 10 + unitsB;
    // za podtochka b
    cout << resultNumber1 << " " << resultNumber2 << endl;

    resultNumber1 = hundredsB * 100 + tensA * 10 + unitsA;
    resultNumber2 = hundredsA * 100 + tensB * 10 + unitsB;
    // za podtochka v
    cout << resultNumber1 << " " << resultNumber2 << endl;
    return 0;
}
