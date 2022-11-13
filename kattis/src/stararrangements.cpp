#include <stdio.h>

int main() {
    int s;
    scanf("%d", &s);
    printf("%d:\n", s);

    int x = 2, y = 1;
    
    // if begins and ends with x, total = k(x+y) + x
    // if begins and ends with y, total = k(x+y)
    while (2*y <= s) {

        if ((s-x)%(x+y) == 0 || s%(x+y) == 0) {
            printf("%d,%d\n",x,y);
        }

        if (x == y) {
            x ++;
        } else {
            y ++;
        }
    }
}