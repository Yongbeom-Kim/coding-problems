#include <cstdio>

int main() {
    int h, w, nbricks;

    scanf("%d %d %d", &h, &w, &nbricks);

    int wcopy = w;

    while (nbricks--) {
        int bl;
        scanf("%d", &bl);

        if (wcopy < bl) {
            printf("NO");
            return 0;
        }

        wcopy -= bl;

        if (wcopy == 0) {
            if (h == 1) {
                printf("YES");
                return 0;
            } else {
                wcopy = w;
                h--;
            }
        }

    }
}