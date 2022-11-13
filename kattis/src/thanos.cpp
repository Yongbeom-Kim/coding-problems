#include <stdio.h>
#include <cmath>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long p,r,f;
        scanf("%lld %lld %lld", &p, &r, &f);

        int c = 0;
        while (p <= f) {
            p *= r;
            c ++;
        }

        printf("%d\n", c);
    }
}