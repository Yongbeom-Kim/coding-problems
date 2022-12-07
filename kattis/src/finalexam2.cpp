#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

char a[1005];
int main() {
    int N;
    scanf("%d\n", &N);

    for (int i = 0; i < N; i ++) {
        scanf("%c", a+i);
        if (i < N-1)
            scanf("\n");
    }
    int ans=0;
    for (int i=0; i < N-1; i ++) {
        if (a[i] == a[i+1])
            ans ++;

    }
    printf("%d", ans);
}