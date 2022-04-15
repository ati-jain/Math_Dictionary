#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int n;
void minmax(int *a)
{
    int min = a[0], max = a[0];
    for (int i = 1; i < 30; i++)
    {
        if (a[i] < min)
            min = a[i];
        if (a[i] > max)
            max = a[i];
    }
    printf("Max : %d\nMin : %d\n", max, min);
}
void duplicate(int *a)
{
    printf("Duplicates : \n");
    a[30] = 0;
    for (int i = 0; i < 30; i++)
    {
        a[a[i] % 31] += 31;
    }
    for (int i = 20; i <= 30; i++)
    {
        if ((a[i] / 31) > 1)
            printf("%d  ", i);
        a[i] = a[i] % 31;
    }
    printf("\n");
}
void highestFrequency(int *a)
{
    int n = a[0], f = 1;
    printf("Highest Frequency : \n");
    a[30] = 0;
    for (int i = 0; i < 30; i++)
    {
        a[a[i] % 31] += 31;
    }
    for (int i = 20; i <= 30; i++)
    {
        if ((a[i] / 31) > f)
        {
            f = a[i] / 31;
            n = i;
        }
        a[i] = a[i] % 31;
    }
    printf("%d occurs %d times \n", n, f);
}
int conlen(int *a, int n)
{
    int len, max = 0;
    for (int j = n + 1; j < 30 - max; j++)
    {
        if (a[j] == a[n] + 1 || a[j] == a[n] - 1)
        {
            len = conlen(a, j);
            if (max < len)
                max = len;
        }
    }
    return max + 1;
}
void largestConsecutive(int *a)
{
    int max = 0, len, m;
    if (n == 0)
    {
        printf("Largest Consecutive Sequence : \n");
        for (int i = 0; i < 30 - max; i++)
        {
            len = conlen(a, i);
            if (max < len)
            {
                max = len;
                m = i;
            }
        }
    }
    else
    {
        for (int i = n; i < 30 - max; i++)
        {
            if (a[i] == a[n - 1] + 1 || a[i] == a[n - 1] - 1)
            {
                len = conlen(a, i);
                if (max < len)
                {
                    max = len;
                    m = i;
                }
            }
        }
    }
    if (max != 0)
    {
        printf("%d  ", a[m]);
        n = m + 1;
        largestConsecutive(a);
    }
    else
        printf("\n");
}
int declen(int *a, int n)
{
    int len, max = 0;
    for (int j = n + 1; j < 30 - max; j++)
    {
        if (a[j] < a[n])
        {
            len = declen(a, j);
            if (max < len)
                max = len;
        }
    }
    return max + 1;
}
void largestDecreasing(int *a)
{
    int max = 0, len, m;
    if (n == 0)
    {
        printf("Largest Decreasing Sequence : \n");
        for (int i = 0; i < 30 - max; i++)
        {
            len = declen(a, i);
            if (max < len)
            {
                max = len;
                m = i;
            }
        }
    }
    else
    {
        for (int i = n; i < 30 - max; i++)
        {
            if (a[i] < a[n - 1])
            {
                len = declen(a, i);
                if (max < len)
                {
                    max = len;
                    m = i;
                }
            }
        }
    }
    if (max != 0)
    {
        printf("%d  ", a[m]);
        n = m + 1;
        largestDecreasing(a);
    }
    else
        printf("\n");
}
int main()
{
    int a[31], i;
    char c;
    srand(time(NULL));
    for (i = 0; i < 30; i++)
    {
        a[i] = (rand() % 11) + 20;
        printf("%d  ", a[i]);
    }
    printf("\n");
    do
    {
        scanf("%c", &c);
        switch (c)
        {
        case 'm':
            minmax(a);
            break;
        case 'd':
            duplicate(a);
            break;
        case 'h':
            highestFrequency(a);
            break;
        case 'c':
            n = 0;
            largestConsecutive(a);
            break;
        case 's':
            n = 0;
            largestDecreasing(a);
            break;
        default:
            break;
        }
    } while (c != 'e');

    printf("Exit");
    return 0;
}