#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    queue<long> q;
    
    long time;
    long max_cnt = 0;
    long n,k;
    scanf("%ld %ld", &n, &k);

    for (int i = 0; i < n; i ++) {
        scanf("%ld", &time);

        q.push(time);
        while(time-q.front() > 999) {
            q.pop();
        }
        max_cnt = max(max_cnt, (long) q.size());
    }

    cout << (long) (max_cnt/k + (max_cnt%k > 0));


}