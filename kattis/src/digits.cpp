#include <stdio.h>

int main() {
    char c;
    long unsigned int x = 0, y = 0;
    bool is_one;


    while (scanf("%1c", &c) != EOF) {
        if (c == 'E') {
            return 0;
        }

        if (c == '\n') {
            
            if (is_one && x == 1) {
                printf("1\n");
                x = 0; y = 0; is_one = false;
                continue;
            }

            int i = 1;
            while (x != 1){

                while (x > 0) {
                    y ++;
                    x /= 10;
                }
                
                x = y;
                y = 0;
                i ++;
            }

            printf("%d\n", i+1);
            
            x = 0; y = 0; is_one = false;
            continue;

        }

        x ++;
        is_one = c == '1';
        // printf("c: %c %lu %s\n", c, x, is_one ? "t" : "f");
    }
}