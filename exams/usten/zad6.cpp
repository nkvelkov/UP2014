#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int s = 2, t = 2;
    for (int i = 2; i <= n; i++)
    {
         t /= i - 1;
         t *= (2*i - 1) * 2*i;
         s += t;
    }

    cout << s << endl;
    //system ("pause");
    return 0;
}
