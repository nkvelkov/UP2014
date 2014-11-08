#include <iostream>
//Да се напише програма, която въвежда числа, докато не се въведе 0, и се извежда най-голямото от въведените числа.
using namespace std;

int main()
{
    int n, maxNumber;

    cin >> n;
    maxNumber = n;

    while(n != 0)
    {
        cin >> n;
        if ( n > maxNumber )
          maxNumber = n;

    }
    cout << "max = " << maxNumber << endl;

    return 0;
}
