#include <cstdio>
#include <climits>
#include <algorithm>

int main() {
    int no;
    long budget;
    int hotels;
    int weeks;

    scanf("%d %ld %d %d", &no, &budget, &hotels, &weeks);

    long min_price = LONG_MAX;

    for (int i = 0; i < hotels; i ++) {
        long price;
        scanf("%ld", &price);
        int avail;
        for (int i = 0; i < weeks; i ++) {
            scanf("%d", &avail);
            if (avail < no) {
                continue;
            }
            min_price = std::min(min_price, no*price);
        }
    }

    if (min_price <= budget) {
        printf("%ld", min_price);
    } else {
        printf("stay home");
    }
}