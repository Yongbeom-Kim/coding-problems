#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

double moves[111] ;
bool no = false;
int main() {
    int L = 100, W = 75;

    while (true) {
        
        int nx,ny; double w;
        scanf("%d %d %lf", &nx, &ny, &w);

        if (nx == 0 && ny == 0 && w == 0) {
            return 0;
        }

        for (int i = 0; i < nx; i ++){
            double c;
            scanf("%lf", &moves[i]);
        }
        std::sort(moves, moves+nx);

        double prev = 0 - w/2;
        for (int i = 0; i < nx; i ++){
            if (moves[i] - prev > w) {
                no = true;
            }
            prev = moves[i];
        }
        if (!no || moves[nx] < 75-w/2) {
            no = true;
        }

        for (int i = 0; i < ny; i ++){
            double c;
            scanf("%lf", &moves[i]);
        }
        std::sort(moves, moves+ny);

        prev = 0 - w/2;
        for (int i = 0; i < ny; i ++){
            if (moves[i] - prev > w) {
                no = true;
            }
            prev = moves[i];
        }
        if (!no || moves[nx] < 100-w/2) {
            no = true;
        }
        

        if(no)printf("NO\n");
        if(!no)printf("YES\n");
    }
    

}