#include <iostream>
#include <tuple>
using namespace std;

typedef tuple<int, int> ii;
typedef tuple<int, int, int> iii;
typedef long long lld;
typedef long ld;
typedef long double llf;
typedef double lf;

int main()
{
    int n_primes = 0;

    auto is_prime = [](ld n)
    {
        for (int i = 2; i <= n / i; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    };

    for (ld i = 2; n_primes < 10002; i++)
    {
        if (is_prime(i))
        {
            n_primes++;
            if (n_primes == 10001)
            {
                cout << i;
            }
        }
    }
}