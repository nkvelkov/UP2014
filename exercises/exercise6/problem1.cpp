#include <iostream>

using namespace std;

int fmain()
{
    char firChar, secChar, thirdChar;

    cin >> firChar >> secChar >> thirdChar;

    int firNum = firChar - '0';
    int secNum = secChar - '0';
    int thirdNum = thirdChar - '0';

    int resultNum = firNum * 100 + secNum * 10 + thirdNum;

    cout << resultNum << endl;

    return 0;
}
