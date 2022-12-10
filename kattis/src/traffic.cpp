#include <bits/stdc++.h>
using namespace std;
typedef long long lld;
typedef long ld;
typedef long double Lf;

ld x1, x2;
ld n1, n2;
ld s1[1<<20], s2[1<<20];

int main() {
    scanf("%ld %ld", &x1, &x2);
    scanf("%ld", &n1);
    for (int i = 0; i < n1; i ++) {
        scanf("%ld", s1+i);
    }
    scanf("%ld", &n2);
    for (int i = 0; i < n2; i ++) {
        scanf("%ld", s2+i);
    }

    if (x1 < x2) {
        swap(x1, x2);
        swap(n1, n2);
        swap(s1, s2);
    }
    x1 -= 4;
    ld endt = max(*max_element(s1, s1+n1), *max_element(s2, s2+n2));
    bool m1 = false, m2 = false;
    ld i1 = 0, i2 = 0;
    
    for (ld t = 0; t <= 1<<24; t ++) {
        x1 += m1;
        x2 += m2;
        if (s1[i1] == t) {
            i1++;
            m1 = !m1;
        }
        if (s2[i2] == t) {
            i2++;
            m2 = !m2;
        }
        if (x1 == x2) {
            printf("bumper tap at time %ld", t);
            return 0;
        }
    }
    printf("safe and sound");
}