#include <cstdio>

// from https://adventofcode.com/2022/day/2
int main() {
    FILE* fin = fopen("./input.in", "r");

    int score = 0;

    char a, x;
    int ai, xi;

    while(fscanf(fin, "%c %c\n", &a, &x) != EOF) {
        ai = a - 'A';
        xi = x - 'X';

        // A B C Rock Paper Scissors
        // X Y Z Rock Paper Scissors

        score += xi + 1;

        if (ai == xi) {
            score += 3;
        } else if (ai == xi - 1 || ai == xi + 2) {
            score += 6;
        }

        
    } 

    printf("%d", score);
}