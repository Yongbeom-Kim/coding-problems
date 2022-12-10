#include <bits/stdc++.h>
using namespace std;
typedef long long lld;
typedef long ld;
typedef long double Lf;

int main() {
    int N;
    scanf("%d", &N);
    while (N--) {
        string b[3];
        cin >> b[0] >> b[1] >> b[2];

        int xc=0, oc=0;
        for (int i = 0; i < 3; i ++) {
            for (int j = 0; j < 3; j ++) {
                xc += (b[i][j] == 'X');
                oc += (b[i][j] == 'O');
            }
        }

        if (!(oc == xc || oc+1 == xc)) {
            cout << "no" << endl;
            continue;
        }

        int threexc = 0;
        int threeoc = 0;
        for (int i = 0; i < 3; i ++) {
            if (b[i][0] == b[i][1] && b[i][0] == b[i][2]) {
                threexc += b[i][0] == 'X';
                threeoc += b[i][0] == 'O';
            }
            if (b[0][i] == b[1][i] && b[0][i] == b[2][i]) {
                threexc += b[0][i] == 'X';
                threeoc += b[0][i] == 'O';
            }
        }
        if (b[0][0] == b[1][1] && b[0][0] == b[2][2]) {
            threexc += b[0][0] == 'X';
            threeoc += b[0][0] == 'O';
        }
        if (b[2][0] == b[1][1] && b[1][1] == b[0][2]) {
            threexc += b[1][1] == 'X';
            threeoc += b[1][1] == 'O';
        }
        if(threexc+threeoc > 1) {
            cout << "no" << endl;
            continue;
        }
        if (threexc == 1 && xc != 1+oc){
            cout << "no" << endl;
            continue;
        }
        if (threeoc == 1 && xc != oc){
            cout << "no" << endl;
            continue;
        }

        cout << "yes" << endl;
    }
}