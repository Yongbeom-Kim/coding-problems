#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

char m[101][101];

int main() {
    int N;
    scanf("%d\n", &N);

    while (N--) {
        string s;
        getline(cin, s);
        int n = sqrt(s.length());
        for (int i = 0; i < n; i ++) {
            for (int j = 0; j < n; j ++) {
                m[n-1-j][i] = s[j+n*i];
            }
        }
        for (int i = 0; i < n; i ++) {
            for (int j = 0; j < n; j ++) {
                printf("%c", m[i][j]);
            }
        }
        printf("\n");
    }
}