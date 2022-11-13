#include <stdio.h>

int main()
{
    int G, S, C;

    scanf("%d %d %d", &G, &S, &C);

    int points = G * 3 + S * 2 + C * 1;

    bool has_victory = false;

    if (points >= 8)
    {
        printf("Province or ");
    }
    else if (points >= 5)
    {
        printf("Duchy or ");
    }
    else if (points >= 2)
    {
        printf("Estate or ");
    }

    if (points >= 6)
    {
        printf("Gold");
    }
    else if (points >= 3)
    {
        printf("Silver");
    }
    else
    {
        printf("Copper");
    }
}