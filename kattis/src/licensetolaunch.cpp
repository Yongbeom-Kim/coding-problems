#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    int min;
    int mini = 0;
    scanf("%d", &min);
    
    int x;
    for (int i = 1; i < n; i ++) {
        scanf("%d", &x);
        if (x < min) {
            mini = i;
            min = x;
        }
    }
    printf("%d", mini);
}