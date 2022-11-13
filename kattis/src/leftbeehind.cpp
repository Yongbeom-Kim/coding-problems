#include <stdio.h>

int main() {
    int sw, so;

    while (scanf("%d %d", &sw, &so) != EOF) {
        if (sw == so && so == 0) {
            break;
        } else if (sw + so == 13) {
            printf("Never speak again.\n");
        } else if (so > sw) {
            printf("Left beehind.\n");
        } else if (so == sw) {
            printf("Undecided.\n");
        } else {
            printf("To the convention.\n");
        }

    }
}