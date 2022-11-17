#include <cstdio>

int main() {
    int N;
    char d[22];

    scanf("%d %s", &N, d);

    N ++;
    while (N--) {
        
        if (N > 2) {
            printf("%d bottles of %s on the wall, %d bottles of %s.\n", N, d, N, d);
            printf("Take one down, pass it around, %d bottles of %s on the wall.\n\n", N-1, d);
        } else if (N == 2) {
            printf("%d bottles of %s on the wall, %d bottles of %s.\n", N, d, N, d);
            printf("Take one down, pass it around, %d bottle of %s on the wall.\n\n", N-1, d);
        } else if (N == 1) {
            printf("%d bottle of %s on the wall, %d bottle of %s.\n", N, d, N, d);
            printf("Take it down, pass it around, no more bottles of %s.", d);
        }
    }
}