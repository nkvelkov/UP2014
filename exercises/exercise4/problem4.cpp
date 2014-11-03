#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    long long result = 1;// използваме long long вместо int, за да можем да поберем по-голям разултат в result.

     // Тъй като (2n)!! = 2.4.6...2n, i трябва да започне от 2 и да се увеличава
    // до 2n, като приема само четни стойности, тоест стъпката ще е 2(i += 2,
    // което е същото като i = i + 2).
    for(int i = 2; i <= 2*n; i += 2)
    {
        result *= i;
    }

    cout << result << endl;

    return 0;
}
