#include <cstdio>
#include <algorithm>

int n;
int r, o;
int steps[1000];

int getSteps(int stepsLeft) {
    if (stepsLeft <= 0) {
        return 0;
    }

    if (steps[stepsLeft] == -1) {
        steps[stepsLeft] = std::min(2*o + getSteps(stepsLeft - 2*o), 2*r + getSteps(stepsLeft - 2*r));
    }
        // printf("%d: %d\n", stepsLeft, steps[stepsLeft]);
        return steps[stepsLeft];

}

int main() {
    std::fill(steps, steps+1000, -1);
    steps[0] = 0;

    scanf("%d %d %d", &n, &r, &o);

    /*
    DP?
    Given n minimal steps,
    (n) steps at ground floor, which can be done with repetitions of (2o) or (2r) steps
    */

   printf("%d", std::min(2*o+2*r, getSteps(n)+r));
}
