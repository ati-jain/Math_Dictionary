#include <stdio.h>
#include <math.h>
int main()
{
    double x = 0.5;
    for (int i = 0; i < 10; i++)
    {
        x = -1 / ((3 * x * x) + (4 * x) + 4);
        printf("%d) %lf\n", i + 1, x);
    }
    return 0;
}