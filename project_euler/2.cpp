#include <cstdio>
#include <algorithm>
typedef long long int ll;
int main()
{
    ll sum = 0, a = 1, b = 1;

    while (true)
    {
        a += b;
        std::swap(a, b);
        if (a > 4000000)
        {
            break;
        }
        if (a % 2 == 0)
        {
            sum += a;
        }
    }

    printf("%lld", sum);
}
