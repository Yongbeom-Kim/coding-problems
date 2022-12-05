#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <string>
#include <unordered_set>
#include <cctype>

int main() {
    char line[400], line1[400], line2[400];
    using namespace std;

    FILE* fin = fopen("./input.in", "r");

    long long sum = 0;

    while(fscanf(fin, "%s\n", line) != EOF) {
        fscanf(fin, "%s\n", line1);
        fscanf(fin, "%s\n", line2);

        int len = strlen(line);
        int len1 = strlen(line1);
        int len2 = strlen(line2);
        // cout << line << "\n" << line1 << "\n" << line2 << "\n";
        unordered_set<char> htable (line, line+len);

        unordered_set<char> htable1;
        for (int i = 0; i < len1; i ++) {
            if (htable.find(line1[i]) != htable.end()) {
                htable1.insert(line1[i]);
            }
        }

        for (int i = 0; i < len2; i ++) {
            if (htable1.find(line2[i]) != htable1.end()) {
                // cout << line2[i] << "\n";
                sum += islower(line2[i]) ? line2[i] - 'a' +1 : line2[i] - 'A'+27;
                break;
            }
        }

    }

    cout << sum;
    
    
}

