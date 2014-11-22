#include <iostream>

using namespace std;

int main()
{
    char season;
    int number;

    cin >> season >> number;

    switch (season)
    {
        // 'P' или 'p' за пролет.
        case 'P':
        case 'p':
            switch (number)
            {
                case 1: cout << "March\n"; break;
                case 2: cout << "April\n"; break;
                case 3: cout << "May\n"; break;
            }
            break;

        // 'L' или 'l' за лято.
        case 'L':
        case 'l':
            switch (number)
            {
                case 1: cout << "June\n"; break;
                case 2: cout << "July\n"; break;
                case 3: cout << "August\n"; break;
            }
            break;

        // 'E' или 'e' за есен.
        case 'E':
        case 'e':
            switch (number)
            {
                case 1: cout << "September\n"; break;
                case 2: cout << "October\n"; break;
                case 3: cout << "November\n"; break;
            }
            break;

        // 'Z' или 'z' за зима.
        case 'Z':
        case 'z':
            switch (number)
            {
                case 1: cout << "December\n"; break;
                case 2: cout << "January\n"; break;
                case 3: cout << "February\n"; break;
            }
            break;
    }

    return 0;
}
