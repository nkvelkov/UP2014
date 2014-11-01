#include <iostream>

using namespace std;

int main()
{
    int var0 = 1, var1 = 2;

    cout << "var0 = " << var0 << " var1 = " << var1 << endl;

    var0 = var0 + var1;
    var1 = var0 - var1;
    var0 = var0 - var1;

    cout << "swap...\n";

    cout << "var0 = " << var0 << " var1 = " << var1 << endl;

    return 0;
}
