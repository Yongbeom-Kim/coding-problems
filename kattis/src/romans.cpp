#include <stdio.h>
#include <cmath>

int main() {
    float m;
    scanf("%f", &m);

    int x = round(m * 1000 * 5280 / 4854);
    printf("%d", x);
}