#include <bits/stdc++.h>
using namespace std;
typedef long long lld;
typedef long ld;
typedef long double Lf;

int s, n, m;
int a[1001];
int pre[1001];
bool valleyp[1001];
bool valleyv[1001];
bool peakv[1001];
bool peakp[1001];
int main() {
    scanf("%d %d %d", &s, &n, &m);

    for (int i = 0; i < s; i ++) {
        scanf("%s", a+i);
    }

    for (int i = 0; i < s-n+1; i ++) {
        bool increasing = true;
        bool decreasing = true;
        for (int j = i; j < i+n-1 && (increasing || decreasing); j ++) {
            if (a[j] > a[j+1]) {
                increasing = false;
            }
            if (a[j] < a[j+1]) {
                decreasing = false;
            }
        }
        peakp[i+n-1] = increasing;
        peakv[i] = decreasing;
    }

    for (int i = 0; i < s-m+1; i ++) {
        bool increasing = true;
        bool decreasing = true;
        for (int j = i; j < i+m-1 && (increasing || decreasing); j ++) {
            if (a[j] > a[j+1]) {
                increasing = false;
            }
            if (a[j] < a[j+1]) {
                decreasing = false;
            }
        }
        valleyp[i] = increasing;
        valleyv[i+m-1] = decreasing;
    }

    int peaks = 0, valleys=0;;
    for (int i = 0; i < s-n+1; i ++) {
        peaks += (peakp[i] && peakv[i]);
    }
    for (int i = 0; i < s-m+1; i ++) {
        valleys += (valleyp[i] && valleyv[i]);
    }
    cout << peaks << " " << valleys;
    // for (int i = 0; i <s ; i ++) {
    //     cout << peakp[i];
    // }
    // cout << endl;
    // for (int i = 0; i <s ; i ++) {
    //     cout << peakv[i+n-1];
    // }
    // cout << endl;
    // for (int i = 0; i <s ; i ++) {
    //     cout << valleyp[i+m-1];
    // }
    // cout << endl;
    // for (int i = 0; i <s ; i ++) {
    //     cout << valleyv[i];
    // }
    // cout << endl;



}