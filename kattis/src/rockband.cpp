#include <bits/stdc++.h>
using namespace std;
typedef long long lld;
typedef long ld;
typedef long double Lf;

ld m,s;
unordered_set<ld> visited;
// ld favs[1<<20][1<<20];
vector<ld>adjlist[1<<20];

int main() {
    scanf("%ld %ld", &m, &s);

    ld src;

    for (ld i = 0; i < m; i ++) {
        ld v, u; // u -> v
        scanf("%ld", &v);
        if (i == 0) {
            src = v;
        }
        for (ld j  = 1; j < s; j ++) {
            scanf("%ld", &u);
            adjlist[u].push_back(v);
            swap(u, v);
        }
    }

    // for (ld i = 0; i < m; i ++) {
    //     for (ld j  = 1; j < s; j ++) {
    //         adjlist[favs[i][j]].push_back(favs[i][j-1]);
    //     }
    // }

    vector<ld> stack = {src};
    visited.insert(src);
    while(!stack.empty()) {
        ld v = *(stack.end()-1);
        stack.pop_back();

        for (auto it = adjlist[v].begin(); it != adjlist[v].end(); it++) {
            if (visited.find(*it) == visited.end()) {
                stack.push_back(*it);
                visited.insert(*it);
            }
        }
    }
    vector<ld> ans (visited.begin(), visited.end());
    sort(ans.begin(), ans.end() );
    printf("%ld\n", (long)ans.size());
    for (auto it = ans.begin(); it != ans.end(); it++) {
        printf("%ld ", *it);
    }
}
