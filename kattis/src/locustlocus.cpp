#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    scanf("%d", &N);

    int first_yr = INT_MAX;
    while (N--) {
        int y,c1,c2;
        scanf("%d %d %d", &y, &c1, &c2);

        first_yr = min(first_yr, lcm(c1, c2)+y);
    }

    printf("%d", first_yr);
}