#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size : ");
    scanf("%d", &n);
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j <= n + i + 1; j++)
        {
            if (j >= n + 1 - i && j <= n + 1)
                printf("%-3d", (2 * i) + j - n - 1);
            else if (j > n + 1)
                printf("%-3d", (2 * i) + n + 1 - j);
            else
                printf("   ");
        }
        printf("\n");
    }
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < (2 * n) - i + 2; j++)
        {
            if (j > i && j <= n + 1)
                printf("%-3d", n + j - (2 * i) - 1);
            else if (j > n + 1)
                printf("%-3d", (2 * n) + 6 - (2 * i) - j);
            else
                printf("   ");
        }
        printf("\n");
    }
    return 0;
}