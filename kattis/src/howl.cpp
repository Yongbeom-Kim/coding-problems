#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    scanf("%3*s");
    bool b = 0;
    while (scanf("%*c") != EOF) {
        printf("%c", b ? 'A' : 'W');
        b = !b;
    }
    printf("HOO");
}