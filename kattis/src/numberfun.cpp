#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);

    int a, b, c;
    while (N--) {
        scanf("%d %d %d", &a, &b, &c);

        if (((a+b)==c) || ((a-b)==c) ||((a*b)==c) || ((c*b)==a) || ((b-a)==c) || ((a*c)==b)) {
            printf("Possible\n");
        } else {
            printf("Impossible\n");
        }
    }
}