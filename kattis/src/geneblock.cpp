#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    scanf("%d", &N);

    while (N--) {
        int t;
        scanf("%d", &t);

        int n = 0;
        while (t%10 != 7 && t > 0){
            t-=7;n++;
        }
        printf("%d\n", t<0?-1:n+1);
    }
}