#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int cards,turns;
int ip;
int fp;
int cards_found;
int ans;

string cardarray[1000];
bool found[1000];
bool matched[1000];

int main() {
    scanf("%d %d", &cards, &turns);
    fill(cardarray, cardarray+1000, ""s);
    while (turns--) {
        int c1,c2;
        string p1,p2;
        cin >> c1 >> c2 >> p1 >> p2;

        cardarray[c1-1] = p1;
        cardarray[c2-1] = p2;
        found[c1-1] = true;
        found[c2-1] = true;

        if (p1 == p2 && c1 != c2) {
            matched[c1-1] = true;
            matched[c2-1] = true;
            ip ++;
        }

    }
    // cout << ans << endl;
    for (int i = 0; i < cards; i ++) {
        if (!matched[i] && found[i]){
            for (int j = 0; j < cards; j ++) {
                if (!matched[j] && !matched[i] && found[i] && found[j] && cardarray[i] == cardarray[j] && i != j) {
                    // cout << i <<", "<< j << ": " << cardarray[i] << " | " << cardarray[j] << endl;
                    ans++;
                    matched[i] = true;
                    matched[j] = true;
                }
            }
        }
    }
    // cout << ans << endl;
    if ((accumulate(found, found+cards, (int) 0) - accumulate(matched, matched+cards, (int) 0)/2) >= cards/2) {
        ans += (cards-accumulate(matched, matched+cards, (int) 0))/2;
    }
    // cout << ans << endl;

    if (accumulate(matched, matched+cards, (int) 0) == cards-2) {
        ans ++;
    }
    // cout << ans << endl;
    printf("%d", ans);

}