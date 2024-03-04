#include <bits/stdc++.h>
using namespace std;
typedef tuple<int, int> ii;
typedef tuple<int, int, int> iii;
typedef long long lld;
typedef long ld;
typedef long double llf;
typedef double lf;

int main()
{
    int TC;

    scanf("%d", &TC);
    
    while (TC--) {
        int n;
        scanf("%d", &n);
        for (int i = 1; i < n+20; i ++) {
            if ((n%i) != 0){
                printf("%d\n", i-1);
                break;
            }
        }
    }
}