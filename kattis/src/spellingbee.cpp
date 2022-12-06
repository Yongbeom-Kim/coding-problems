#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;;
    char chars[26];
    scanf("%s\n%d\n", chars, &N);

    while (N--) {
        char s[26];
        scanf("%s", s);
        bool ok = true;

        for (int i = 0; i < strlen(s); i ++) {
            if(find(chars, chars+7, s[i]) == chars+7) {
                ok = false;
                break;
            }
        }
        if(!ok) continue;

        if (find(s,s+strlen(s), chars[0]) == s+strlen(s)) continue;

        if (strlen(s) < 4) continue;

        printf("%s\n", s);
    }
}