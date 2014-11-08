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
        sum += sign * numerator / denominator; // in the first iteration sum is equal to x/1
        sign = -sign;                          //in the next one the sign changes and
        numerator *= increment;                //x becomes x on third power
        denominator *= ++denominator * ++denominator;//for the denominator we have 3! = 2 * 3
    }                                               // this works for every factorial number, for example 5! = 3! * 4 * 5

    cout << sum << endl;

    return 0;
}
