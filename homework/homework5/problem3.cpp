#include <iostream>

using namespace std;

int main()
{
    int a, b, newNum = 0, curNum, temp = 0, sum = 0;
    cin >> a >> b;

    for( int i = a; i <= b; ++i)
    {
        curNum = i;

        while( curNum != 0 )
        {
            newNum = newNum * 10 + curNum % 10;
            curNum /= 10;
        }

        newNum += i;
        curNum = newNum;

        while( newNum != 0 )
        {
            temp = temp * 10 + newNum % 10;
            newNum /= 10;
        }

        if( temp == curNum )
        {
            sum += i;
        }

        temp = 0;
    }

    cout << sum << endl;

    return 0;
}
