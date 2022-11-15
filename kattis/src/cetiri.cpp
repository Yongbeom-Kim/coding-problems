#include <stdio.h>
#include <algorithm>

int main() {
    int a[3];

    scanf("%d %d %d", &a[0], &a[1], &a[2]);

    std::sort(a, a+3);

    int d1 = a[1]-a[0];
    int d2 = a[2]-a[1];

    if (d1 == d2) {
        printf("%d", a[2]+d1);
    } else if (d1 == d2*2) {
        printf("%d", a[0]+d2);
    } else if (d2 == d1*2) {
        printf("%d", a[1]+d1);
    }

}