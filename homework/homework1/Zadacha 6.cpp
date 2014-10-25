#include<iostream>
using namespace std;
int main ()
{
    int br,min,ost;
    cout << "Broj uprazhnenija: ";
    cin >> br;
    min = br*45;
    cout << "Upr. sa prodylzhili obshto " << min <<" min."<<endl;
    ost=15-br;

    cout << "Ostavat oshte "<< ost <<" uprazhnenija."<<endl;

    return 0;
}
