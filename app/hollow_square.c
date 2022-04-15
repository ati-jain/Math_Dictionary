#include <stdio.h>

int main()
{
    int i, j, n;
    char c;
    printf("Enetr the side : \n");
    scanf("%d", &n);
    fflush(stdin);
    printf("Enter the symbol : \n");
    scanf("%c", &c);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == 1)
                printf("%c ", c);
            else
            {
                if (i == n)
                    printf("%c ", c);
                else
                {
                    if (j == 1)
                        printf("%c ", c);
                    else
                    {
                        if (j == n)
                            printf("%c ", c);
                        else
                            printf("  ");
                    }
                }
            }
        }
        printf("\n");
    }
    return 0;
}