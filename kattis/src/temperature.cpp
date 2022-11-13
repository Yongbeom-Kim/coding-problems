#include <stdio.h>

int main() {

    int X, Y;

    scanf("%d %d", &X, &Y);

    // X is the point on B where A = 0
    // Y is dB when dA = 1
    // B = X <=> A = 0
    // X - qY = -q
    // X = (Y-1)q
    // X/(Y-1) = q

    // ans is -X/(Y-1)
    // if X = 0 and Y = 1 then ALL GOOD
    // if X != 0 and Y = 1 then IMPOSSIBLE

    if (X == 0 && Y == 1) {
        printf("ALL GOOD");
    } else if (Y == 1) {
        printf("IMPOSSIBLE");
    } else {
        printf("%f", -((X + 0.00)/(Y-1)));
    }
}