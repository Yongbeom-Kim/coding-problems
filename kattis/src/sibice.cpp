#include <cmath>
#include <stdio.h>

int main() {
    int N, W, H, D;
    int l;
    scanf("%d %d %d", &N, &W, &H);

    D = sqrt(W * W + H * H);

    while (N--) {
        scanf("%d", &l);

        if (l <= D) {
            printf("DA\n");
        } else {
            printf("NE\n");
        }
    }

}