#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n1, n2;

    scanf("%d\n%d", &n1, &n2);

    int dist = min(abs((n2-n1-720)%360), abs((n2-n1+720)%360)) ;

    if ((n1+dist)%360 == n2) {
        printf("%d", dist);
    }else {
        printf("%d", -dist);
    }
}