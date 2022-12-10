#include <bits/stdc++.h>
using namespace std;
typedef long long lld;
typedef long ld;
typedef long double Lf;

lld c[1<<22];
int main() {
    ld n;
    scanf("%ld", &n);


    for (int i = 0; i < n; i ++) {
        lld x;
        scanf("%lld", c+i);
    }

    vector<pair<long, long>> dcsc = {{0,0}};
    long n_dcsc = 0;
    for (int i = 1; i < n; i ++) {
        if (c[i] <= c[i-1]) {
            dcsc[n_dcsc].second = i;
        } else {
            if (dcsc[n_dcsc].first == dcsc[n_dcsc].second) {
                dcsc[n_dcsc] = {i,i};
            } else {
                n_dcsc++;
                dcsc.push_back({i,i});
            }
        }
    }

    if (n_dcsc == 0 || (n_dcsc == 1 && dcsc[1].first==dcsc[1].second)) {
        cout << dcsc[0].first+1 << " " << dcsc[0].second+1;
    } else {
        cout<< "impossible";
    }
    

}