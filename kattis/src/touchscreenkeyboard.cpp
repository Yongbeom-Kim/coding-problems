#include <bits/stdc++.h>
using namespace std;
typedef tuple<int, int> ii;
typedef long long lld;
typedef long long ll;
typedef long ld;
typedef long double llf;
typedef double lf;

const char* kbd[] = {"qwertyuiop",
                    "asdfghjkl ",
                    "zxcvbnm   "};

int getdist(const ii& a, const ii& b) {
    return abs(get<0>(a)-get<0>(b))+abs(get<1>(a)-get<1>(b));
}

ii getpos(char c) {
    for (int i = 0; i < 3; i ++) {
        for (int j = 0; j < 11; j ++) {
            if (c == kbd[i][j]) {
                return {i, j};
            }
        }
    }
    return {-1,-1};
}

int main() {
    int T;
    scanf("%d", &T);
    while(T--){
        char base[10000]; int n;
        ii pos[10000];
        scanf("%s %d\n", base, &n);
        int len = strlen(base);
        for (int i = 0; i < len; i ++) {
            pos[i] = getpos(base[i]);
        }

        tuple<int, string> words[10];
        for (int i = 0; i < n; i ++) {
            int dist = 0; string w;w.reserve(10000);

            cin >> w;
            for (int j = 0; j < len; j ++) {
                dist += getdist(getpos(w[j]), pos[j]);
            }

            words[i] = {dist, move(w)};
            // cout << "D" << dist << w << endl;
            // cout << "G" << get<0>(words[i]) << get<1>(words[i]) << endl;
        }

        sort(words, words+n, [](auto const & a, auto const & b){
            if (get<0>(a) != get<0>(b)) {
                return get<0>(a) < get<0>(b);
            } else {
                return get<1>(a) < get<1>(b);
            }
        });

        for (int i = 0; i < n; i ++) {
            cout << get<1>(words[i]) << " " << get<0>(words[i]) << endl;
        }

    }
}