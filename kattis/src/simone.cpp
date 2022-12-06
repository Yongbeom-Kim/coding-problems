#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int a[1001];
int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    for (int i = 0; i < N; i ++) {
        int x;
        scanf("%d", &x);

        a[x]++;
    }

    int min_freq = INT_MAX;
    int count = 0;
    for (int i = 1; i < K+1; i ++) {
        if (a[i] < min_freq) {
            min_freq = a[i];
            count = 1;
        } else if (a[i] == min_freq) {
            count ++;
        }
    }

    printf("%d\n", count);

    for (int i = 1; i < K+1; i ++) {
        if (a[i] == min_freq) {
            printf("%d ", i);
        }
    }

    cout << K << "\n";
    for (int i = 1; i < K+1; i ++) {
        cout << a[i] << " ";
    }



}