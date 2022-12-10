#include <bits/stdc++.h>
using namespace std;
typedef long long lld;
typedef long long ll;
typedef long ld;
typedef long double Lf;

int main() {
    char c;
    scanf("%c", &c);
    char init = c;
    char pos = c;

    string seq;
    getline(cin, seq);

    // up
    pos = init;
    int flips = 0;
    for (auto it = seq.begin(); it != seq.end(); it++) {
        if (pos != *it) {
            flips++;
        }

        if (*it != 'U') {
            flips++;
        }
        pos = 'U';
    }
    cout << flips << endl;

    // up
    pos = init;
    flips = 0;
    for (auto it = seq.begin(); it != seq.end(); it++) {
        if (pos != *it) {
            flips++;
        }

        if (*it != 'D') {
            flips++;
        }
        pos = 'D';
    }
    cout << flips << endl;

    // up
    pos = init;
    flips = 0;
    for (auto it = seq.begin(); it != seq.end(); it++) {
        if (pos != *it) {
            flips++;
        }

        pos = *it;
    }
    cout << flips << endl;

}