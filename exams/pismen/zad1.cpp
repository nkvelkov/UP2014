#include <iostream>
#include
using namespace std;

void writeDown(int count, char symbol, char* result, int& res_index)
{
    char numbers_str[100];

    if(count != 1)
    {
        int index = 0;
        while(count != 0)
        {
            numbers_str[index] = count % 10 + '0';
            ++index;
            count /= 10;
        }
        for(int i = index-1; i >= 0; --i)
        {
            result[res_index] = numbers_str[i];
            ++res_index;
        }
    }
    result[res_index++] = symbol;
}

void encode(const char* str, char* result)
{
    int j = 0, res_index = 0;
    for(int i = 0; str[i] != '\0'; )
    {
        j = 1;
        while(str[i] == str[i+1]) // str[n] = '\0'
        {
            ++j;
            ++i;
        }
        writeDown(j, str[i], result, res_index);
        ++i;
    }
    result[res_index] = '\0';
}

int main ()
{
    char str[50], result[50];
    cin >> str;
    cout << encode (str, result) << endl;
    //system ("pause");
    return 0;
}

