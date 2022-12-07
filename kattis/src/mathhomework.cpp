#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int a,b,c,l;
    scanf("%d %d %d %d", &a, &b, &c, &l);

    int A=l/a,B=l/b,C=l/c;
    bool sol = false;
    for (int i = 0; i <= A; i ++) {
        for (int j = 0; j <= B; j ++) {
            for (int k = 0; k <= C; k ++) {
                if (a*i+j*b+k*c == l) {
                    sol = true;
                    printf("%d %d %d\n", i, j, k);
                }
            }
        }
    }
    if (!sol) {
        printf("impossible");
    }
}