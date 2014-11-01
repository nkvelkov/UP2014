#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int units = n % 10;
    int tens = n / 10 % 10;
    int hundreds = n / 100;

    int product = units * tens * hundreds;

    //a)
    cout << boolalpha << (product % 5 == 3 && product >= 100 ) << endl; //tuk zadyljitelno trqbva da ima skobi, zashtoto
                                        // operatoryt << e s po-visok priritet ot operatorite za
                                        // sravnenie
    //a)
    int m;
    cin >> m;

    cout << boolalpha << (product > m )<< endl;

    for(int i = 1; i <= n; ++i)
    {
        if( n % i == 0)
        {
            cout << i << " ";
        }
    }cout << endl;

    return 0;
}

