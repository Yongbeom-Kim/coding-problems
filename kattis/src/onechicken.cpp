#include <stdio.h>
#include <string>

int main() {
    int N, M;

    scanf("%d %d", &N, &M);

    if (M > N) {
        printf("Dr. Chaz will have %d %s of chicken left over!", M-N, ((M-N == 1) ? "piece" : "pieces"));
    } else {
        printf("Dr. Chaz needs %d more %s of chicken!", N-M, ((N-M == 1) ? "piece" : "pieces"));

    }
}