#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    scanf("%d", &N);

    int prev = 0;
    int no = 1;
    while (N--) {
        int x;
        scanf("%d", &x);
        if (prev > x) {
            no++;
        }
        prev=x;
    }
    cout << no;
}