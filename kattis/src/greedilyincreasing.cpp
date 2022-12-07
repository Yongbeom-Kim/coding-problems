#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll> s;
int main() {
    ll n;
    scanf("%lld", &n);
    ll prev = -1;
    
    while (n--) {
        ll x;
        scanf("%lld", &x);
        if (x > prev) {
            s.push_back(x);
            prev = x;
        }

    }
    
    printf("%lld\n", s.size());
    for (int i = 0; i < s.size(); i ++) {
        printf("%lld ", s[i]);
    }
}