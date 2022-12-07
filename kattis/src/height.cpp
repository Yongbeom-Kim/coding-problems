#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    scanf("%d",&N);

    while (N--) {
        int test;
        cin >> test; cout << test << " ";
        vector<int> v;
        int moves = 0;
        for (int i = 0; i < 20; i ++) {
            int ins;
            cin >> ins;
            bool insert = false;
            for (int j = 0; j < v.size()&&!insert; j ++) {
                if (v[j] > ins) {
                    moves += v.size()-j;
                    v.insert(v.begin()+j, ins);
                    insert = true;
                }
            }
            if(!insert) {
                v.push_back(ins);
            }
        }
        cout << moves << endl;
    }
}