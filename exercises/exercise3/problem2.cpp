#include <iostream>
using namespace std;

int main()
{
    int n, counter = 0, store; // zadyljitelno trqbva da zanulim counter pyrvo

    cin >> n;

    // za da namerim broq na cifrite na chisloto, go delim celochisleno na 10,
    // dokato to ne stane ravno na 0, mojem da reshim zadachata s
    // while, do while ili for cikyl
    // v promenlivata counter pazim broq na cifrite
    store = n;
    while( n != 0 )
    {
        ++counter;
        n /= 10;
    }
    // pri vsqko vlizane v cikyla counter se uvelichava s edenica

    cout << counter << endl;


    // eto realizaciq s do while cikyl
    counter = -1;
    n = store;
    n *= 10;

    do
    {
        ++counter;
        n /= 10;
    }while( n != 0 );

    cout << counter << endl;
    //i realizaciq s for()

    n = store;
    counter = 0;

    for(n = store, counter = 0; n != 0; n /= 0)
    {
        ++counter;
    }
    cout << counter << endl;

    return 0;
}
