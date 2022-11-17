#include <cstdio>
#include <algorithm>

int main()
{
    int N;
    scanf("%d", &N);

    int t = 0, l = 0;
    while (N--)
    {
        int T, B, L, R;

        scanf("%1d%1d%1d%1d", &T, &B, &L, &R);

        t += 2 - (T + B);
        l += 2 - (L + R);
    }

    int swords = std::min(t, l)/2;
    printf("%d ", swords);

    printf("%d %d", t-swords*2, l-swords*2);

}