#include<iostream>

using namespace std;

int main ()
{
    int year, day, month;

    cin >> day >> month >> year;

    bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 4 == 0);
    bool answer;

    if(month >= 1 && month <= 7 && month % 2 == 0)
    {
        if( month == 2 )
        {
            if(isLeapYear)
            {
                answer = day >= 1 && day <= 29;
            }else
            {
                answer = day >= 1 && day <= 28;
            }
        }else
        {
            answer = day >= 1 && day <= 30;
        }
    }else if( month >= 1 && month <= 7)
    {
         answer = day >= 1 && day <= 31;

    }else if( month <= 12 )
    {
        if( month % 2 == 0 )
        {
            answer = day >= 1 && day <= 31;

        }else
        {
            answer = day >= 1 && day <= 30;
        }
    }else
    {
        answer = false;
    }

    cout << boolalpha << answer << endl;

    return 0;
}
