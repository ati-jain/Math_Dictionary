#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int l;
    int r;
    int x;
} cust;

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int check(cust *A, int n, int L)
{
    A[0].x = A[0].l;
    for (int i = 1; i < n; i++)
    {
        A[i].x = max(A[i - 1].x + L, A[i].l);
        if (A[i].x > A[i].r)
            return 0;
    }
    return 1;
}

void swap(cust *a, cust *b)
{
    cust c = *b;
    *b = *a;
    *a = c;
}

void perm(cust *A, int a, int n, int L, int *c)
{
    if (a == n - 1)
    {
        int t = check(A, n, L);
        if (t == 1)
            *c = 1;
        return;
    }

    for (int i = a; i < n; i++)
    {
        swap(&A[i], &A[a]);
        perm(A, a + 1, n, L, c);
        swap(&A[i], &A[a]);
    }
    return;
}

int main()
{
    int n;
    int i = 0, j = 100000;
    int L = 0; //b/w 0 to M
    scanf("%d", &n);
    cust *arr;
    arr = (cust *)malloc(sizeof(cust) * n);
    for (int i = 0; i < n; i++)
        scanf("%d %d", &arr[i].l, &arr[i].r);

    while (i <= j)
    {
        int m = (i + j) / 2;
        int check = 0;
        perm(arr, 0, n, m, &check);
        if (check == 1)
        {
            if (L < m)
                L = m;
            i = m + 1;
        }
        else
            j = m - 1;
    }

    printf("%d", L);
    return 0;
}