#include <bits/stdc++.h>
using namespace std;
typedef long long lld;
typedef long ld;
typedef long double Lf;

lld c[1<<22];
int main() {
    ld n;
    scanf("%ld", &n);


    for (int i = 0; i < n; i ++) {
        lld x;
        scanf("%lld", c+i);
    }

    lld peaki = -1, troughi = -1;

    lld prev = c[0];
    bool fasc = true;
    bool sasc = false;
    bool dsc = false;
    for (int i = 1; i < n; i ++) {
        if (fasc && c[i] < prev) {
            peaki = i-1;
            for (lld j = i-1; j >= 0 && c[j] == prev; j --) {
                peaki = j;
            }
            fasc = false;
            dsc = true;
        } else if (dsc && c[i] > prev) {
            troughi = i-1;
            for (lld j = i-1; j < n && c[j] == prev; j ++) {
                troughi = j;
            }
            sasc = true;
            dsc = false;
        }else if (sasc && c[i] < prev) {
            printf("impossible");
            return 0;
        }
        prev = c[i];
    }

    if (is_sorted(c, c+n)) {
        printf("%ld %ld", n, n); return 0;
    }

    cout << peaki+1 << " " << troughi+1;//<< "\n";
    // cout << c[peaki] << " " << c[troughi];
    // cout << c[peaki-1] << " " << c[troughi+1];

}