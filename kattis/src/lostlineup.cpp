#include <stdio.h>

int main() {

    int n;
    int output[100];

    scanf("%d", &n);

    output[0] = 1;
    int x;
    for (int i = 2; i <= n; i++) {
        scanf("%d", &x);
        output[x+1] = i;
    }

    for (int i = 0; i < n; i ++) {
        printf("%d ", output[i]);
    }
}