#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int i, j;
    double *x, *f;
    double xl, fl = 0, temp;
    printf("Lagrange's Interpolation Method ---\n");
    printf("Enter the number of initial conditons : ");
    scanf("%d", &n);
    x = (double *)malloc(sizeof(double) * n);
    f = (double *)malloc(sizeof(double) * n);
    printf("Enter xi and fi \n");
    for (i = 0; i < n; i++)
    {
        scanf("%lf", &x[i]);
        scanf("%lf", &f[i]);
    }
    printf("Enter the value at which you want the interpolation : ");
    scanf("%lf", &xl);
    for (i = 0; i < n; i++)
    {
        temp = f[i];
        for (j = 0; j < n; j++)
        {
            if (j == i)
                continue;
            temp = (temp * (xl - x[j])) / (x[i] - x[j]);
        }
        fl += temp;
    }
    printf("the value is : %lf", fl);
    fflush(stdin);
    getchar();
    return 0;
}