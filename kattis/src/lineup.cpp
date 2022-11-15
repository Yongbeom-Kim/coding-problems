#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    n -= 2;

    char a[13], b[13];
    bool dsc;

    scanf("%s\n%s", a, b);
    
    dsc = strcmp(a, b) > 0;

    strcpy(a, b);

    while (n--) {
        scanf("%s", b);
        if (dsc != (strcmp(a, b)>0)) {
            printf("NEITHER");
            return 0;
        }
        strcpy(a, b);
    }

    printf("%s", dsc ? "DECREASING" : "INCREASING");

}