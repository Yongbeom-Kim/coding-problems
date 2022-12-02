#include <cstdio>

int main() {
    int current, N, T;
    char c;
    int time = 0;

    scanf("%d\n%d\n", &current, &N);
    current --;
    while (N--) {
        scanf("%d %c\n", &T, &c);
        time += T;
        if (time >= 210)
            break;
        if (c == 'T'){
            current ++;
            current %= 8;
        }
    }
    printf("%d", current+1);
}