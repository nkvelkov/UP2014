#include<iostream>
using namespace std;
int main ()
{
    int year;

    cout<<"Insert an year: ";

    cin>>year;

    if (year%4 == 0 && year%100 != 0 || year%400 == 0)
    {
        cout<<"The year is leap.\n";
    }
    else
    {
        cout<<"The year is NOT leap.\n";
    }

    return 0;
}
