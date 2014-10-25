#include<iostream>
using namespace std;
int main ()
{
    int n;
    cout << "Insert a number of mounth:\n";

    cin >> n;

    if(n == 1)
    {
        cout << "Januar" << endl;
    }else if(n == 2)
    {
        cout << "Februar" << endl;
    }else if(n == 3)
    {
        cout << "Marz" << endl;
    }else if(n == 4)
    {
        cout << "April" << endl;
    }else if(n == 5)
    {
        cout << "Mai" << endl;
    }else if(n == 6)
    {
        cout << "Juni" << endl;
    }else if(n == 7)
    {
        cout << "Juli" << endl;
    }else if(n == 8)
    {
        cout << "August" << endl;
    }else if(n == 9)
    {
        cout << "September" << endl;
    }else if(n == 10)
    {
        cout << "Oktober" << endl;
    }else if(n == 11)
    {
        cout << "November" << endl;
    }else if(n == 12)
    {
        cout << "Dezember" << endl;
    }else
    {
        cout << "incorrect input \n";
    }

    /* the problem can also be solved by using switch as follows
    switch(n)
    {
        case 1:{cout<<"January\n";break;}
        case 2:{cout<<"February\n";break;}
        case 3:{cout<<"March\n";break;}
        case 4:{cout<<"April\n";break;}
        case 5:{cout<<"May\n";break;}
        case 6:{cout<<"June\n";break;}
        case 7:{cout<<"July\n";break;}
        case 8:{cout<<"August\n";break;}
        case 9:{cout<<"September\n";break;}
        case 10:{cout<<"October\n";break;}
        case 11:{cout<<"November\n";break;}
        case 12:{cout<<"December\n";break;}
        default:{cout<<"Invalid input!\n";break;}
    }*/
    return 0;
}
