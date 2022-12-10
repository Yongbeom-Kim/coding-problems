#include <bits/stdc++.h>
using namespace std;
typedef long long lld;
typedef long long ll;
typedef long ld;
typedef long double Lf;

int main() {
    lld N;
    scanf("%lld", &N);

    while (N--) {
        int s, d;
        scanf("%d %d", &s, &d);
        int a = (s-d)/2, b = a + d;

        if ((s-d) < 0 || (s-d)%2 != 0 || b < 0) {
            cout << "impossible" << endl;
        } else {
            cout << b << " " << a << endl;
        }

    }
}