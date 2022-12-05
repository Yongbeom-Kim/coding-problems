#include <cstdio>
#include <cstring>

int main() {
    int N;
    char s[81];
    while (true) {
        scanf("%d", &N);
        if (N == 0)
            return 0;
        
        char maxword[81];
        int max_num_dv = -1;

        while (N--) {
            scanf("%s", s);
            int num_dv = 0;
            if (strlen(s) > 1){
                for (int i = 0; i < (strlen(s)-1); i ++) {
                    if (s[i] == s[i+1] && (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')) {
                        num_dv ++;
                    }
                }
            }
            if (num_dv > max_num_dv) {
                max_num_dv = num_dv;
                strcpy(maxword, s);
            }
        }
        printf("%s\n", maxword);
    }
}