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
    lld sqsum = 0, sumsq = 0;

    for (int i = 1; i <= 100; i++)
    {
        sqsum += i * i;
        sumsq += i;
    }
    sumsq *= sumsq;

    printf("%lld", (sumsq - sqsum));
}