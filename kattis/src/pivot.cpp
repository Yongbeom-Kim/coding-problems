#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<long> a;
bool no[100000];
int main() {
    ll n;
    scanf("%lld", &n);
    a.reserve(100000);

    for (int i = 0; i < n; i ++) {
        long x;
        scanf("%ld", &x);
        a.push_back(x-1);
    }

    long front_max = a[0], back_min = a[n-1];

    for (int i = 0; i < n-1; i ++) {
        front_max = max(front_max,a[i]);
        no[i+1] = no[i+1] || front_max > a[i+1];

        back_min = min(back_min, a[n-1-i]);
        no[n-2-i] = no[n-2-i] || back_min < a[n-i-2];
    }
    no[0] = back_min < a[0];
    no[n-1] = front_max > a[n-1];


    printf("%lld", n-accumulate(no, no+n, (ll)0));
        
}