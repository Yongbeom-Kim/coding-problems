#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int rs[] = {0,5,5,5,5,5,5,5,5,5,5,4,4,4,4,4,3,3,3,3,3,2,2,2,2,2};//1-index
int main() {
    char c;
    int rank = 25;
    int stars = 0;
    int consec = 0;
    while (scanf("%c", &c) != EOF) {
        if (rank == 0) {printf("Legend"); return 0;}

        if (c == 'W') {
            consec++;
            if (consec >= 3 && rank >=6) {
                stars ++;
            }
            stars ++;
            if (stars > rs[rank]) {
                stars -= rs[rank];
                rank --;
            }
        } else if (c == 'L'){
            consec = 0;
            
            if (rank <= 20) {
                if (stars > 0) {
                    stars --;
                } else if (rank != 20) {
                    rank ++;
                    stars = rs[rank]-1;
                }
            }
        }
        // cout << "-" << rank << " " << stars << endl;
    }
    if (rank == 0) {printf("Legend"); return 0;}
    printf("%d", rank);
    // cout << "-" << rank << " " << stars;
}