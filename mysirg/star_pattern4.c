#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0, k = 0; k < i + 1; j = j + i, k++)
        {
            printf("%-3d", j);
        }
        printf("\n");
    }
    return 0;
}