#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string s;
    cin >> s;

    int x = 0;
    int len = s.length();
    // if (len%3!=0){
    //     for (i = 0; i < len%3; i ++) {
    //         x *= 2;
    //         x += s[i]-'0';
    //     }
    //     cout << x;
    // }
    while (s.length()%3 != 0) {
        s.insert(0, "0"s);
    }

    // cout << s;
    x = 0;
    for (int i = 0; i < len; i += 3){
        cout << (s[i+2]-'0')+ (s[i+1]-'0')*2 +(s[i]-'0')*4;
    }

}