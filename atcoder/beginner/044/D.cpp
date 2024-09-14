#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll f(ll b, ll n) {
    ll result = 0;
    while (n > 0) {
        result += n % b;
        n /= b;
    }
    return result;
}

ll soln(ll n, ll s) {
    ll sqrt_n = ll(sqrt(n)) + 1;

    if (s > n) return -1;
    if (s == n) return n+1;

    for (ll b = 2; b <= sqrt_n; b ++) {
        if (f(b, n) == s) {
            return b;
        }
    }

    for (ll c = sqrt_n+1; c >= 1; c --) {
        if ((n - s + c) % c == 0) {
            ll b = (n-s+c)/c;
            if (f(b, n) == s) {
                return (n-s+c)/c;
            }
        }
    }

    return -1;
}

int main() {
    ll n, s;
    cin >> n >> s;

    cout << soln(n, s);
}