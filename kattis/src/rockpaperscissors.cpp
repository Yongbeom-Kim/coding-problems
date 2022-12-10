#include <bits/stdc++.h>
using namespace std;
typedef long long lld;
typedef long ld;
typedef long double Lf;

bool tie (string s1,string s2) {
    return s1 == s2;
}

bool win (string s1, string s2) {
    return(s1 == "paper" && s2 == "rock") || (s1 == "scissors" && s2 == "paper") || (s1 == "rock" && s2 == "scissors");
}

int main() {
    int n,k;
    int wins[111];
    int loss[111];
    
    while (true) {
        scanf("%d", &n);
        if (n == 0) return 0;

        scanf("%d", &k);
        fill(wins, wins+111, 0);
        fill(loss, loss+111, 0);

        for (int i = 0; i < (k*n*(n-1))/2; i ++) {
            int a, b; string movea, moveb;
            cin >> a >> movea >> b >> moveb;

            if(tie(movea, moveb)){}
            else if(win(movea, moveb)) {
                wins[a]++;
                loss[b]++;
            } else {
                loss[a]++;
                wins[b]++;
            }
        }


        for (int i = 1; i < n+1; i ++) {
            // cout << wins[i] << " " << loss[i] << endl;
            if (wins[i] == 0 && loss[i] == 0) {
                cout << "-" << endl;
            } else {
                cout.precision(3);
                cout << fixed;
                cout << (double)wins[i]/(double)(wins[i]+loss[i]) << endl;
            }
        }
        printf("\n");
    }
}