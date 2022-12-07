#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int t, s,n;
    scanf("%d %d %d", &t, &s, &n);

    int a=s,b=0;
    bool flipped = false;
    int prevTime = 0;
    while (n--) {
        int ct;
        scanf("%d", &ct);

        if(!flipped) {
            int amt = min(b,(ct-prevTime));
            a+=amt;
            b-=amt;
        }
        if(flipped) {
            int amt = min(a,(ct-prevTime));
            b+=amt;
            a-=amt;
        }
        flipped = !flipped;
        // cout << b << "|" << a << " " << prevTime << "|" << ct << endl;
        prevTime = ct;
        
    }

    if(!flipped) {
        int amt = min(b,(t-prevTime));
        a+=amt;
        b-=amt;
    } else if(flipped) {
        int amt = min(a,(t-prevTime));
        b+=amt;
        a-=amt;
    }

    // cout << b << "|" << a << endl;
    cout << (flipped ? a : b);

}