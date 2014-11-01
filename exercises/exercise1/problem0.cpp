#include <iostream>
using namespace std;

int main()
{
    int var0 = 2, var1 = 1;

    cout << "var0 = " << var0 << " var1 = " << var1 << endl;

    int s = var0;
    var0 = var1;
    var1 = s;

    cout << "swap...\n";

    cout << "var0 = " << var0 << " var1 = " << var1 << endl;

	return 0;
}

