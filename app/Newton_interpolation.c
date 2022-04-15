#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int i, j;
    double *x, **f;
    double tmp;
    double xn, fn;

    printf("Newton's Divided Difference Interpolation Method ---\n");
    printf("Enter the number of initial conditions : ");
    scanf("%d", &n);

    x = (double *)malloc(sizeof(double) * n);
    f = (double **)malloc(sizeof(double *) * n);
    for (i = 0; i < n; i++)
    {
        f[i] = (double *)malloc(sizeof(double) * (n - i));
    }

    printf("Enter the values of xi and fi : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%lf", &x[i]);
        scanf("%lf", &f[0][i]);
    }

    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            f[i][j] = (f[i - 1][j + 1] - f[i - 1][j]) / (x[j + i] - x[j]);
        }
    }

    printf("Enter the value of x at which you want to interpolate : ");
    scanf("%lf", &xn);

    fn = f[0][0];
    for (i = 1; i < n; i++)
    {
        tmp = f[i][0];
        for (j = 0; j < i; j++)
        {
            tmp = tmp * (xn - x[j]);
        }
        fn = fn + tmp;
    }
    printf("The required value is (Forward Method) : %lf\n", fn);

    fn = f[0][n - 1];
    for (i = 1; i < n; i++)
    {
        tmp = f[i][n - 1 - i];
        for (j = 0; j < i; j++)
        {
            tmp = tmp * (xn - x[n - 1 - j]);
        }
        fn = fn + tmp;
    }
    printf("The required value is (Backward Method) : %lf", fn);

    return 0;
}