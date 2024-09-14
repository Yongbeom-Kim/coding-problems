#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<char> ans;

    for (char c : s) {
        if (c == '0' || c == '1') {
            ans.push_back(c);
        } else if (!ans.empty()) {
            ans.pop_back();
        }
    }

    for (char c : ans) {
        cout << c;
    }
}