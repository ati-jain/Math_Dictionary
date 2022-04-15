#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j >= n - i - 1)
                printf("%d", j + i + 2 - n);
            else
                printf(" ");
        }
        printf("\n");
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j > i)
                printf("%d", j - i);
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}