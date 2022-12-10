#include <bits/stdc++.h>
using namespace std;
typedef long long lld;
typedef long long ll;
typedef long ld;
typedef long double Lf;

int main() {
    lld C; int n;
    scanf("%lld %d", &C, &n);

    lld x = 0;
    lld left, enter, stay;
    while (n--) {
        scanf("%lld %lld %lld", &left, &enter, &stay);

        if (left > x) {
            cout << "impossible";
            return 0;
        }
        x -= left;
        x += enter;
        if (x < 0 || x > C) {
            cout << "impossible";
            return 0;
        }
        if (x < C && stay > 0) {
            cout << "impossible";
            return 0;
        }
    }
    if (x !=0 || stay > 0) {
        cout << "impossible";
        return 0;
    }


    cout << "possible";
}