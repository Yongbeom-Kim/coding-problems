#include <cstdio>
#include <algorithm>

int main() {
    int N;
    scanf("%d", &N);

    while (N--) {
        int ng, nm;

        scanf("%d %d", &ng, &nm);

        if (ng == nm && ng == 0) {
            printf("uncertain\n");
        }

        int xg=0, xm=0, maxg=0, maxm=0;

        while (ng--) {
            scanf("%d", &xg);
            maxg = std::max(xg, maxg);
        }

        while (nm--) {
            scanf("%d", &xm);
            maxm = std::max(xm, maxm);
        }

        if (maxm <= maxg) {
            printf("Godzilla\n");
        } else {
            printf("MechaGodzilla\n");
        }
    }
}