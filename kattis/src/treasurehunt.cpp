#include <stdio.h>
#include <string.h>

int main()
{

    int R, C;
    int x = 0, y = 0;
    char area[201][201];

    scanf("%d %d", &R, &C);


    for (int i = 0; i < R; i++)
    {
        scanf("%s", area[i]);
    }

    char now = area[0][0];
    int steps = 0;
    while (true)
    {
        if (x < 0 || x >= C || y < 0 || y >= R)
        {
            printf("Out");
            return 0;
        }

        now = area[y][x];
        area[y][x] = -1;
        steps ++;
        switch (now)
        {
        case 'N':
            y--;
            break;
        case 'S':
            y++;
            break;
        case 'E':
            x++;
            break;
        case 'W':
            x--;
            break;
        case 'T':
            printf("%d", steps-1);
            return 0;
        case -1:
            printf("Lost");
            return 0;
        }
    }
}