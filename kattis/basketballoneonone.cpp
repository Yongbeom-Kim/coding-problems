#include <stdio.h>
#include <string.h>

int main() {
    char c;
    int p;
    int A = 0, B = 0;

    while (scanf("%c%d", &c, &p) != EOF) {
        if (c == 'A') {
            A += p;
        } else {
            B += p;
        }

        // printf("A: %d B: %d\n", A, B);
        if (A >= 11 && B < 10) {
            printf("A");
            return 0;
        } else if (B >= 11 && A < 10) {
            printf("B");
            return 0;
        } else if (A > B + 1 && A >= 10 && B >= 10) {
            printf("A");
            return 0;
        } else if (B > A + 1 && A >= 10 && B >= 10) {
            printf("B");
            return 0;
        }
    }

}