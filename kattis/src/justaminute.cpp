#include <bits/stdc++.h>
using namespace std;
typedef tuple<int, int> ii;
typedef tuple<int, int, int> iii;
typedef long long lld;
typedef long long ll;
typedef long ld;
typedef long double llf;
typedef double lf;

int main() {
    int N;
    scanf("%d", &N);
    long act=0, dis=0;

    while (N--) {
        int m, s;
        scanf("%d %d", &m, &s);

        act += m*60;
        dis += s;
    }

    if (dis <= act) {
        printf("measurement error");
        return 0;
    }
    cout.precision(9);
    cout << fixed;
    cout << dis/(llf)act;
}

