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
    lld n = 600851475143;
    lld current_factor = 0;

    for (lld i = 2; i <= n; ++i)
    {
        if (n % i == 0)
        {
            n /= i;
            current_factor = i;
            --i;
        }
    }

    printf("%lld", current_factor);
}