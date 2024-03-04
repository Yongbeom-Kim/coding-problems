#include <bits/stdc++.h>
using namespace std;
typedef tuple<int, int> ii;
typedef tuple<int, int, int> iii;
typedef long long lld;
typedef long ld;
typedef long double llf;
typedef double lf;
auto cmp(const lld* a, const lld* b) {
    if (a[0] == b[0]) {
        return a[1] > b[1];
    }
    return a[0] > b[0];
}

void print(vector<lld*> v) {
    for (lld* i : v) {
        cout << i[0] << " | " << i[1] << endl;
    }
}
int main()
{   
    lld q[300009][2];
    int TC;
    scanf("%d", &TC);

    while (TC--) {
        lld n, k;
        scanf("%lld %lld", &n, &k);

        for (lld i =0 ; i < n; i ++) {
            scanf("%lld", &q[i][0]);
            q[i][0] = -q[i][0];
            q[i][1] = i;
        }
        vector<lld*> pq(q, q+n);

        print(pq);
        make_heap(pq.begin(), pq.end(), cmp);
        print(pq);

        while (n) {
            lld* top = pq[0];

            top[0] += k;
            if (top[0] < 0) {
                make_heap(pq.begin(), pq.end(), cmp);
            } else {
                pop_heap(pq.begin(), pq.end());
                pq.pop_back();
                printf("%lld ", top[1] + 1);
                n--;
            }
        }
        printf("\n");

    }
}