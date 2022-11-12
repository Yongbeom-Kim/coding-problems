#include <stdio.h>

int main() {
    int l, r;
    scanf("%d %d", &l, &r);

    if (l == r && r == 0) {
        printf("Not a moose");
    } else if (l == r) {
        printf("Even %d", (l+r));
    } else {
        printf("Odd %d", (l > r ? 2 * l : 2 * r));
    }
}