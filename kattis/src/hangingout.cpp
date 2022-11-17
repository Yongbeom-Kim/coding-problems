#include <cstdio>
#include <cstring>
int main() {
    int L, n;
    scanf("%d %d", &L, &n);

    int curr = 0;
    int denied = 0;

    char entry[6];
    int x;
    while (n--) {
        scanf("%5s %d", entry, &x);

        if (!strcmp(entry, "enter")) {
            if (curr + x > L) {
                denied ++;
            } else {
                curr += x;
            }
        } else {
            curr -= x;
        }
    }

    printf("%d", denied);
}