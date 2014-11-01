#include <iostream>

using namespace std;

int main()
{
    unsigned int hour1, minutes1,
                hour2, minutes2; // izpolzvame unsigned, zashtoto
                        //ochakvame izminaloto vreme da e polozhitelno chislo

    cin >> hour1 >> minutes1;
    cin >> hour2 >> minutes2;

    unsigned int resultMinutes = minutes1 + minutes2;
    unsigned int resultHours = hour1 + hour2 + resultMinutes/60;

    resultHours %= 24;   // vzimame gi po modul tyi kato e
    resultMinutes %= 60; //vyzmojno da nadhvyrlqt syotvetno 24 i 60

    cout.fill('0'); // ako ostanat prazni mesta ot 'setw', te shte bydat zapylneni s '0'
    cout << setw(2) << resultHours << ":"
         << setw(2) << resultMinutes << endl;

    return 0;
}

