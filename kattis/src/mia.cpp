#include <stdio.h>

int main() {
    int a, b, c, d;

    while(1) {
        scanf("%d %d %d %d", &a, &b, &c, &d);

        if (a+b+c+d == 0) {
            return 0;
        }

        if (((a == 1 && b == 2) || (b == 1 && a == 2)) && ((c == 1 && d == 2) || (d == 1 && c == 2)) ) {
            printf("Tie.\n");
        } else if ((a == 1 && b == 2) || (b == 1 && a == 2)) {
            printf("Player 1 wins.\n");
        } else if ((c == 1 && d == 2) || (d == 1 && c == 2)) {
            printf("Player 2 wins.\n");
        } else if (a == b && c == d) {
            if (a > c) {
                printf("Player 1 wins.\n");
            } else if (c > a) {
                printf("Player 2 wins.\n");
            } else {
                printf("Tie.\n");
            }
        } else if (a == b) {
            printf("Player 1 wins.\n");
        } else if (c == d) {
            printf("Player 2 wins.\n");
        } else {
            int p1 = a > b ? 10*a + b : 10*b + a;
            int p2 = c > d ? 10*c + d : 10*d + c;

            if (p1 > p2) {
                printf("Player 1 wins.\n");
            } else if (p2 > p1) {
                printf("Player 2 wins.\n");
            } else {
                printf("Tie.\n");
            }
        }
    }
}