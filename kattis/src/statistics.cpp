#include <stdio.h>

int main() {
    int n, caseno;
    caseno = 1;
    
    bool start;
    int x, min, max;

    while (scanf("%d", &n) != EOF) {
        start = true;
        while(n--) {
            scanf("%d", &x);

            if (start) {
                min = x;
                max = x;
                start = false;
            } else {
                min = min < x ? min : x;
                max = max > x ? max : x;
            }
        }
        printf("Case %d: %d %d %d\n", caseno++, min, max, max-min);
    }
    
}