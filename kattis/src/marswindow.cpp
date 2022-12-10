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
    long mths = 2018*12+3;
    long target;
    scanf("%ld", &target);

    while (mths/12 < target) {
        mths += 26;
    }

    if (mths/12 == target) {
        cout << "yes";
    } else {
        cout << "no";
    }
}