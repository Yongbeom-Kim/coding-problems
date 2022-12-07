#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    scanf("%d\n", &N);
    string bf,af;
    getline(cin, bf);
    getline(cin, af);
    int len = bf.length();
    for (int i = 0; i < len; i ++) {
        if ((bf[i] == af[i])^(N%2==0)) {
            printf("Deletion failed");
            return 0;
        }
    }
    printf("Deletion succeeded");

}