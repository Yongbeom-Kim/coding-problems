#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int f[1001];
int main() {
    int N, E;

    scanf("%d %d", &N, &E);

    for (int i = 0; i <  E; i ++) {
        int u,v;
        scanf("%d %d", &u, &v);

        f[u]++;f[v]++;
    }
    for (int i = 1; i < N+1; i ++) {
        printf("%d ", f[i]-i);
    }
}