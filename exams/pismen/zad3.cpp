#include <iostream>
#include <cstring>
using namespace std;

bool isReadable(char maze[][100], int n, int m, const char* word, char* buffer, int buff_index, int cur_i, int cur_j)
{
    buffer[buff_index] = '\0'; //dobavqme '\0' za da mojem da izpolzvame strcmp
    if(!strcmp(buffer, word))
    {
        return true;
    }
    if(cur_i < 0 || cur_i >= n)
    {
        return false;
    }
    if(cur_j < 0 || cur_j >= m)
    {
        return false;
    }
    if(maze[cur_i][cur_j] == '\0')
    {
        return false;
    }

    buffer[buff_index] = maze[cur_i][cur_j];
    maze[cur_i][cur_j] = '\0'; // obtelqzvame tekushtata poziciq za markirana !

    bool up = isReadable(maze, n, m, word, buffer, buff_index+1, cur_i-1, cur_j);
    bool down = isReadable(maze, n, m, word, buffer, buff_index+1, cur_i+1, cur_j);
    bool left = isReadable(maze, n, m, word, buffer, buff_index+1, cur_i, cur_j-1);
    bool right = isReadable(maze, n, m, word, buffer, buff_index+1, cur_i, cur_j+1);

    maze[cur_i][cur_j] = buffer[buff_index]; // mahame markirovkata na tekushtata poziciq
                                            // pri vryshtane ot rekursiqta.
    return up || down || right || left;
}

bool occurs(char maze[][100], int n, int m, const char* word)
{
    char buffer[10000];

    bool readable = false;
    for(int i = 0; i < n && !readable; ++i)
    {
        for(int j = 0; j < m && !readable; ++j)
        {
            readable = isReadable(maze, n, m, word, buffer, 0, i, j);
        }
    }
    return readable;
}
int main()
{
    char maze[100][100];
    char word[10000];

    int n = 4, m = 5;
    int ctr = 0;

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            maze[i][j] = ctr++ + 'a';
        }
    }

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            cout << maze[i][j] << " ";
        } cout << endl;
    }

    cin >> word;

    bool readable = occurs(maze, n, m, word);
    cout << boolalpha << readable << endl;

   // system ("pause");
    return 0;
}

/*
4 5
a b c d e
f g h i j
k l m n o
p q r s t
*/
