#include <stdio.h>
#include <cmath>

int main() {

    int i;

    scanf("%d", &i);
    
    int p = pow(2, i);

    printf("%d", (p+1)*(p+1));
}