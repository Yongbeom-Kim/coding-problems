#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n[100005];

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i ++) {
        scanf("%d", n+i);
    }

    for (int i = 0; i < N; i ++){
        printf("%d\n", n[N-i-1]);
    }
}