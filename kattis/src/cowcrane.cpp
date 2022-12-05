#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;

ll t=0,x=0,m,l,ttm,tl,M,L;
bool md=0, ld=0;

void flip() {
    x = -x;
    m = -m;
    l = -l;
    M = -M;
    L = -L;
}

int main() {
    scanf("%lld %lld\n%lld %lld\n%lld %lld", &m,&l,&M,&L,&ttm,&tl);

    // WLOG,
    // m is the one that needs to be transported first
    if (ttm > tl) {
        swap(m, l);
        swap(M, L);
        swap(ttm, tl);
    }

    // get m
    // m is right
    if (m < 0) {
        flip();
    }
    // move l if necessary
    if (x <= l && l <= M) { // when l is between x -> m
        if (x <= L && L <= M) {
            l = L;
            t = L;
            if (t > tl) {
                printf("impossible");
                return 0;
            }
            ld = true;
        } else if (L > M){
            l = m;
        }
    }
    x = m;
    t = m;
    // move m to right position
    t += abs(x-M);
    x = M;
    m = M;
    if (t > ttm) {
        printf("impossible");
        return 0;
    }

    if (!ld) {
        t += abs(x-l) + abs(l-L);
        if (t > tl) {
            printf("impossible");
            return 0;
        }
    }

    printf("possible");

}

