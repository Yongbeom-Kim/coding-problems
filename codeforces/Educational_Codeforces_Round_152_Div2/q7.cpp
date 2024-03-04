#include <bits/stdc++.h>
using namespace std;
typedef tuple<int, int> ii;
typedef tuple<int, int, int> iii;
typedef long long lld;
typedef long ld;
typedef long double llf;
typedef double lf;

auto cmp(const lld* a, const lld* b) {
    if (a[0] == b[0]) {
        return a[1] > b[1];
    }
    return a[0] > b[0];
}
void print(vector<lld*> v) {
    for (lld* i : v) {
        cout << i[0] << " | " << i[1] << endl;
    }
}

int main()
{
    lld myints[3][2] = {{3,1},{2,2},{1,3}};
    vector<lld*> v (myints, myints+3);
    print(v);
    make_heap(v.begin(), v.end(), cmp);

    print(v);
}