#include <stdio.h>
#include <algorithm>

int main() {
    int n[3];

    scanf("%d %d %d", &n[0], &n[1], &n[2]);
    
    std::sort(n, n+3);

    char c;
    while (scanf("%c", &c) != EOF) {

        if (c == 'A') {
            printf("%d ", n[0]);
        } else if (c == 'B') {
            printf("%d ", n[1]);
        } else if (c == 'C') {
            printf("%d ", n[2]);
        }
    }

}