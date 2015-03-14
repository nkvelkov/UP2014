#include <iostream>
using namespace std;

bool isIdentifier (char* str, int i = 0)
{
     if (strlen(str) == 0) return true;
     if (str[0] >= '0' && str[0] <= '9' && i == 0) return false;
     i++;
     return (str[0] >= 'A' && str[0] <= 'Z' || str[0] >= 'a' && str[0] <= 'z' || str[0] >= '0' && str[0] <= '9' || str[0] == '_')
                    && isIdentifier (str + 1, i);
}

int main()
{
    char str[50];
    cin >> str;

    cout << boolalpha << isIdentifier (str) << endl;
    //system ("pause");
    return 0;
}


