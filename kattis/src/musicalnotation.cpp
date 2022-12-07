#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    int N;
    scanf("%d", &N);
    char* notes = "GFEDCBAgfedcba";
    int nl = strlen(notes);
    char m[100];
    int l[100];


    for (int i = 0; i < N; i ++) {
        char a,b,c;
        scanf("%c", &a);
        scanf("%c", &b);
        int length=1;
        if(isdigit(b)) {
            length=b-'0';
            scanf("%*c");
        }
        cout << "al:" << a << length << endl;
        m[i] = (a);
        l[i] = (length);
    }

    for (int i = 0; i < N; i ++) {
        cout << m[i] << ": " << l[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < nl; i ++) {
        printf("%c: ", notes[i]);
        for (int j = 0; j < N; j ++) {
            if (m[j] == notes[i]) {
                for (int k = 0; k < l[j];k++) {
                    printf("*");
                }
            }
            for (int k = 0; k < l[j];k++) {
                printf("%c", (m[j] == 'F' || m[j] == 'D' || m[j] == 'B' || m[j] == 'g' || m[j] == 'e' || m[j] == 'a') ? '-' : ' ');
            }
            if (j < N-1) {
                printf("%c", (m[j] == 'F' || m[j] == 'D' || m[j] == 'B' || m[j] == 'g' || m[j] == 'e' || m[j] == 'a') ? '-' : ' ');
            }
        }
        printf("\n");
    }
}