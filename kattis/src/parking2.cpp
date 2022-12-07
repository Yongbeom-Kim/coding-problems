#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    scanf("%d", &N);

    while(N--){
        int T;
        scanf("%d", &T);
        int minp=INT_MAX, maxp=0;
        while(T--) {
            int x;
            scanf("%d", &x);
            minp = min(minp, x);
            maxp = max(maxp, x);
        }
        printf("%d\n", (maxp-minp)*2);
    }
}