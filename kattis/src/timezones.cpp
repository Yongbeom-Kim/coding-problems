#include <bits/stdc++.h>
using namespace std;
typedef tuple<int, int> ii;
typedef tuple<int, int, int> iii;
typedef long long lld;
typedef long long ll;
typedef long ld;
typedef long double llf;
typedef double lf;
unordered_map<string, float> timezones = {
{"UTC"s, 0},
{"GMT"s, 0},
{"BST"s, 1},
{"IST"s, 1},
{"WET"s, 0},
{"WEST"s, 1},
{"CET"s, 1},
{"CET"s, 1},
{"CEST"s, 2},
{"EET"s, 2},
{"EEST"s, 3},
{"MSK"s, 3},
{"MSD"s, 4},
{"AST"s, -4},
{"ADT"s, -3},
{"NST"s, -3.5},
{"NDT"s, -2.5},
{"EST"s, -5},
{"EDT"s, -4},
{"CST"s, -6},
{"CDT"s, -5},
{"MST"s, -7},
{"MDT"s, -6},
{"PST"s, -8},
{"PDT"s, -7},
{"HST"s, -10},
{"AKST"s, -9},
{"AKDT"s, -8},
{"AEST"s, 10},
{"AEDT"s, 11},
{"ACST"s, 9.5},
{"ACDT"s, 10.5},
{"AWST"s, 8}};

int main() {
    int N;
    cin >> N;
    while (N--) {
        int time;
        string x;
        cin >> x;
        if (x == "noon"s) {
            time = 12*60;
        } else if (x == "midnight"s) {
            time = 0;
        } else {
            int hr, min;
            char c;
            stringstream ss (x);

            ss >> hr >> c >> min;
            time = hr*60 + min;

            cin >> x;
            if (x == "p.m.") {
                time += 12*60;
            }
        }

        string tz;
        cin >> tz;
        time += timezones[tz]*60;

        cin >> tz;
        time -= timezones[tz]*60;

        if (time == 12*60) {
            cout << "noon\n";
        } else if (time == 0) {
            cout << "midnight\n";
        } else {
            if (time > 12*60) {
                cout << (time-(12*60)) << " p.m.\n";
            } else {
                cout << time << "a.m.\n";
            }
        }



    }
}