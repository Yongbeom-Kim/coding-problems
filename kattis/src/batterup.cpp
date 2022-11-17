#include <cstdio>

int main()
{
    int n;

    scanf("%d", &n);

    int sum = 0;
    int count = 0;
    int x;
    while (n--)
    {
        scanf("%d", &x);

        if (x != -1) {
            sum += x;
            count ++;
        }
    }

    printf("%f", (sum+0.0)/count);
}