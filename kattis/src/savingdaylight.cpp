#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    
    char a[10], b[10], c[10];
    while(scanf("%s %s %s", a, b, c) != EOF) {
        printf("%s %s %s ", a, b, c);
        int h1,m1,h2,m2;
        scanf("%d:%d %d:%d", &h1, &m1, &h2, &m2);

        int duration = ((h2-h1)*60+(m2-m1)+24*60)%(24*60);

        int dh = duration/60;
        int dm = duration%60;

        cout << dh << " hours " << dm << " minutes\n";
    }
}