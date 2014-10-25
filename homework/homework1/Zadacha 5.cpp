#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
    double a,b,c,p,s;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    p = (a+b+c)/2;
    s = sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<"S = "<< s <<endl;

    return 0;
}
