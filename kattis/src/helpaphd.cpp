#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int x, y;
    
    while (N--)
    {
        if (scanf("%d+%d", &x, &y) == 2)
        {
            printf("%d\n", x + y);
        }
        else
        {
            scanf("%*s");
            printf("skipped\n");
        }
    }
}