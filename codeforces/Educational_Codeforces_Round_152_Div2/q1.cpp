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
    int N;
    scanf("%d", &N);

    while(N--) {
        int b, c, h;
        scanf("%d %d %d", &b, &c, &h);
        int f = c + h;
        
        printf("%d\n", 2*std::min(b, f+1)-1);
    }
}