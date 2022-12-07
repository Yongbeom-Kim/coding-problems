#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    scanf("%d", &N);
    int i = 0;
    while (N--) {
        string n,s,t;
        cin >> n >> s >> t;

        ll number = 0;
        int sb = s.size();
        for (int i = 0; i < n.size(); i ++) {
            number *= sb;
            number += s.find(n[i]);
        }
        string ans = "";
        int tb = t.size();
        while (number) {
            ans.insert(ans.begin(), t[number%tb]);
            number /=tb;
        }
        printf("Case #%d: ", ++i);
        cout << ans << endl;
    }
}