#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

unordered_set<int> visited;
ll WEEK = 60*24*7;
// represent everything in minutes from Sat 00:00
int main() {
    ll first, second, i1, i2;
    int a,b,c,d,e,f,g,h;
    scanf("%d:%d\n%d:%d\n%d:%d\n%d:%d",&a,&b,&c,&d,&e,&f,&g,&h);

    first = a*60+b;
    second = c*60+d;
    i1 = e*60+f;
    i2 = g*60+h;

    long n = 1<<20;
    bool ok[n];
    fill(ok,ok+n,0);

    for (int i = first; i < n; i += i1)
        ok[i] = true;
    for (int i = second; i < n; i += i2)
        if (ok[i]) {
            string days[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
            printf("%s\n%02lld:%02lld", days[(i/2400)%7].c_str(), (i%2400)/60, i%60);
            return 0;
        }
    printf("Never");

    // cout << first << "|" << second << "|" << i1 << "|" << i2 << "|";
    // visited.insert(first-second);

    // while (first != second) {
    //     if (first < second) {
    //         first += i1;
    //     } else if (first > second) {
    //         second += i2;
    //     }
    //     if (visited.find(first-second) != visited.end()) {
    //         printf("Never");
    //         return 0;
    //     }
    // }

    // first %= WEEK;
    
    // int dayofweek = first/2400;
    // cout << first << " " << dayofweek << endl;
    // string days[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    // printf("%s\n%02lld:%02lld", days[first/2400].c_str(), (first%2400)/60, first%60);
    
}