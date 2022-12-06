#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

string s;
int main() {
    cin >> s;

    for (int i = 0; i < s.length(); i ++) {
        switch(i%3){
            case 0:
                printf("..#.");
                break;
            case 1:
                printf("..#.");
                break;
            case 2:
                printf("..*.");
                break;
        }
    }
    printf(".\n");

    for (int i = 0; i < s.length(); i ++) {
        switch(i%3){
            case 0:
                printf(".#.#");
                break;
            case 1:
                printf(".#.#");
                break;
            case 2:
                printf(".*.*");
                break;
        }
    }
    printf(".\n");

    int i;
    for (i = 0; i < s.length(); i ++) {
        switch(i%3){
            case 0:
                printf("%c.%c.", i == 0 ? '#' : '*', s[i]);
                break;
            case 1:
                printf("#.%c.", s[i]);
                break;
            case 2:
                printf("*.%c.", s[i]);
                break;
        }
    }
    printf("%c\n", ((i%3)==0 )? '*' : '#');

    for (int i = 0; i < s.length(); i ++) {
        switch(i%3){
            case 0:
                printf(".#.#");
                break;
            case 1:
                printf(".#.#");
                break;
            case 2:
                printf(".*.*");
                break;
        }
    }
    printf(".\n");

        
    for (int i = 0; i < s.length(); i ++) {
        switch(i%3){
            case 0:
                printf("..#.");
                break;
            case 1:
                printf("..#.");
                break;
            case 2:
                printf("..*.");
                break;
        }
    }
    printf(".\n");
}