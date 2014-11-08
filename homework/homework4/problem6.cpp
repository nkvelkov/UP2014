#include <iostream>

using namespace std;

int main()
{
    double x, sum = 0, denominator = 1;
    int n;

    cin >> x;
    cin >> n;

    double numerator = x;
    double increment = x*x;
    int sign = 1;

    for(int i=0; i<=n; ++i)
    {
        sum += sign * numerator / denominator; // на първата итерация имаме x/1
        sign = -sign;                          //на следващата знакът се мени
        numerator *= increment;                //х става х на трета степен
        denominator *= ++denominator * ++denominator;//в знаменателя трябва да получим 3! = 2 * 3
    }                                               // това работи и за 5! = 3! * 4 * 5

    cout << sum << endl;

    return 0;
}
