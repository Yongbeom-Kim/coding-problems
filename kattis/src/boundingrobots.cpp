#include <cstdio>
#include <algorithm>
int main() {

    int w, l;

    while(true){
        scanf("%d %d\n", &w, &l);
        if (w == 0 && l == 0) {
            return 0;
        }

        int rx = 0, ry = 0;
        int ax = 0, ay = 0;

        int n;

        scanf("%d\n", &n);
        
        while (n--) {
            int length;
            char dir;
            scanf("%c %d\n", &dir, &length);

            if (dir == 'u') {
                ry += length;
                ay = std::min(l-1, ay + length);
            } else if (dir == 'd') {
                ry -= length;
                ay = std::max(0, ay - length);
            } else if (dir == 'l') {
                rx -= length;
                ax = std::max(0, ax - length);
            } else if (dir == 'r') {
                rx += length;
                ax = std::min(w-1, ax + length);
            } 
        }

        printf("Robot thinks %d %d\nActually at %d %d\n\n", rx, ry, ax, ay);
    }
}