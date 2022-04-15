#include <stdio.h>
int fact(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}
double expo(double a, int b)
{
    double ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans = ans * a;
    }
    return ans;
}
double findTerm(int n, double x)
{
    if (n == 2)
        printf("1  ");
    else if (n > 2)
        printf("%0.10lf  ", findTerm(n - 1, x));
    return expo(x, 2 * (n - 1)) / fact(2 * (n - 1));
}
int main()
{
    double x;
    int n;
    do
    {
        printf("Enter x and n resp :\n");
        scanf("%lf %d", &x, &n);
    } while (x > 1);
    printf("%0.10lf", findTerm(n, x));
    return 0;
}