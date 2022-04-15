#include <stdio.h>
int main()
{
    int a, b, lcm;
    printf("Enter the numers : ");
    scanf("%d %d", &a, &b);
    if (a < b)
    {
        lcm = b;
        b = a;
        a = lcm;
    }
    if (b == 0)
    {
        printf("LCM = 0");
        return 1;
    }
    lcm = a;
    while (lcm % b != 0)
    {
        lcm = lcm + a;
    }

    printf("LCM = %d", lcm);
    return 0;
}