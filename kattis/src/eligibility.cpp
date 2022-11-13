#include <stdio.h>

int main() {
    int N;

    scanf("%d", &N);

    char name[30];
    int y1, m1, d1, y2, m2, d2, crs;

    while(N--) {
        scanf("%s %d/%d/%d %d/%d/%d %d", name, &y1, &m1, &d1, &y2, &m2, &d2, &crs);

        printf("%s ", name);

        if (y1 >= 2010 || y2 >= 1991) {
            printf("eligible\n");
        } else if (crs >= 41) {
            printf("ineligible\n");
        } else {
            printf("coach petition\n");
        }
    }
}