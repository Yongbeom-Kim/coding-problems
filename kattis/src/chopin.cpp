#include <bits/stdc++.h>
using namespace std;
typedef long long lld;
typedef long ld;
typedef long double Lf;

unordered_set<string> unq = {"A"s,"B"s,"C"s,"D"s,"E"s,"F"s,"G"s};
unordered_map<string, string> alt = {
    {"A#"s,"Bb"s}, 
    {"C#"s,"Db"s}, 
    {"D#"s,"Eb"s}, 
    {"F#"s,"Gb"s}, 
    {"G#"s,"Ab"s},
    {"Bb"s, "A#"s}, 
    {"Db"s, "C#"s}, 
    {"Eb"s, "D#"s}, 
    {"Gb"s, "F#"s}, 
    {"Ab"s, "G#"s}
    };


int main() {
    string a, b;
    int i = 1;
    while (cin >> a >> b) {
        if (unq.find(a) != unq.end()) {
            cout << "Case " << i << ": " << "UNIQUE\n";
        } else {
            cout << "Case " << i << ": " << alt[a] << " " << b << "\n";
        }
        i++;
    }
}