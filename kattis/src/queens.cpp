#include <bits/stdc++.h>
using namespace std;
typedef long long lld;
typedef long double Lf;

bool b[5000][5000];
int n;

int main() {
    scanf("%d", &n);

    for (int i = 0; i < n; i ++) {
        fill(b[i], b[i]+n, false);
    }
    for (int i = 0; i < n; i++) {
        int x,y ;
        scanf("%d %d", &x,&y);
        if (b[x][y]) {
            printf("INCORRECT");
            return 0;
        }
        for (int j = 0; j < n; j ++) {
            b[x][j] = true;
            b[j][y] = true;
        }
        for (int j = -n; j < n; j ++) {
            if (y-j >= 0 && y-j < n && x-j >= 0 && x-j < n) {
                b[x-j][y-j] = true;
            }
            if (y+j >= 0 && y+j < n && x-j >= 0 && x-j < n) {
                b[x-j][y+j] = true;
            }
        }
    }
    printf("CORRECT");
}
