#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int prev, next;
    prev = 0;
    while (n--) {

        if (scanf("%d", &next) == 1) {
            if (next != prev + 1) {
                printf("something is fishy");
                return 0;
            }
        } else {
            scanf("%*s");
        }

        prev ++;
    }
    printf("makes sense");
}