#include <stdio.h>
#include <string.h>
#include <iostream>

int main() {
    char c;

    bool next = true;


    while (scanf("%c", &c) != EOF) {
        if (c == '-') {
            next = true;
            continue;
        }

        if (next) {
            printf("%c", c);
        }

        next = false;

    }
}