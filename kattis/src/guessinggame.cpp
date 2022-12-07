#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int g;
    string r;
    int low=0;
    int hi=INT_MAX;
    int ans;
    while (1) {
        scanf("%d", &g);
        if (g == 0) {
            return 0;
        }
        getline(cin, r);

        if (r == "too high") {
            hi = min(hi,g);
        } else if (r == "too low") {
            low = max(low, g);
        } else if (r == "right on") {
            ans = g;
            if (hi <= low || hi <= ans || low >= hi || low >= ans) {
                printf("Stan is dishonest\n");
            } else {
                printf("Stan may be honest\n");
            }
            
            low=0;
            hi=INT_MAX;
            ans=0;
        }
    }
}