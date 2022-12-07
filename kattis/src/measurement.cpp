#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;

int main() {
    unordered_map<string, ll> m {
        {"thou"s,      1},
        {"th"s,        1},
        {"inch"s,      1000},
        {"in"s,        1000},
        {"foot"s,      1000*12},
        {"ft"s,        1000*12},
        {"yard"s,      1000*12*3},
        {"yd"s,        1000*12*3},
        {"chain"s,     1000*12*3*22},
        {"ch"s,        1000*12*3*22},
        {"furlong"s,   1000*12*3*22*10},
        {"fur"s,       1000*12*3*22*10},
        {"mile"s,      1000*12*3*22*10*8},
        {"mi"s,        1000*12*3*22*10*8},
        {"league"s,    1000*12*3*22*10*8*3},
        {"lea"s,       1000*12*3*22*10*8*3}
    };

    ld l;
    string s, e, x;
    cin >> l >> s >> x >> e;
    std::cout << std::setprecision(10);
    if (m[s] >= m[e]) {
        ll ratio = m[s]/m[e];
        cout << l*ratio;
    } else {
        ll ratio = m[e]/m[s];
        cout << l/ratio;
    }

    // printf("%Lf", (l*(m[s]/(ld)m[e])));

}