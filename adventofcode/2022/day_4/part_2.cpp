#include <cstdio>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <string>
#include <unordered_set>
#include <cctype>
#include <fstream>

char INPUT_FILE[] = "./input.in";

int main() {
    using namespace std;
    FILE* fin = fopen(INPUT_FILE, "r");
    ifstream fs;
    fs.open(INPUT_FILE);

    int f1,f2,s1,s2;
    int contained = 0;
    while(fscanf(fin, "%d-%d,%d-%d",&f1,&f2,&s1,&s2) == 4) {
        contained += (f1 <= s2 && f1 >= s1) || (f2 <= s2 && f2 >= s1) || (s1 <= f2 && s1 >= f1) || (s2 <= f2 && s2 >= f1);
    }

    printf("%d", contained);

}