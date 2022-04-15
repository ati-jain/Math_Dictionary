#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void swap(int *a, int *b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

void sort(int *a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
            swap(&a[i], &a[i + 1]);
    }
    if (n > 1)
        sort(a, n - 1);
}

int main()
{
    srand(time(NULL));
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        a[i] = rand() % 100;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d  ", a[i]);
    }
    sort(a, 10);
    printf("\nAfter Sorting\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d  ", a[i]);
    }
    return 0;
}