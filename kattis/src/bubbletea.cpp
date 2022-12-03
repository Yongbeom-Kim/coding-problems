#include <cstdio>
#include <algorithm>
#include <climits>

int N, M;
int teas[1000], toppings[1000];
// long allowed_toppings[1000000];
long long money;
long long min_price = LLONG_MAX;
int main() {

    scanf("%d\n", &N);

    for (int i = 0; i < N; i ++) {
        scanf("%d", teas+i);
    }

    scanf("%d\n", &M);

    for (int i = 0; i < M; i ++) {
        scanf("%d", toppings+i);
    }

    int combi_count = 0;
    for (int i = 0; i < N; i ++) {
        int n;
        scanf("%d", &n);
        while (n--) {
            int combi;
            scanf("%d", &combi);
            // allowed_toppings[combi_count] = teas[i]+toppings[combi-1];
            min_price = std::min(min_price, (long long) (teas[i]+toppings[combi-1]));
            // ++combi_count;
        }
    }

    // long long min_price = *std::min_element(allowed_toppings, allowed_toppings+combi_count);

    scanf("%lld", &money);
    // printf("money: %lld, price: %lld\n", money, min_price);
    printf("%lld", money/min_price-1);
}