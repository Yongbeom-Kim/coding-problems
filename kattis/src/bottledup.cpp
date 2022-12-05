#include <cstdio>

int main() {
    long s, v1, v2;

    scanf("%ld %ld %ld", &s, &v1, &v2);

    long n1, n2, remainder;

    remainder = s % v1;
    n1 = s/v1;
    n2 = remainder/v2;
    remainder = remainder % v2;

    while (n1 > 0) {
        if (remainder == 0) {
            printf("%ld %ld", n1, n2);
            return 0;
        }
        n1 --;
        remainder += v1;
        n2 += remainder/v2;
        remainder = remainder % v2;
    }
    
    if (remainder == 0) {
        printf("%ld %ld", n1, n2);
        return 0;
    } else {
        printf("Impossible");
    }

    
}