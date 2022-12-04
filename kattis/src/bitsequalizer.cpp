#include <cstdio>
#include <iostream>
#include <string>
#include <cstdio>
int main() {
    using namespace std;
    int N;
    scanf("%d\n", &N);
    for (int i = 1; i <= N; i ++) {
        string is, fs;
        getline(cin, is);
        getline(cin, fs);
        int moves = 0;

        int i0 = 0, i1 = 0, iq = 0;
        for (char c : is) {
            i0 += c == '0';
            i1 += c == '1';
            iq += c == '?';
        }

        int f0 = 0, f1 = 0;
        for (char c : fs) {
            f0 += c == '0';
            f1 += c == '1';
        }
        // 0 -> 1, but not 1 -> 0
        // number of 1 cannot decrease

        if (i1 > f1) {
            printf("Case %d: -1\n", i);
            continue;
        }

        // get rid of ?
        for (int j = 0; j < fs.length(); j ++) {
            if (is[j] == '?') {
                if (i1 == f1) {
                    moves ++;
                    is[j] = '0';
                    iq --;
                    i0 ++;
                } else {
                    moves ++;
                    is[j] = fs[j];
                    iq --;
                    i0 += fs[j] == '0';
                    i1 += fs[j] == '1';
                }
            }
        }
        
        // turn 0 into 1
        for (int j = 0; i0 > f0; j ++) {
            if (is[j] == '0' && fs[j] == '1') {
                moves ++;
                is[j] = fs[j];
                i0 --;
                i1 ++;
            }
        }

        // swaps -> take diff / 2
        int diff = 0;
        for (int j = 0; j < is.length(); j ++) {
            diff += is[j] != fs[j];
        }
        moves += diff/2;

        printf("Case %d: %d\n", i, moves);
    }
}