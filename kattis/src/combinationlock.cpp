#include <stdio.h>

int main() {
    int o, a,b,c;

    while (scanf("%d %d %d %d", &o, &a, &b, &c) != EOF) {
        if (a == 0 && b == 0 && c == 0 && o == 0) {
            return 0;
        }
        int deg = 1080;

        deg += (((o - a)+40)%40)*360/40;
        deg += (((b - a)+40)%40)*360/40;
        deg += (((b - c)+40)%40)*360/40;

        printf("%d\n", deg);
    }

}