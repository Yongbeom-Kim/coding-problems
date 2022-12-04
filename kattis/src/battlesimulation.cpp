#include <cstdio>
#include <algorithm>
#include <string>
#include <iostream>

int main() {
    using namespace std;

    string s;
    getline(cin, s);
    
    int i;
    for (i = 0; i < ((long long) s.length()) - 2; i ++) {
        if (s[i] != s[i+1] && s[i] != s[i+2] && s[i+2] != s[i+1]) {
            printf("C");
            i += 2;
            continue;
        }
        printf("%c", s[i] == 'R' ? 'S' : (s[i] == 'B' ? 'K' : 'H'));
    }

    for (;i < s.length(); i ++) {
        printf("%c", s[i] == 'R' ? 'S' : (s[i] == 'B' ? 'K' : 'H'));
    }

}