#include <cstdio>
#include <algorithm>

int main() {
    int N;
    scanf("%d", &N);

    while (N--) {
        long unsigned int ng, nm;

        scanf("%lu %lu", &ng, &nm);

        if (ng == nm && ng == 0) {
            printf("uncertain\n");
        }

        long long unsigned int xg=0, xm=0, maxg=0, maxm=0;

        while (ng--) {
            scanf("%llu", &xg);
            maxg = std::max(xg, maxg);
        }

        while (nm--) {
            scanf("%llu", &xm);
            maxm = std::max(xm, maxm);
        }

        if (maxm <= maxg) {
            printf("Godzilla\n");
        } else {
            printf("MechaGodzilla\n");
        }
    }
}