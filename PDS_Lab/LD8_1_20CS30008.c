//Name : Atishay Jain
//Roll No. : 20CS30008

#include <stdlib.h>
#include <stdio.h>

void dist2cities(int dist[][5])
{
    printf("dist2cities :\n");
    int s, t;

    printf("Enter city 1 (s) : ");
    scanf("%d", &s);
    while (s > 4 || s < 0)
    {
        printf("Invalid input! Enter again : ");
        scanf("%d", &s);
    }

    printf("Enter city 2 (t) : ");
    scanf("%d", &t);
    while (t > 4 || t < 0)
    {
        printf("Invalid input! Enter again : ");
        scanf("%d", &t);
    }

    printf("Distance between the cities s and t is %d km.\n", dist[s][t]);
}

void dist2thr1city(int dist[][5])
{
    printf("dist2thr1city :\n");
    int s, r, t;

    printf("Enter city 1 (s) : ");
    scanf("%d", &s);
    while (s < 0 || s > 4)
    {
        printf("Invalid input! Enter again : ");
        scanf("%d", &s);
    }

    printf("Enter city 2 (r) : ");
    scanf("%d", &r);
    while (r < 0 || r > 4 || r == s)
    {
        printf("Invalid input! Enter again : ");
        scanf("%d", &r);
    }

    printf("Enter city 3 (t) : ");
    scanf("%d", &t);
    while (t < 0 || t > 4 || t == r || t == s)
    {
        printf("Invalid input! Enter again : ");
        scanf("%d", &t);
    }

    printf("The distance between the cities s and t going through r is %d kms.", dist[s][r] + dist[r][t]);
}

int main()
{
    int dist[5][5];
    int i, j;

    for (i = 0; i < 5; i++)
    {
        for (j = 4; j > i; j--)
        {
            dist[i][j] = (rand() % 1000) + 1;
            dist[j][i] = dist[i][j];
        }
        dist[i][i] = 0;
    }

    printf("Cities vs Distance\n    ");
    for (i = 0; i < 5; i++)
    {
        printf("%-5d", i);
    }
    printf("\n    ");
    for (i = 0; i < 5; i++)
    {
        printf("_____");
    }
    printf("\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d | ", i);
        for (j = 0; j < 5; j++)
        {
            printf("%-5d", dist[i][j]);
        }
        printf("\n");
    }

    dist2cities(dist);

    dist2thr1city(dist);

    return 0;
}