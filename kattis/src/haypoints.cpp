#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    unordered_map<string, ll> m;
    int W,J;
    scanf("%d %d", &W, &J);

    while (W--) {
        string s;
        ll w;
        cin >> s >> w;
        m[s] = w;
    }

    while (J--) {
        ll d = 0;

        while (true) {
            string word;
            cin >> word;
            if (word == "."s) break;

            if (m.find(word) != m.end()) {
                d += m[word];
            }
        }
        printf("%d\n", d);
    }

}