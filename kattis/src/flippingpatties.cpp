#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long ld;

int acts[50000];
int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i ++) {
        int d,t;
        scanf("%d %d", &d, &t);
        acts[t] ++;
        acts[t-d] ++;
        acts[t-2*d] ++;
    }

    long maxacts = (*max_element(acts,acts+50000));
    cout << (maxacts/2 + maxacts%2);
}