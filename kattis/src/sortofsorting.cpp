#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    while (true) {
            
        scanf("%d", &N);
        if (N == 0) return 0;
        string s[200];
        fill(s, s+200, ""s);

        for (int i = 0; i < N; i++) {
            cin >> s[i];
        }

        stable_sort(s, s+N,[](const string& s1, const string& s2) {return lexicographical_compare(s1.c_str(), s1.c_str()+2, s2.c_str(), s2.c_str()+2);});

        for (int i = 0; i < N; i ++) {
            cout << s[i] << endl;
        }
        cout << endl;
    }
}