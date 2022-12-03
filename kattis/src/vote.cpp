#include <cstdio>

int main() {
    int T, N;
    scanf("%d\n", &T);
    while (T--) {
        scanf("%d\n", &N);
        long votes, max = 0, sum = 0;
        int winner = -1;
        for (int i = 0; i < N; i ++) {
            scanf("%ld", &votes);

            if (votes == max) {
                winner = -1;
            } else if (votes > max) {
                winner = i;
                max = votes;
            }
            sum += votes;
        }

        if (winner == -1) {
            printf("no winner\n");
        } else if (max <= sum/2) {
            printf("minority winner %d\n", winner+1);
        } else {
            printf("majority winner %d\n", winner+1);
        }
    }
    
}