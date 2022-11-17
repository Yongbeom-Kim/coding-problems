#include <cstdio>
#include <algorithm>

int main() {
    int a1, b1, a2;

    int n;
    scanf("%d", &n);

    scanf("%d %d %d", &a1, &b1, &a2);

    n -= 2;

    int max_temp = std::max(a1, a2);
    int day_to_start = 1;

    a1 = b1;
    b1 = a2;
    for (int i = 2; i < n+1; i ++) {
        scanf("%d", &a2);
        if ((std::max(a1, a2)) < max_temp) {
            max_temp = std::max(a1, a2);
            day_to_start = i;
        }

        a1 = b1;
        b1 = a2;
    }  
    
    printf("%d %d", day_to_start, max_temp);
}