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
            if (i == j)
                printf("\\");
            else if (j == (n - i - 1))
                printf("/");
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}