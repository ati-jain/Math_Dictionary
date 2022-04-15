#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n, i, j;
    double **m, c2 = 0, c1 = 0, cinf = 0, temp;
    printf("Enter the size of matrix : ");
    scanf("%d", &n);
    m = (double **)malloc(sizeof(double *) * n);
    for (i = 0; i < n; i++)
    {
        m[i] = (double *)malloc(sizeof(double) * n);
    }
    printf("Enter the matrix :\n");
    for (i = 0; i < n; i++)
    {
        temp = 0;
        for (j = 0; j < n; j++)
        {
            scanf("%lf", &m[i][j]);
            c2 += (m[i][j] * m[i][j]);
            temp += fabs(m[i][j]);
        }
        if (temp > cinf)
            cinf = temp;
    }
    c2 = sqrt(c2);
    for (j = 0; j < n; j++)
    {
        temp = 0;
        for (i = 0; i < n; i++)
        {
            temp += fabs(m[i][j]);
        }
        if (temp > c1)
            c1 = temp;
    }
    printf("||c2|| = %lf (sqrt of sum of squares)\n||c1|| = %lf (max sum of columns)\n||cinf|| = %lf (max sum of rows)", c2, c1, cinf);
    return 0;
}