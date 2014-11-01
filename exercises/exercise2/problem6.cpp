#include <iostream>

using namespace std;

int main()
{
    unsigned int seconds; // izpolzvame unsigned, zashtoto
                        //ochakvame izminaloto vreme v sekundi da e polozhitelno chislo

    cin >> seconds;

    unsigned int minutes = seconds / 60;
    unsigned int hours = minutes / 60;

    hours %= 24; // vzimame gi po modul tyi kato e
    minutes %= 60; //vyzmojno da nadhvyrlqt syotvetno 24 i 60

    cout.fill('0'); // ako ostanat prazni mesta ot 'setw', te shte bydat zapylneni s '0'
    cout << setw(2) << hours << ":"
         << setw(2) << minutes << endl;

    return 0;
}

