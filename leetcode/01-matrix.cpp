#include <bits/stdc++.h>
using namespace std;
typedef tuple<int, int> ii;
typedef tuple<int, int, int> iii;
typedef long long lld;
typedef long long ll;
typedef long ld;
typedef long double llf;
typedef double lf;

class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        using namespace std;
        queue<ii> q;
        int C, R;
        C = mat.size();
        R = mat[0].size();

        vector<vector<int>> result = mat;

        for (int i = 0; i < C; i ++) {
            for (int j = 0; j < R; j ++) {
                if (mat[i][j] != 0) {
                    result[i][j] = -1;
                } else {
                    q.push(make_pair(i, j));
                }
            }
        }

        while (!q.empty()) {
            ii node = q.front();q.pop();

            int c = get<0>(node);
            int r = get<1>(node);

            if (c-1>=0  && result[c-1][r] == -1) {
                result[c-1][r] = result[c][r]+1;
                q.push(make_tuple(c-1, r));
            }
            if (c+1<C   && result[c+1][r] == -1) {
                result[c+1][r] = result[c][r]+1;
                q.push(make_tuple(c+1, r));
            }
            if (r-1>=0  && result[c][r-1] == -1) {
                result[c][r-1] = result[c][r]+1;
                q.push(make_tuple(c, r-1));
            }
            if (r+1<R   && result[c][r+1] == -1) {
                result[c][r+1] = result[c][r]+1;
                q.push(make_tuple(c, r+1));
            }

        }
        return result;
    }
};