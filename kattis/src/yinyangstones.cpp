#include <cstdio>

int main() {
    char c;
    int w = 0, b = 0;

    while (scanf("%c", &c) != EOF) {
        w += c == 'W';
        b += c == 'B';
    }

    printf("%d", (w == b));
}