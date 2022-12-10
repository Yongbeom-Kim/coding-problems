#include <bits/stdc++.h>
using namespace std;
typedef long long lld;
typedef long long ll;
typedef long ld;
typedef long double Lf;

int main() {
    int N;
    scanf("%d\n", &N);
    while (N--) {
        string s;
        getline(cin, s);
        ll x=0;
        int i = s.length()%2;
        for (auto it = s.begin(); it != s.end();i++,it++){
            x += i%2 == 0 ? (((*it)-'0')*2/10 + (((*it)-'0')*2)%10) : (*it)-'0';
            // cout << x << endl;
        }
        cout << (x%10==0 ? "PASS\n" : "FAIL\n");
    }
}