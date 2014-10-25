#include<iostream>
#include<iomanip>
using namespace std;
int main ()
{
    int num1,num2,num3;
    double ave;

    cout << "Insert 3 integer numbers: " <<endl;
    cin >> num1 >> num2 >> num3;

    ave = (double)(num1+num2+num3)/3;

    cout << "The average value is: ";
    cout << setprecision(5) << fixed << ave <<endl;

    return 0;
}
