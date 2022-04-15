#include <stdio.h>
int main()
{
    int c;
    printf("Enter the size of the kite : ");
    scanf("%d", &c);
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < c - i; j++)
        {
            printf(" ");
        }
        for (int j = c - i; j < c + 1 + i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = c; i >= 0; i--)
    {
        for (int j = 0; j < c - i; j++)
        {
            printf(" ");
        }
        for (int j = c - i; j < c + 1 + i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    c = getchar();
    c = getchar();
    return 0;
}