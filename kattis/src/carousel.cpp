#include <cstdio>

int main() {
    while (1){
        int n, m;
        scanf("%d %d", &n, &m);
        if (n == 0 && m == 0) {
            return 0;
        }
        int fa = -1, fb = -1;
        double maxval = -1;
        while (n--) {
            int a, b;
            scanf("%d %d", &a, &b);

            if (a > m) {
                continue;
            }

            double value = a/(double)b;
            if (value > maxval || (value == maxval && a > fa)) {
                fa = a; fb = b; maxval = value;
            }
        }
        if (fa != -1){
            printf("Buy %d tickets for $%d\n", fa, fb);
        } else {
            printf("No suitable tickets offered\n");
        }
    }
}