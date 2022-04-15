#include <stdio.h>
#include <stdlib.h>

int **Mat_mul(int **, int **, int, int, int);

int main()
{
    int i, j;
    int m, n, p;
    int **A, **B;
    int **M;
    printf("Enter m, n and p : ");
    scanf("%d %d %d", &m, &n, &p);
    while (m >= 10 || m < 1)
    {
        printf("Enter m again : ");
        scanf("%d", &m);
    }

    while (n >= 10 || n < 1)
    {
        printf("Enter n again : ");
        scanf("%d", &n);
    }

    while (p >= 10 || p < 1)
    {
        printf("Enter p again : ");
        scanf("%d", &p);
    }

    A = (int **)malloc(sizeof(int *) * m);
    for (i = 0; i < m; i++)
    {
        A[i] = (int *)malloc(sizeof(int) * n);
    }

    B = (int **)malloc(sizeof(int *) * n);
    for (i = 0; i < n; i++)
    {
        B[i] = (int *)malloc(sizeof(int) * p);
    }

    M = (int **)malloc(sizeof(int *) * m);
    for (i = 0; i < m; i++)
    {
        M[i] = (int *)malloc(sizeof(int) * p);
    }

    printf("Enter the elements of Matrix A :\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter entry (%d,%d) : ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the elements of Matrix B :\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < p; j++)
        {
            printf("Enter entry (%d,%d) : ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }

    printf("Matrix A :\n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%-5d ", A[i][j]);
        }
        printf("\n\n");
    }

    printf("Matrix B :\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < p; j++)
        {
            printf("%-5d ", B[i][j]);
        }
        printf("\n\n");
    }

    M = Mat_mul(A, B, m, n, p);

    printf("Product Matrix : \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            printf("%-5d ", M[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}

int **Mat_mul(int **A, int **B, int m, int n, int p)
{
    int **M;
    int i, j, k;

    M = (int **)malloc(sizeof(int *) * m);
    for (i = 0; i < m; i++)
    {
        M[i] = (int *)calloc(p, sizeof(int));
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < p; j++)
        {
            for (k = 0; k < n; k++)
            {
                M[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return M;
}