#include <cstdio>

int main (){
    int n, x;
    scanf("%d\n", &n);

    int current = 0;
    bool skip = 0;
    while (n--) {
        scanf("%d\n", &x);

        for (int i = current+1; i < x; i ++) {
            printf("%d\n", i);
            skip = true;
        }
        current = x;

    }

    if (!skip) {
        printf("good job");
    }
}