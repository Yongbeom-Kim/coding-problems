#include <bits/stdc++.h>
#include <numeric> // for some reason i can't use iota unless i do this
using namespace std;
typedef long long ll;

bool card[4][13];
char c;
int i;
int main()
{
    while (scanf("%c%2d", &c, &i) != EOF)
    {

        if (c == 'P')
        {
            if (card[0][i - 1])
            {
                printf("GRESKA");
                return 0;
            }
            card[0][i - 1] = true;
        }
        if (c == 'K')
        {
            if (card[1][i - 1])
            {
                printf("GRESKA");
                return 0;
            }
            card[1][i - 1] = true;
        }
        if (c == 'H')
        {
            if (card[2][i - 1])
            {
                printf("GRESKA");
                return 0;
            }
            card[2][i - 1] = true;
        }
        if (c == 'T')
        {
            if (card[3][i - 1])
            {
                printf("GRESKA");
                return 0;
            }
            card[3][i - 1] = true;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        cout << 13 - accumulate(card[i], card[i] + 13, (int)0) << " ";
    }
}