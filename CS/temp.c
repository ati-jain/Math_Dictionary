#include <stdio.h>
#include <stdlib.h>

void counting_sort(int *a, int range, int n)
{
    int *b = (int *)calloc(range, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        b[a[i]]++;
    }
    int j = 0;
    for (int i = 0; i < range; i++)
    {
        while (b[i] > 0)
        {
            a[j] = i;
            // printf("%d", a[j]);
            j++;
            b[i]--;
        }
    }
    free(b);
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 2, 3};
    counting_sort(a, 15, 10);
    for (int i = 0; i < 10; i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}