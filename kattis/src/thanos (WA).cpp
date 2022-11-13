#include <stdio.h>
#include <cmath>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int p,r,f;
        scanf("%d %d %d", &p, &r, &f);

        // find smallest k when pr^k > f
        // r^k > f/p
        // k > log_r (f/p)
        // k > log_2 (f/p) /log_2(r)
        int c;
        if (p > f && r == 1) {
            c = 0;
        } else if (p == f && r > 1) {
            c = 1;
        } else {
            c = log2((f+0.0)/p)/log2(r+0.0) + 1;
        }

        printf("%d\n", c);
    }
}