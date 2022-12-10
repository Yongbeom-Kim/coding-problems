#include <bits/stdc++.h>
using namespace std;
typedef long long lld;
typedef long long ll;
typedef long ld;
typedef long double llf;
typedef double lf;

int main() {
    int N;
    scanf("%d", &N);

    while (N--) {
        lf R,B,M;

        scanf("%lf %lf %lf",&R,&B,&M);
        bool paid = false;
        int i;

        for (i = 1; i <= 1200   ; i ++) {
            lf interest = round(B*(R/100)*100)/100;
            B += interest;
            B = round(B*100)/100;
            B -= M;
            if (B<= 0.001) {
                paid=true;
                printf("%d\n", i);
                break;
            }
        }
        if (!paid) {
            printf("impossible\n");
        }
    }
}