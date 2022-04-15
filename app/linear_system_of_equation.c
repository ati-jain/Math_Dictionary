#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int m, n, i, j, k, temp, ite;
    printf("Enter the size of Augmented matrix (eg. 4 5) : ");
    scanf("%d %d", &m, &n);

    double *xgs1, *xgs2, *xj1, *xj2;
    xgs1 = (double *)malloc(sizeof(double) * m); //for the variables xi
    xgs2 = (double *)malloc(sizeof(double) * m); //for the variables xi
    xj1 = (double *)malloc(sizeof(double) * m);
    xj2 = (double *)malloc(sizeof(double) * m);

    double **a = (double **)malloc(sizeof(double *) * m); //augmented matrix
    for (i = 0; i < m; i++)
    {
        a[i] = (double *)malloc(sizeof(double) * n);
    }

    printf("Enter the augmented matrix : \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%lf", &a[i][j]);
        }
    }

    for (i = 0; i < m; i++) //creating the identity matrix
    {
        j = i;
        while (a[j][i] == 0)
        {
            j++;
            if (j == m)
            {
                printf("Error");
                exit(1);
            }
        }

        if (j != i)
        {
            for (k = 0; k < n; k++)
            {
                temp = a[i][k];
                a[i][k] = a[j][k];
                a[j][k] = temp;
            }
        }

        temp = a[i][i];
        for (k = 0; k < n; k++)
        {
            a[i][k] = a[i][k] / temp; //making the diagonal 1
        }
    }

    printf("Enter the initial values :\n"); //taking initial values
    for (i = 0; i < m; i++)
    {
        scanf("%lf", &xgs1[i]);
        xj1[i] = xgs1[i];
        xgs2[i] = xgs1[i];
    }

    printf("Enter the number of iterations : ");
    scanf("%d", &ite);

    printf("Values at different iteration :\n");
    for (k = 0; k < ite; k++)
    {
        printf("%d)", k + 1);
        for (i = 0; i < m; i++)
        {
            xgs2[i] = a[i][m];
            xj2[i] = a[i][m];

            for (j = 0; j < i; j++)
            {
                xgs2[i] = xgs2[i] - (a[i][j] * xgs2[j]);
                xj2[i] = xj2[i] - (a[i][j] * xj1[j]);
            }

            for (j = i + 1; j < m; j++)
            {
                xgs2[i] = xgs2[i] - (a[i][j] * xgs2[j]);
                xj2[i] = xj2[i] - (a[i][j] * xj1[j]);
            }
        }

        printf("\nGauss Siedel : ");
        for (i = 0; i < m; i++)
        {
            printf("%lf  ", xgs2[i]); //printing gauss siedel values
        }
        printf("\nDifference :");
        for (i = 0; i < m; i++)
        {
            printf("%lf  ", xgs2[i] - xgs1[i]);
            xgs1[i] = xgs2[i];
        }

        printf("\nJacobi : ");
        for (i = 0; i < m; i++)
        {
            printf("%lf  ", xj2[i]); //printing jacobi values
        }
        printf("\nDifference : ");
        for (i = 0; i < m; i++)
        {
            printf("%lf  ", xj2[i] - xj1[i]);
            xj1[i] = xj2[i];
        }
        printf("\n\n");
    }

    while (getch() != 13)
        ;
    return 0;
}