#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    unordered_map<char, int> char_freq;
    for (char c : s) {
        if (char_freq.find(c) == char_freq.end()) {
            char_freq[c] == 0;
        }
        char_freq[c] ++;
    }

    for (const auto& key_val : char_freq) {
        if (key_val.second%2 == 1) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
    return 0;
}