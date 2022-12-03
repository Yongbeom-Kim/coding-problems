#include <cstdio>
#include <cstring>
#include <algorithm>
int main() {
    using namespace std;

    char s[6];
    long stocks = 0;
    long double cost = 0;
    int x, y;
    while (scanf("%s", s) != EOF) {
        if (!strcmp(s, "buy")){
            scanf("%d %d", &x, &y);
            stocks += x;
            cost += y*x;
        } else if (!strcmp(s, "sell")){
            scanf("%d %d", &x, &y);
            if (stocks != 0){
                cost -= cost*x/stocks;
                stocks -= x;
            }
        } else if (!strcmp(s, "split")){
            scanf("%d", &x);
            stocks *= x;
        }else if (!strcmp(s, "merge")){
            scanf("%d", &x);
            if (stocks != 0){
                long rem =  stocks % x;
                cost = cost*(stocks-rem)/stocks;
                stocks /= x;
            }
        }else if (!strcmp(s, "die")){
            scanf("%d", &x);
            printf("%Lf", stocks*x - max((long double) 0.0, 0.3*(stocks*x-cost)));
            return 0;
        }
        
        cost = stocks == 0 ? 0 : cost;
    }
}