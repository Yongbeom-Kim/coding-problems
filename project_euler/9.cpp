#include <bits/stdc++.h>
using namespace std;
typedef tuple<int, int> ii;
typedef tuple<int, int, int> iii;
typedef long long lld;
typedef long ld;
typedef long double llf;
typedef double lf;

int main()
{
    for (lld a = 1; a < 1000; a++)
    {
        for (lld b = a + 1; b <= 1000 - a; b++)
        {
            lld c = 1000 - a - b;
            if (a * a + b * b == c * c)
            {
                cout << a * b * c;
            }
        }
    }
}