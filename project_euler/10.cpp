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
    bool prime[2000000];
    fill(prime, prime + 2000000, true);
    prime[0] = false;
    prime[1] = false;

    for (lld i = 0; i < 2000000; i++)
    {
        if (!prime[i])
        {
            continue;
        }

        lld j = 2 * i;
        while (j < 2000000)
        {
            prime[j] = false;
            j += i;
        }
    }

    lld sum = 0;
    for (lld i = 0; i < 2000000; i++)
    {
        if (prime[i])
        {
            sum += i;
        }
    }
    cout << sum;
}