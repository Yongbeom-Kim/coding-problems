#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <string>
#include <unordered_set>
#include <cctype>

int main() {
    char line[400];
    using namespace std;

    FILE* fin = fopen("./input.in", "r");

    long long sum = 0;

    while(fscanf(fin, "%s\n", line) != EOF) {
        // char first[200], second[200];
        // std::strncpy(first, line, std::strlen(line)/2);
        // std::strcpy(second, line+std::strlen(line)/2);
        // cout << first << " " << second << "\n";

        int len = strlen(line);
        unordered_set<char> htable (line, line+len/2);

        for (int i = 0; i < len/2; i ++) {
            if (htable.find(line[len/2 + i]) != htable.end()) {
                sum += islower(line[len/2 + i]) ? line[len/2 + i] - 'a' +1 : line[len/2 + i] - 'A'+27;
                // cout << sum << "\n";
                break;
            }
        }
    }

    cout << sum;
    
    
}

