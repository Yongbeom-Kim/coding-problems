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
        int incorrect = 0;
        for (int i = 1; i <= n; i ++) {
            int temp;
            scanf("%d", &temp);
            incorrect += temp == i;
        }
        printf("%d\n", incorrect/2 + incorrect%2);
    }
}