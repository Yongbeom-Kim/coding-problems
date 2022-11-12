#include <stdio.h>
using namespace std;

int main() {

    long long x, y;

    while (scanf("%lld %lld\n", &x, &y)){
        printf("%lld\n", (x > y ? x - y : y - x));
    }
}