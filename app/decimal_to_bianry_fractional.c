#include <stdio.h>
#include <math.h>
int main()
{
    double n, b = 0;
    printf("Enter the number in decimal form : ");
    scanf("%lf", &n);
    int i = 0;
    while (n >= pow(2, i++))
    {
    }
    for (i = i - 2; n > 0 || i > -7; i--)
    {
        if (n >= pow(2, i))
        {
            b = b + (((int)(n / pow(2, i))) * pow(10, i));
            n = n - pow(2, i);
        }
    }
    printf("Decimal to Binary : %lf", b);
    return 0;
}