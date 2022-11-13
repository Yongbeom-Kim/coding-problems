#include <stdio.h>

int main() {
    int n, dm;

    scanf("%d %d", &n, &dm);

    int num_early = 0;
    bool exists = false;

    for (int i = 0; i < n; i ++) {
        int x;
        scanf("%d", &x);

        if (x > dm) {
            num_early ++;
        }
        if (x <= dm) {
            exists = true;
            break;
        }
    }

    // printf("%d %d\n", num_early);
    if (!exists) {
        printf("It had never snowed this early!");
    } else {
        printf("It hadn't snowed this early in %d years!", num_early);
    }
}