#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    scanf("%d\n", &N);

    while (N--) {
        string s;char*end;
        getline(cin, s);
        ll n = 0;
        while (!s.empty()) {
            int pos = s.find(',');
            // cout << "|" << s << "|" << endl;
            if (s[0] == ',') {
                n*=60;
                s=s.substr(1);
                continue;
            }
            if(pos == string::npos) {
                n += s.empty() ? 0 : stoi(s);
                break;
            } else {
                // cout << "|" << s.substr(0, pos) << "|" << endl;
                n += s.substr(0, pos).empty() ? 0 : stoi(s.substr(0, pos));
                s = s.substr(pos);
            }
        }
        cout << n << endl;;
    }
}