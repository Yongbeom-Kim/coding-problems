#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

char m[100][100];

int main() {
    int r,c,zr,zc;
    scanf("%d %d %d %d\n", &r, &c, &zr, &zc);

    for (int i = 0; i < r; i ++) {
        scanf("%s", m+i);
    }

    for (int i = 0; i <r*zr; i ++) {
        for (int j = 0; j <c*zc;j++) {
            printf("%c", m[i/zr][j/zc]);
        }
        printf("\n");
    }

}