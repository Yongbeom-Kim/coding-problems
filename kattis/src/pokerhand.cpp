#include <cstdio>
#include <algorithm>

int main() {
    char rank;
    int no[14];

    std::fill(no, no+14, 0);

    for (int i = 0; i < 5; i ++) {
        if (i < 4) {
            scanf("%c%*c ", &rank);
        } else {
            scanf("%c%*c", &rank);
        }
        // printf("%c\n", rank);
        if (rank == 'A') {
            no[0]++;
        } else if (rank == 'T') {
            no[10]++;
        } else if (rank == 'J') {
            no[11]++;
        } else if (rank == 'Q') {
            no[12]++;
        } else if (rank == 'K') {
            no[13]++;
        } else {
            no[rank-'0']++;
        }
    }

    int max = 0;
    for (int i = 0; i < 14; i ++) {
        // printf("%d: %d\n", i, no[i]);
        max = std::max(max, no[i]);
    }

    printf("%d", max);

}