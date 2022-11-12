#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    
    float sum;
    while (n--) {
        float a, b;

        scanf("%f %f", &a, &b);
        sum += a * b;
    }

    printf("%f", sum);
}