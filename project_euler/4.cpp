#include <bits/stdc++.h>
using namespace std;
typedef tuple<int, int> ii;
typedef tuple<int, int, int> iii;
typedef long long lld;
typedef long ld;
typedef long double llf;
typedef double lf;

bool is_palindrome(ld number)
{
    using namespace std;

    string num_s = std::to_string(number);
    string rev_num_s = string(num_s.rbegin(), num_s.rend());

    return num_s == rev_num_s;
}
int main()
{
    ld product = 0;
    for (ld i = 1; i < 1000; i++)
    {
        for (ld j = 1; j < 1000; j++)
        {
            if (is_palindrome(i * j))
            {
                product = std::max(product, i * j);
            }
        }
    }

    printf("%ld", product);
}