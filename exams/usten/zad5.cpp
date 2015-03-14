#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    double f, x = 1, y = 1, z = 1;

    switch(n)
    {
             case 1: f = pow ((x + y + z), 0.2); break;
             case 2: f = log10 (fabs (x - y - z)); break;
             case 3: f = tan(z) - 1/tan(x); break;
             case 4: f = pow (x, y + z) + pow (z, x); break;
             case 5: f = pow (x, y) + pow (y, z) + pow (z, x); break;
    }

    cout << f << endl;
   // system ("pause");
    return 0;
}
