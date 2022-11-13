#include <stdio.h>

int main() {
    int X, Y, N;

    scanf("%d %d %d", &X, &Y, &N);
    bool divisible = false;
    for (int i = 1; i <= N; i ++ ) {
        divisible = false;
        if (i % X == 0) {
            printf("Fizz");
            divisible = true;
        }
        if (i % Y == 0) {
            printf("Buzz");
            divisible = true;
        }

        if (!divisible) {
            printf("%d", i);
        }
        printf("\n");
    }
}