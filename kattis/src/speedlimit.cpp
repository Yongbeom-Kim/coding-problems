#include <stdio.h>

int main() {
    int n;
    while (scanf("%d", &n)) {
        if (n == -1) {
            return 0;
        }

        int sofar = 0;
        int miles = 0;
        while (n--) {
            int s, t;
            scanf("%d %d", &s, &t);
            miles += s * (t-sofar);
            sofar = t;
        }

        printf("%d miles\n", miles);
    }
}