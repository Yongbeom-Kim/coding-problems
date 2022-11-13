#include <stdio.h>

int main() {

    int x, y;

    scanf("%d\n%d", &x, &y);
    
    printf((x > 0 ? (y > 0 ? "1" : "4") : (y > 0 ? "2" : "3")));
}