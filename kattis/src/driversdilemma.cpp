#include <cstdio>

int main () {
    double C, M;
    double X;
    scanf("%lf %lf %lf\n", &C, &X, &M);

    int sp;
    double fe;
    int max_speed = -1;

    for (int i = 0; i < 6; i ++) {
        scanf("%d %lf", &sp, &fe);
        if ((M*X/sp + M/fe)*2 <= C) {
            max_speed = sp;
        }
    }

    if (max_speed == -1) {
        printf("NO");
    } else {
        printf("YES %d", max_speed);
    }

    
}