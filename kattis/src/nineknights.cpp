#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string s[5];
    for (int i = 0; i < 5; i ++) {
        getline(cin, s[i]);
    }
    int kcount = 0;
    for (int i = 0; i < 5; i ++) {
        for (int j = 0; j < 5; j ++) {
            if (s[i][j] == 'k') {
                kcount ++;
                int x = i+1;
                int y = j+2;
                if (x >= 0 && x < 5 && y >= 0 && y < 5 && s[x][y] == 'k') {
                    printf("invalid");
                    return 0;
                }
                x = i-1;
                y = j+2;
                if (x >= 0 && x < 5 && y >= 0 && y < 5 && s[x][y] == 'k') {
                    printf("invalid");
                    return 0;
                }
                x = i+1;
                y = j-2;
                if (x >= 0 && x < 5 && y >= 0 && y < 5 && s[x][y] == 'k') {
                    printf("invalid");
                    return 0;
                }
                x = i-1;
                y = j-2;
                if (x >= 0 && x < 5 && y >= 0 && y < 5 && s[x][y] == 'k') {
                    printf("invalid");
                    return 0;
                }
                x = i+2;
                y = j+1;
                if (x >= 0 && x < 5 && y >= 0 && y < 5 && s[x][y] == 'k') {
                    printf("invalid");
                    return 0;
                }
                x = i-2;
                y = j+1;
                if (x >= 0 && x < 5 && y >= 0 && y < 5 && s[x][y] == 'k') {
                    printf("invalid");
                    return 0;
                }
                x = i+2;
                y = j-1;
                if (x >= 0 && x < 5 && y >= 0 && y < 5 && s[x][y] == 'k') {
                    printf("invalid");
                    return 0;
                }
                
                x = i-2;
                y = j-1;
                if (x >= 0 && x < 5 && y >= 0 && y < 5 && s[x][y] == 'k') {
                    printf("invalid");
                    return 0;
                }
            }
        }

    }
    if (kcount != 9) {
        printf("in");
    }
    printf("valid");
}