#include <stdio.h>
int fact(int n)
{
    static int count = 1;
    printf("count = %d  ,  &count = %d\n", count, &count);
    count++;
    if (n > 0)
        return n * fact(n - 1);
    else
        return 1;
}
int main()
{
    int x, y, z;
    scanf("%d", &x);
    y = fact(x);
    z = fact(2 * x);
    printf("y = %d and z = %d", y, z);
    return 0;
}
