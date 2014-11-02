#include<iostream>
using namespace std;
int main ()
{
    int d,m;
    cout<<"Enter a date: ";
    cin>>d;
    cout<<"Enter a mounth: ";
    cin>>m;
    if (m<0 || m>12 || (m<8 && m%2==1 || m>6 && m%2==0) && d>31 || m==2 && d>28 || (m==4 || m==6 || m==9 || m==11) && d>30 || d<0)
    {
            cout<<"Invalid input!\n";
            }
    else
    {
        d++;
        switch(m)
        {
                 case 1: case 10: {d=d+1;break;}
                 case 2: case 3: case 11: {d=d+4;break;}
                 case 4: case 7: {break;}
                 case 5: {d=d+2;break;}
                 case 6: {d=d+5;break;}
                 case 8: {d=d+3;break;}
                 case 9: case 12: {d=d+6;break;}
                 };
                 int day=d%7;
                 switch(day)
                 {
                            case 1:{cout<<"Monday\n";break;}
                            case 2:{cout<<"Tuesday\n";break;}
                            case 3:{cout<<"Wednesday\n";break;}
                            case 4:{cout<<"Thursday\n";break;}
                            case 5:{cout<<"Friday\n";break;}
                            case 6:{cout<<"Saturday\n";break;}
                            case 0:{cout<<"Sunday\n";break;}
                };
    }

    return 0;
}

