#include <cstdio>
#include <algorithm>

int main() {
    int n;
    scanf("%d", &n);

    printf("%d", std::max(n-2, 1));
}