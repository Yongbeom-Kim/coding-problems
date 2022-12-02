#include <cstdio>
#include <algorithm>

int main() {
    int N;
    scanf("%d\n", &N);

    int scores[3];
    std::fill(scores, scores+3, 0);

    char aa[3] = {'A','B','C'};
    char ba[4] = {'B','A','B','C'};
    char ga[6] = {'C','C','A','A','B','B'};

    for (int i = 0; i < N; i ++) {
        char c;
        scanf("%c", &c);
        scores[0] += c == aa[i%3];
        scores[1] += c == ba[i%4];
        scores[2] += c == ga[i%6];
        
    }

    int max = *std::max_element(scores, scores+3);

    printf("%d\n", max);

    if (scores[0] == max)
        printf("Adrian\n");
    if (scores[1] == max)
        printf("Bruno\n");
    if (scores[2] == max)
        printf("Goran\n");

}