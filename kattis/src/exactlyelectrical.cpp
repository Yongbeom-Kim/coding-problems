#include <cstdio>
#include <cmath>

int main() {
    using namespace std;
    int ix, iy, fx, fy;
    int t;
    scanf("%d %d\n%d %d\n%d", &ix, &iy, &fx, &fy, &t);

    int dist = (abs(ix - fx) + abs(iy - fy));
    printf("%s", (dist <= t && (dist - t)%2 == 0 ? "Y" : "N"));
}