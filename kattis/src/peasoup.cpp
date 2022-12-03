#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
int main() {
    using namespace std;

    int n, k;
    string s, rname;

    scanf("%d\n", &n);

    while (n--) {
        scanf("%d\n", &k);
        getline(cin, rname);
        bool has_pea = 0, has_pancake = 0;
        while (k--) {
            getline(cin, s);
            has_pea = has_pea || s == "pea soup";
            has_pancake = has_pancake || s == "pancakes";
        }

        if (has_pea && has_pancake) {
            printf("%s", rname.c_str());
            return 0;
        }

    }
    printf("Anywhere is fine I guess");
}