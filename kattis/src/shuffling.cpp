#include <bits/stdc++.h>
#include <numeric>
using namespace std;
typedef long long ll;

int n0[1000];
int n1[1000];
int n2[1000];
string s;
int N;

int main() {
    cin >> N >> s;

    iota(n1, n1+N, 0);
    iota(n0, n0+N, 0);
    
    ll count = 0;
    int second_start = s == "out"s ? (N-N/2) : N/2;
    while(1){
        bool fst = s == "out"s;
        
        for (int i = 0; i < N; i ++) {
            n2[i] = fst ? n1[i/2] : n1[second_start+i/2];
            fst = !fst;
        }
        copy(n2, n2+N, n1);

        count ++;
        if (equal(n0, n0+N, n1, n1+N)) {
            break;
        }
    }

    printf("%lld", count);

}

