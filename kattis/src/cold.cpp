#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int count = 0;
    while (n--) {
        int x;
        scanf("%d", &x);

        if (x < 0) {
            count ++;
        }
    }

    printf("%d", count);
}