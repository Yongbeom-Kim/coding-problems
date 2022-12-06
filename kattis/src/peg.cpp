#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string b[8];
int main()
{
    for (int i = 0; i < 7; i++)
    {
        // scanf("%s", b[i]);
        // cin >> b[i];
        // cout << i << ": " << b[i];
        getline(cin, b[i]);
    }

    int moves = 0;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (b[i][j] == 'o')
            {
                moves += (i - 2 >= 0 && b[i - 1][j] == 'o' && b[i - 2][j] == '.');
                moves += (i + 2 <= 6 && b[i + 1][j] == 'o' && b[i + 2][j] == '.');
                moves += (j - 2 >= 0 && b[i][j - 1] == 'o' && b[i][j - 2] == '.');
                moves += (j + 2 <= 6 && b[i][j + 1] == 'o' && b[i][j + 2] == '.');
            }
        }
    }

    printf("%d", moves);
}