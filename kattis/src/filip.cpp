#include <stdio.h>
#include <string.h>
#include <algorithm>

void reverse_string(char* s) {
    int n = strlen(s);
    for (int i = 0; i < n/2; i ++) {
        std::swap(s[i], s[n-i-1]);
    }
}

int main() {
    char A[4];
    char B[4];
    scanf("%3s %3s", A, B);

    reverse_string(A);
    reverse_string(B);

    printf("%d", std::max(atoi(B), atoi(A)));

}
