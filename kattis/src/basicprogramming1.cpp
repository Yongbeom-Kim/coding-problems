#include <cstdio>
#include <algorithm>
#include <unordered_set>

long A[200000];

int main() {
    long n; int t;

    scanf("%ld %d", &n, &t);
    // printf("%d", t);
    if (t == 1) {
        printf("7");
        return 0;
    } else if (t == 2){
        scanf("%ld %ld", A, A+1);
        printf("%s", (A[0] > A[1] ? "Bigger" : (A[0] == A[1] ? "Equal": "Smaller")));
    } else if (t == 3) {
        scanf("%ld %ld %ld", A, A+1, A+2);
        std::sort(A, A+3);
        printf("%ld", A[1]);
    } else if (t == 4) {
        long long sum = 0;
        while (n--) {
            scanf("%ld", A);
            sum += *A;
        }
        printf("%lld", sum);
    } else if (t == 5) {
        long long sum = 0;
        while (n--) {
            scanf("%ld", A);
            sum += (*A %2 == 0) ? *A : 0;
        }
        printf("%lld", sum);
    } else if (t == 6) {
        while (n--) {
            scanf("%ld", A);
            printf("%c", (*A)%26+'a');
        }
    } else if (t == 7) {
        for (int i = 0; i < n; i ++) {
            scanf("%ld", A+i);
        }
        int i = 0;
        std::unordered_set<long> visited (0);

        while(true) {
            i = A[i];
            if (i >= n){
                printf("Out");
                return 0;    
            } else if (i == n-1) {
                printf("Done");
                return 0;
            }
            if (visited.find(i) != visited.end()) {
                printf("Cyclic");
                return 0;
            }
            visited.insert(i);
        }
    }
}
