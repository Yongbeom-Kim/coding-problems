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
    lld n = 1;
    for (int i = 1; i <= 20; i++)
    {
        n *= i;
    }

    for (int i = 2; i <= 20; i++)
    {
        bool is_ok = true;
        for (int j = 2; j <= 20; j++)
        {
            if (n % (i * j) != 0)
            {
                is_ok = false;
                break;
            }
        }

        if (is_ok)
        {
            n /= i;
            --i;
        }
    }

    printf("%lld", n);
}