#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll l,n;
    scanf("%lld %lld", &l,&n);
    ll rolls = 0;
    // cout << n << endl;

    while (l%n != 0) {
        n = n-(l%n);
        rolls++;
        // cout << n << endl;
    }
    cout << rolls+1;
}