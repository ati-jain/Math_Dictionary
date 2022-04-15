#include <time.h>
#include <stdlib.h>
#include <stdio.h>

void my_sort(int *, int);

void insertion_sort(int *, int);

void merge_sort(int *, int);

void quick_sort(int *, int);

void counting_sort(int *, int, int);

int main()
{
    srand(time(NULL));
    int a[10];
    int *p;
    int range;
    printf("Enter Range : ");
    scanf("%d", &range);
    for (int i = 0; i < 10; i++)
    {
        a[i] = rand() % range;
        printf("%d\t", a[i]);
    }

    p = a;
    my_sort(p, 10);
    printf("\nMy Sorted Array : \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", p[i]);
    }

    p = a;
    insertion_sort(p, 10);
    printf("\nInsertion Sorted Array : \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", p[i]);
    }

    p = a;
    merge_sort(p, 10);
    printf("\nMerge Sorted Array : \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", p[i]);
    }

    p = a;
    quick_sort(p, 10);
    printf("\nQuick Sorted Array : \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", p[i]);
    }

    p = a;
    counting_sort(p, range, 10);
    printf("\nCounting Sorted Array : \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", p[i]);
    }

    return 0;
}

void my_sort(int *a, int n) // finding min again and agian T(n) = O(n^2)
{
    int min, temp;
    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[min] > a[j])
                min = j;
        }

        if (min != i)
        {
            temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }
    }
}

void insertion_sort(int *a, int n)
{
    int temp, i, j;
    for (i = 1; i < n; i++)
    {
        temp = a[i];
        for (j = i; j > 0 && temp < a[j - 1]; j--)
        {
            a[j] = a[j - 1];
        }
        a[j] = temp;
    }
}

void merge_sort(int *a, int n)
{
    if (n <= 1)
        return;
    int i = 0, j = 0;
    int *b;
    b = (int *)malloc(sizeof(int) * n);
    merge_sort(a, n / 2);
    merge_sort(a + (n / 2), n - (n / 2));
    while (i < n / 2 && j < n - (n / 2))
    {
        if (a[i] < (a + (n / 2))[j])
        {
            b[i + j] = a[i];
            i++;
        }
        else
        {
            b[i + j] = (a + n / 2)[j];
            j++;
        }
    }
    while (i < n / 2)
    {
        b[i + j] = a[i];
        i++;
    }
    while (j < n - n / 2)
    {
        b[i + j] = (a + n / 2)[j];
        j++;
    }
    for (i = 0; i < n; i++)
    {
        a[i] = b[i];
    }
    free(b);
}

void quick_sort(int *a, int n)
{
    if (n <= 1)
        return;
    int i = 1, j = n - 1;
    int temp;
    while (i <= j)
    {
        while (a[i] <= a[0] && i < n)
            i++;
        while (a[j] > a[0])
            j--;

        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }

    temp = a[j];
    a[j] = a[0];
    a[0] = temp;

    quick_sort(a, j);
    quick_sort(a + i, n - i);
}

void counting_sort(int *a, int range, int n)
{
    int *b = (int *)calloc(range, sizeof(int));
    int *c = (int *)malloc(sizeof(int) * n);

    for (int i = 0; i < n; i++)
    {
        b[a[i]]++;
    }

    for (int i = 1; i < range; i++)
    {
        b[i] = b[i - 1];
    }
    b[0] = 0;
    for (int i = 1; i < range; i++)
    {
        b[i] += b[i - 1];
    }

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        c[i] = b[a[i]];
        b[a[i]]++;
    }
    free(b);
    free(c);
}