#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    scanf("%d\n", &N);

    while(N--) {
        int ix,iy,fx,fy;
        char c1,c2;
        scanf("%c %d %c %d\n",&c1,&iy,&c2,&fy);
        ix = c1 - 'A'+1;
        fx = c2 - 'A'+1;

        cout << ix << " " << iy << " " << fx << " " << fy << endl;

        if ((fx - ix + fy - iy)%2 != 0) {
            printf("Impossible");
            continue;
        }

        for (int i = -8; i <= 8; i ++) {
            
        }


    }
}