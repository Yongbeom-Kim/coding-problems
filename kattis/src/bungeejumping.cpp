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
    llf k,l,h,m;
    while(true) {
            
        scanf("%Lf %Lf %Lf %Lf", &k, &l, &h, &m);
        if (k == 0 && l == 0 && h == 0 && m == 0) {
            return 0;
        }

        llf gpe = m*h*9.81;
        llf epe = 0.5*(h-l)*(h-l)*k;
        llf ke = gpe - epe;

        if (ke < 0) {
            printf("Stuck in the air.\n");
        } else if (ke >= 0.5*m*10*10) {
            printf("Killed by the impact.\n");;
        } else {
            printf("James Bond survives.\n");
        }
    }



}