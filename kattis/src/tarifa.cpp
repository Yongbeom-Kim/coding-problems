#include <stdio.h>

int main() {

    int x;
    scanf("%d", &x);

    int n;
    scanf("%d", &n);

    int sum = x * (n + 1);
    while (n--) {
        int a;
        scanf("%d", &a);
        sum -= a;
    }

    printf("%d", sum);
}