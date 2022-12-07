#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll comp[100000];

int main() {
    long N, Q;
    scanf("%ld %ld", &N, &Q);

    for (int i = 0; i < N; i ++) {
        scanf("%lld", comp+i);
    }

    for (int i = 0; i < Q; i ++) {
        int x, a, b;
        scanf("%d %d %d", &x, &a, &b);
        if(x == 1) {
            comp[a-1] = b;
        } else {
            printf("%d\n", abs(comp[a-1]-comp[b-1]));
        }
    }
}