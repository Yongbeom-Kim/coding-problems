#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K, X, Y;

    scanf("%d", &N);
    scanf("%d", &K);
    scanf("%d", &X);
    scanf("%d", &Y);

    long cost;

    if (N <= K) {
        cout << N*X;
    } else {
        cout << K*X+(N-K)*Y;
    }
}