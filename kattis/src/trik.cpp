#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    bool cup[3];
    fill(cup, cup+3, false);
    cup[0] = true;
    char c;
    while (scanf("%c", &c) != EOF) {
        if (c == 'A') swap(cup[0], cup[1]);
        if (c == 'B') swap(cup[1], cup[2]);
        if (c == 'C') swap(cup[0], cup[2]);
    }

    for (int i = 0; i < 3; i ++) {
        if (cup[i]) printf("%d", i+1);
    }
}