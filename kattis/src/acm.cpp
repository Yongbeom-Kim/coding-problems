#include <stdio.h>
#include <string.h>
int main() {

    int min;
    char prob;
    char corr[6];

    bool right[27]; 
    int wrongs[27];

    for (int i = 0; i < 27; i ++) {
        right[i] = false;
        wrongs[i] = 0;
    }

    int solved = 0;
    int time = 0;
    while (scanf("%d", &min) != EOF) {
        if (min == -1) {
            break;
        }
        scanf(" %c %s", &prob, corr);

        if (strcmp(corr, "right") == 0) {
            right[prob - 'A'] = true;
            solved ++;
            time += min;
        } else {
            wrongs[prob - 'A'] ++;
        }
    }

    printf("%d ", solved);
    for (int i = 0; i < 27; i ++) {
        if (right[i]) {
            time += wrongs[i]*20;
        }
    }

    printf("%d", time);
}