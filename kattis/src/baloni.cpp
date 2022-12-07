#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll h[1000010];
int main() {
    ll N;
    scanf("%lld", &N);
    for (int i = 0; i < N; i ++) {
        ll x;
        scanf("%lld", &x);
        if (h[x] > 0) {
            h[x] --;
        }
        h[x-1]++;
    }

    cout << accumulate(h, h+100010,0);


}