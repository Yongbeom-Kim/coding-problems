#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int x;
    while(n--) {
        scanf("%d", &x);

        printf("%d is %s\n", x, (x % 2 == 0 ? "even" : "odd"));
    }
}