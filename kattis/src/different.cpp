#include <stdio.h>

int main() {

    long long x, y;

    while (scanf("%lld %lld\n", &x, &y) != EOF){
        printf("%lld\n", (x > y ? x - y : y - x));
    }
}