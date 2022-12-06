#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll C; int K;

    scanf("%lld %d", &C, &K);
    long double Cd;
    Cd = C;
    for (int i = 0; i < K; i ++) {
        Cd/=10;
    }

    Cd = round(Cd);
    C = Cd;
    for (int i = 0; i < K; i ++) {
        C*=10;
    }

    
    printf("%lld", C);
}