#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int sign = 1;
    double eps = 0.0000001, s = 1, a = 1, b = 1/4.0;
    int i = 3;
    while (fabs (a - b) < eps)
    {
        s += sign*b;
        sign = -sign;
        a = b;
        b = 1/(double)(i * i);
        i++;
    }
    cout << "i=" << i << endl;
    cout << s << endl;
    //system ("pause");
    return 0;
}
