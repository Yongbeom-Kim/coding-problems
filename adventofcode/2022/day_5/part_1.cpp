#include <bits/stdc++.h>
using namespace std;
char INPUT_FILE[] = "./input.in";
char OUTPUT_FILE[] = "./output.out";

vector<vector<char>> crates ;
vector<int> n_crates;
int crate_no = 20;
FILE* fin = fopen(INPUT_FILE, "r");
ifstream fs;
ofstream fos;

void print() {
    int i = 0;
    for (auto it = crates.begin(); it !=crates.end();it++, i++) {
        cout<< i+1 << "(" << n_crates[i] << ")"<< " - ";
        for (auto jt = (*it).begin(); jt != (*it).end();jt++) {
            cout << *jt;
        }
        cout << endl;
    }
}

int main() {
    using namespace std;
    fs.open(INPUT_FILE);
    fos.open(OUTPUT_FILE);

    // crates.reserve(crate_no);
    // for (int i = 0; i < crate_no; i ++) 
    //     crates.push_back({});

    string s;
    while (fs.good()) {
        getline(fs, s);
        if (isdigit(s[1])) {
            break;
        }

        for (int i = 1, j = 0; i < s.length() ; i += 4, j ++) {
            while (crates.size() <= j) {
                crates.push_back({});
                n_crates.push_back(0);
            }
            crates[j].push_back(isalpha(s[i]) ? s[i] : ' ');
            n_crates[j] += isalpha(s[i]);
        }
    }

    for (auto it = crates.begin(); it != crates.end(); it++) {
        reverse((*it).begin(), (*it).end());
    }

    getline(fs, s);

    print();
    while (fs.good()) {
        int n, ix, fx;
        string s1;
        fs >> s1 >> n >> s1 >> ix >> s1 >> fx;
        // fscanf(fin, "move %d from %d to %d", &n, &ix, &fx);
        ix --, fx --;
        // crates[fx].push_back(' ');
        n = min(n, n_crates[ix]);
        while (crates[fx].size() <= n + n_crates[fx]) {
            crates[fx].push_back(' ');
        }

        move(crates[ix].begin()+n_crates[ix]-n, crates[ix].begin()+n_crates[ix], crates[fx].begin()+n_crates[fx]);
        reverse(crates[fx].begin()+n_crates[fx], crates[fx].begin()+n_crates[fx] + n); // oops i realised im supposed to use a stack in the end
        fill(crates[ix].begin()+n_crates[ix]-n, crates[ix].begin()+n_crates[ix], ' ');
        n_crates[ix] -= n;
        n_crates[fx] += n;
        // print();

    }
    cout << endl;
    print();
    cout << endl;

    for (int i = 0; i < crates.size(); i++) {
        cout << crates[i][n_crates[i]-1];
    }
     
}
