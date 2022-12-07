#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string a, b;
    getline(cin, a);
    getline(cin, b);

    int as=0, bs=0;
    for(int i = 0; i < a.length(); i ++) {
        as += a[i] == 'S';
    }
    for(int i = 0; i < b.length(); i ++) {
        bs += b[i] == 'S';
    }
    for (int i = 0; i < as*bs; i ++) {
        printf("S(");
    }
    printf("0");
    for (int i = 0; i < as*bs; i ++) {
        printf(")");
    }
}