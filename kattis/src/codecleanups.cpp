#include <cstdio>

int main(){
    int n;
    scanf("%d", &n);

    int no_cleans = 0;
    int dirtiness = 0;
    int last_day = 0;
    int no_pushes = 0;
    while (n--){
        int day;
        scanf("%d", &day);
        dirtiness += (day - last_day) * no_pushes;
        no_pushes ++;
        last_day = day;

        if (dirtiness >= 20) {
            no_cleans ++;
            no_pushes = 1;
            dirtiness = 0;
        }
    }

    printf("%d", no_cleans+(no_pushes > 0));
}