#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    int N;
    scanf("%d", &N);

    while (N--) {
        int n;
        scanf("%d", &n);
        deque<int> cards;
        for (int i = 0; i < n; i ++) {
            cards.push_front(n-i);
            for (int j = 0; j < n-i; j ++) {
                int back = cards.back();
                cards.push_front(back);
                cards.pop_back();
            }  
        }
        for (int i = 0; i < n; i ++)
            cout << cards[i] << " ";
        cout << endl;
    }

}