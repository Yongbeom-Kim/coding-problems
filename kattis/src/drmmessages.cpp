#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string s;
int main() {
    s.reserve(15000);
    cin >> s;

    int rva, rvb;
    int len = s.length();

    for (int i = 0; i < len/2;i++) {
        rva +=s[i]-'A';
    }
    rva %= 26;

    for (int i = len/2; i < len ;i++) {
        rvb +=s[i]-'A';
    }
    rvb %= 26;

    for (int i = 0; i < len/2;i++) {
        s[i] = (s[i]-'A' + rva)%26+'A';
    }
    for (int i = len/2; i < len ;i++) {
        s[i] = (s[i]-'A' + rvb)%26+'A';
    }

    for (int i = 0; i < len/2;i++) {
        s[i] = (s[i]-'A' + s[len/2+i]-'A')%26+'A';
        cout << s[i];
    }




}