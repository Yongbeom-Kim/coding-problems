#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int c;
        char dummy;
        int prev = -1;
        int result = 0;

        while(1){
            scanf("%d%c", &c, &dummy);

            if (prev == -1) {
                prev = c;
                continue;
            }

            result += (2*prev >= c) ? 0 : c-2*prev;

            prev = c;
            if (dummy =='\n') {
                break;
            }
        }
        printf("%d\n", result);
    }
}