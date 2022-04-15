#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));

    int *a;
    int win, n;
    int max = 0;

    printf("Enter the size of Array : ");
    scanf("%d", &n);
    a = (int *)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 20 + 1;
        printf("%-2d  ", a[i]);
    }

    printf("\nEnter window Size : ");
    scanf("%d", &win);
    printf("Window Maximum : \n");

    for (int i = 0; i < win; i++)
    {
        if (a[max] < a[i])
            max = i;
    }
    printf("%-2d  ", a[max]);

    for (int i = 1; i <= n - win; i++)
    {
        if (a[max] <= a[i + win - 1])
            max = i + win - 1;

        else if (max < i)
        {
            max = i;
            for (int j = 1; j < win; j++)
            {
                if (a[i + j] > a[max])
                    max = i + j;
            }
        }

        printf("%-2d  ", a[max]);
    }

    return 0;
}