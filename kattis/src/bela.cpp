#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int N;
char B;

int getVal(char c, bool dom) {
    switch(c) {
        case 'A':
            return 11;
        case 'K':
            return 4;
        case 'Q':
            return 3;
        case 'J':
            return dom ? 20 : 2;
        case 'T':
            return 10;
        case '9':
            return dom ? 14 : 0;
        case '8':
            return 0;
        case '7':
            return 0;
    }
}

int main() {
    scanf("%d %c", &N,&B);
    scanf("\n");
    int sum = 0;
    N*=4;
    while (N--) {
        char n, s;
        scanf("%c %c", &n, &s);
        scanf("\n");
        sum += getVal(n, s == B);
    }

    printf("%d", sum);
}
