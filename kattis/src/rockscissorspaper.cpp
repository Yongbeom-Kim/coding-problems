#include <bits/stdc++.h>
using namespace std;
typedef long long lld;
typedef long ld;
typedef long double Lf;

char g[100][100];
char ng[100][100];

int main() {
    int r,c;
    int t;
    int N;
    scanf("%d", &N);
    while (N--) {
        scanf("%d %d %d", &r, &c, &t);
        for (int i = 0; i < r; i ++) {
            scanf("\n");
            for (int j = 0; j < c; j ++) {
                scanf("%c", &g[i][j]);
            }
        }

        // for (int i = 0; i < r; i ++) {
        //     for (int j = 0; j < c; j ++) {
        //         printf("|%c",g[i][j]);
        //     }
        //     printf("\n");
        // }
        // printf("\n");

        for (int i = 0; i < t; i ++) {
            for (int j = 0; j < r; j ++) {
                for (int k = 0; k < c; k ++) {
                    if (g[j][k] == 'R') {
                        char win_char = 'P';
                        if ((j-1 >= 0 && g[j-1][k] == win_char) || (j+1 <r && g[j+1][k] == win_char) || (k-1 >= 0 && g[j][k-1] == win_char) || (k+1 < c && g[j][k+1] == win_char)) {
                            ng[j][k] = win_char;
                        } else {
                            ng[j][k] = g[j][k];
                        }
                    }
                    if (g[j][k] == 'S') {
                        char win_char = 'R';
                        // cout << g[j][k] << "|" << g[j][k+1] << "|"<<k+1<<"|" << c << endl;
                        if ((j-1 >= 0 && g[j-1][k] == win_char) || (j+1 <r && g[j+1][k] == win_char) || (k-1 >= 0 && g[j][k-1] == win_char) || (k+1 < c && g[j][k+1] == win_char)) {
                            ng[j][k] = win_char;
                        } else {
                            ng[j][k] = g[j][k];
                        }   
                    }
                    if (g[j][k] == 'P') {
                        char win_char = 'S';
                        if ((j-1 >= 0 && g[j-1][k] == win_char) || (j+1 <r && g[j+1][k] == win_char) || (k-1 >= 0 && g[j][k-1] == win_char) || (k+1 < c && g[j][k+1] == win_char)) {
                            ng[j][k] = win_char;
                        } else {
                            ng[j][k] = g[j][k];
                        }
                    }
                }
            }
            swap(g, ng);
        }

        for (int i = 0; i < r; i ++) {
            for (int j = 0; j < c; j ++) {
                printf("%c", g[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
}