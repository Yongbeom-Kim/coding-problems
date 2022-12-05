#include <cstdio>

int main() {
    int c, r, h;
    scanf("%d %d %d", &c, &r, &h);

    int left = h;
    int climbs = 0;
    while (left > 0) {
        left -= c;
        climbs ++;
        if (left <= 0) {
            break;
        }
        left += r;
    }

    printf("%d", climb);
}