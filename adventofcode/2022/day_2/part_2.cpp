#include <cstdio>

// from https://adventofcode.com/2022/day/2#part2
int main() {
    FILE* fin = fopen("./input.in", "r");

    int score = 0;

    char a, x;
    int ai, xi;

    while(fscanf(fin, "%c %c\n", &a, &x) != EOF) {
        ai = a - 'A';
        xi = x - 'X';

        // A B C Rock Paper Scissors
        // X Y Z lose draw win
        if (xi == 0) {
            xi = (ai+2)%3;
        } else if (xi == 1) {
            xi = ai;
        } else {
            xi = (ai+1)%3;
        }

        score += xi + 1;

        if (ai == xi) {
            score += 3;
        } else if (ai == xi - 1 || ai == xi + 2) {
            score += 6;
        }

        
    } 

    printf("%d", score);
}