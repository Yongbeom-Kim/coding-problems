#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    scanf("%d", &N);
    while (N--) {
        int K;
        scanf("%d", &K);

        int b;
        ll n = 0;
        scanf("%d %lld", &b, &n);

        ll ss = 0;
        while(n != 0) {
            ss += (n%b)*(n%b);
            n/=b;
        }
        printf("%d %lld\n", K, ss);
    }
}