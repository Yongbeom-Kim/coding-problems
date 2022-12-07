#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int m,d;
        scanf("%d %d", &d, &m);
        int dow = 6;
        int fs = 0;
        while (m--) {
            int di;
            scanf("%d",&di);
            if (dow == 6 && di >=13) fs++;
            dow += di;
            dow%=7;
        }
        printf("%d\n",fs);
    }
}