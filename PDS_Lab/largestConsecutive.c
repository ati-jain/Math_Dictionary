#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void sort(int *a)
{
    int temp = 0;
    for (int i = 0; i < 30; i++)
    {
        if (a[i] > a[i + 1])
        {
            temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
        }
    }
    if (temp != 0)
        sort(a);
}
int main()
{
    int a[30], max = 0, len = 1;
    srand(time(NULL));
    for (int i = 0; i < 30; i++)
    {
        a[i] = (rand() % 11) + 20;
        printf("%d  ", a[i]);
    }
    printf("\n");
    sort(a);
    for (int i = 0; i < 30; i++)
        printf("%d  ", a[i]);
    for (int i = 0; i < 30 - max; i++)
    {
        if (a[i + 1] == a[i] + 1)
        {
            len++;
        }
        else if (a[i + 1] > a[i] + 1)
        {
            if (max < len)
                max = len;
            len = 1;
        }
    }
    if (max < len)
        max = len;
    printf("\n%d", max);
    return 0;
}