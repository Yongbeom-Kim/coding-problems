#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        bool diff[3000];
        fill(diff, diff+3000, false);
        int h[3000];
        for (int i = 0; i < n; i ++) {
            scanf("%d", h+i);
        }
        for (int i = 0; i < n-1; i ++) {
            diff[abs(h[i]-h[i+1])-1] = true;
        }
        bool j = false;
        for (int i = 0; i < n-1; i ++) {
            if (!j&&!diff[i]) {
                j=true;
                printf("Not jolly\n");continue;
            }
        }
        if(!j)
        printf("Jolly\n");
    }
}