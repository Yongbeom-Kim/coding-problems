#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    scanf("%d", &N);

    while(N--) {
        int K;
        scanf("%d", &K);
        int sum = -K;
        while (K--) {
            int x;
            scanf("%d", &x);
            sum += x;
        }
        printf("%d\n", sum+1);
    }
}