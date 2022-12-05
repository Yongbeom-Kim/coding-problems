#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll N;
ll W, w, l;
int main() {
    scanf("%lld\n%lld", &W, &N);

    ll prod = 0;
    while (N--) {
        scanf("%lld %lld", &w, &l);
        prod+=w*l;
    }
    printf("%lld",prod/W);
}