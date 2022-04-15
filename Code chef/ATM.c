#include <stdio.h>
int main()
{
    int X;
    float amount;
    scanf("%d%f", &X, &amount);
    if (X % 5 == 0 && (float)X <= (amount - 0.50))
        printf("%0.2f", amount - X - 0.50);
    else
        printf("%0.2f", amount);
    return 0;
}