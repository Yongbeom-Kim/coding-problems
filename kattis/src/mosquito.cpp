#include <cstdio>

int main() {
    long long M,P,L,E,R,S,N;

    while (scanf("%lld %lld %lld %lld %lld %lld %lld", &M,&P,&L,&E,&R,&S,&N) != EOF) {

        while (N--) {
            long long oldL = L;
            long long oldP = P;
            L = M*E;
            P = oldL/R;
            M = oldP/S;

        }

        printf("%lld\n", M);
    }
}