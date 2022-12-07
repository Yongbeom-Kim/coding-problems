#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string im[101];

char getNext(char c) {
    if (c == '9') return 'a';
    if (c == 'z') return 'A';
    return c+1;
}

int main() {
    while (!cin.eof()) {
        int i = -1;
        fill(im, im+101, ""s);

        while (i++, true) {
            string x;
            getline(cin, x);
            if (x.empty()) {
                break;
            }
            swap(x, im[i]);
        }
        int R = i+1;
        int C = im[0].length();
        cout << "RC " << R << "|" << C << endl;

        int r=0, c=0;
        for (int i = 0; i < R; i ++) {
            for (int j = 0; j < C; j ++) {
                if (im[i][j] == '0') {
                    r = i;
                    c = j;
                    cout << "ij: " << i << "|" << j << endl;
                }
            }
        }

        while (true) {
            char nextchar = getNext(im[r][c]);
            cout << "nextchar" << nextchar << endl;
            bool found = false;
            for (int i = 0; i < C; i ++) {
                cout << "-" << r << "|" << i << endl;
                if (im[r][i] == nextchar) {
                    for (int j = min(i,c)+1; i < max(i,c); j ++) {
                        // im[r][j] = '-';
                        im[r].replace(j,1, "-");
                    }
                    c = i;
                    cout << "found "<< endl;
                    found = true;
                    break;
                }
            }
            for (int i = 0; i < R; i ++) {
                        cout << "|" << i << "|" << c << endl;
                if (im[i][c] == nextchar) {
                    for (int j = min(i,r)+1; i < max(i,r); j ++) {
                        // im[j][c] = '|';
                        im[j].replace(c,1, "|");
                    }
                    r = i;
                    cout << "found "<< endl;
                    found = true;
                    break;
                }
            }

            if (!found) break;
        }
        for (int i = 0; i < R; i ++) {
            cout << im[i] << endl;
        }

    }
}

