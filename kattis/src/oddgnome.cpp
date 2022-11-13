#include <stdio.h>

int main() {
    int G;

    scanf("%d", &G);

    while(G--) {
        int n;
        scanf("%d", &n);

        int prevcurr, nextcurr, king = 0;
        scanf("%d", &prevcurr);

        for (int i = 1; i < n; i ++) {
            scanf("%d", &nextcurr);
            if (nextcurr != prevcurr + 1) {
                king = i;
            }
            prevcurr = nextcurr;
        }
        printf("%d\n", king);
    }
}