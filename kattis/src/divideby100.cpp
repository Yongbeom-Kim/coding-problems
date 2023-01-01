#include <bits/stdc++.h>
using namespace std;
typedef tuple<int, int> ii;
typedef tuple<int, int, int> iii;
typedef long long lld;
typedef long long ll;
typedef long ld;
typedef long double llf;
typedef double lf;

char num[1000050];
int main() {
    char c;
    ld i = 0;
    ld len = 0;
    ld n_trailing_zeros = 0;
    while(scanf("%c", &c) == 1) {
        if (c == '\n') {
            break;
        }

        if (i == 0 && c == '0') {
            continue;
        }

        if (c == '0') {
            n_trailing_zeros ++;
        } else {
            n_trailing_zeros = 0;
        }
        num[i] = c;
        i ++;
    }
    len = i;

    ld logm = 0;
    bool hitOne = false;
    while (scanf("%c",& c) != EOF) {
        
        if (!hitOne && c == '1') {
            hitOne = true;
        }

        if (hitOne && c == '0') {
            logm ++;
        }
    } 
    
    bool greaterthan1 = false;
    for (int i = 0; i < len-logm; i ++) {
        printf("%c", num[i]);
        greaterthan1 = true;
    }
    if (!greaterthan1) {
        printf("0");
    }
    if (len > 0 && len-logm < len-n_trailing_zeros) {
        printf(".");
    }

    for (int i = len-logm; i < len-n_trailing_zeros; i ++) {
        printf("%c", num[i]);
    }
    // cout << endl << len << endl;
    // cout << logm << endl;
}