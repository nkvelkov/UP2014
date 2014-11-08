#include <iostream>

using namespace std;

int main()
{
    int n;

    do
    {

     cin >> n;
     if( n%2 == 0 )
     {
         n /= 2;
     }else
     {
         n = n * 3 + 1;
     }
     cout << n << endl;
    }while(n != 1);


    return 0;
}
