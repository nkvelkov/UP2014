#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
    int n;

    do
    {
        cin >> n;
    }while( n < 1000 || n >9999);

    int units = n % 10;
    int tens = n / 10 % 10;
    int hundreds = n / 100 % 10;
    int thousands = n / 1000;

    units = ( units + 7 ) % 10;
    tens = ( tens + 7 ) % 10;
    hundreds = ( hundreds + 7 ) % 10;
    thousands = ( thousands + 7 ) % 10;

    int resultNumber = tens * 1000 + units * 100 +  thousands * 10 + hundreds;

    cout << resultNumber << endl;

    return 0;
}
