#include <bits/stdc++.h>
using namespace std;
typedef long long lld;
typedef long ld;
typedef long double Lf;

vector<string> keybd = {"1234567890-="s, "QWERTYUIOP[]"s, "ASDFGHJKL;'"s, "`ZXCVBNM,./"};
int main() {
    char c;
    while (scanf("%c", &c) != EOF) {
        if (isspace(c)) {
            cout << c;
            continue;
        }
        for (int i = 0; i < 4; i ++) {
            if (keybd[i].find(c) != string::npos) {
                cout << keybd[i][keybd[i].find(c)-1];
                break;
            }
        }
    }
}